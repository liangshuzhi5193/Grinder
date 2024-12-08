#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/queue.h"
#include "freertos/task.h"
#include "driver/uart.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "esp_log.h"

static const char *TAG = "figreprint_recognition";

#define UART_ECHO_TXD (GPIO_NUM_6)
#define UART_ECHO_RXD (GPIO_NUM_7)
#define UART_ECHO_RTS (-1)
#define UART_ECHO_CTS (-1)

#define ECHO_UART_PORT_NUM      (1)
#define ECHO_UART_BAUD_RATE     (57600)
#define ECHO_TASK_STACK_SIZE    (4096)
#define BUF_SIZE (256)

#define TOUCH_OUT_PIN           (GPIO_NUM_15)

static QueueHandle_t gpio_evt_queue = NULL;

uint8_t led_red_double_flash[16] = {0xEF,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x00,0x07,0x3C,0x02,0x04,0x04,0x02,0x00,0x50};


uint16_t get_valid_template_num(void)
{
    uint8_t *data = (uint8_t *) malloc(BUF_SIZE);
    uint8_t ps_valid_template_num[12] = {0xEF,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x00,0x03,0x1d,0x00,0x21};
    uart_write_bytes(ECHO_UART_PORT_NUM, (const char *) ps_valid_template_num, sizeof(ps_valid_template_num));
    vTaskDelay(50 / portTICK_PERIOD_MS);
    int len = uart_read_bytes(ECHO_UART_PORT_NUM, data, (BUF_SIZE - 1), 20 / portTICK_PERIOD_MS);
    uint16_t template_num = 0;
    if (len) {
        template_num = ((uint16_t)data[10] << 8) | (uint16_t)data[11];
    }
    free(data);
    return template_num;
}

uint16_t search_fingerprint(void)
{
    vTaskDelay(1500 / portTICK_PERIOD_MS);
    uint8_t *data = (uint8_t *) malloc(BUF_SIZE);
    uint8_t ps_auto_identify[17] = {0xEF,0x01,0xFF,0xFF,0xFF,0xFF,0x01,0x00,0x08,0x32,0xFF,0xFF,0xFF,0x00,0x00,0x03,0x38};
    uart_write_bytes(ECHO_UART_PORT_NUM, (const char *) ps_auto_identify, sizeof(ps_auto_identify));
    vTaskDelay(50 / portTICK_PERIOD_MS);
    int len = uart_read_bytes(ECHO_UART_PORT_NUM, data, (BUF_SIZE - 1), 20 / portTICK_PERIOD_MS);
    uint16_t fingerprint_id = 65535;
    if (len == 51) {
        // ESP_LOGI(TAG, "Received %d bytes", len);
        // for (int i = 0; i < len; i++) {
        //     ESP_LOGI(TAG, "Byte[%d]: 0x%02X", i, data[i]);
        //     vTaskDelay(10 / portTICK_PERIOD_MS);
        // }
        // ESP_LOGI(TAG, "\n");
        fingerprint_id = ((uint16_t)data[28] << 8) | (uint16_t)data[29];
    }
    free(data);
    return fingerprint_id;
}

static void IRAM_ATTR gpio_isr_handler(void *arg)
{
    uint32_t gpio_num = (uint32_t)arg;
    xQueueSendFromISR(gpio_evt_queue, &gpio_num, NULL);
}

static void fingerprint_recognition_task(void *arg)
{
    gpio_evt_queue = xQueueCreate(10, sizeof(uint32_t));
    if (!gpio_evt_queue) {
        ESP_LOGE(TAG, "Failed to create queue");
        return;
    }
    /* Configure parameters of an UART driver,
     * communication pins and install the driver */
    uart_config_t uart_config = {
        .baud_rate = ECHO_UART_BAUD_RATE,
        .data_bits = UART_DATA_8_BITS,
        .parity    = UART_PARITY_DISABLE,
        .stop_bits = UART_STOP_BITS_1,
        .flow_ctrl = UART_HW_FLOWCTRL_DISABLE,
        .source_clk = UART_SCLK_DEFAULT,
    };
    int intr_alloc_flags = 0;

#if CONFIG_UART_ISR_IN_IRAM
    intr_alloc_flags = ESP_INTR_FLAG_IRAM;
#endif

    ESP_ERROR_CHECK(uart_driver_install(ECHO_UART_PORT_NUM, BUF_SIZE * 2, 0, 0, NULL, intr_alloc_flags));
    ESP_ERROR_CHECK(uart_param_config(ECHO_UART_PORT_NUM, &uart_config));
    ESP_ERROR_CHECK(uart_set_pin(ECHO_UART_PORT_NUM, UART_ECHO_TXD, UART_ECHO_RXD, UART_ECHO_RTS, UART_ECHO_CTS));

    gpio_config_t io_conf = {
        .intr_type = GPIO_INTR_POSEDGE,
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = (1ULL << TOUCH_OUT_PIN),
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_ENABLE
    };
    gpio_config(&io_conf);

    gpio_install_isr_service(0);

    gpio_isr_handler_add(TOUCH_OUT_PIN, gpio_isr_handler, (void *)TOUCH_OUT_PIN);

    ESP_LOGI(TAG, "GPIO interrupt configured on pin %d", TOUCH_OUT_PIN);

    uint16_t template_num = get_valid_template_num();
    template_num = get_valid_template_num();
    template_num = get_valid_template_num();
    ESP_LOGI(TAG, "valid template num: %d", template_num);
    uint32_t io_num;
    while (1) {
        if (xQueueReceive(gpio_evt_queue, &io_num, portMAX_DELAY)) {
            ESP_LOGI(TAG, "GPIO %ld triggered, starting fingerprint recognition", io_num);
            uint16_t fingerprint_id = 65535;
            fingerprint_id = search_fingerprint();
            fingerprint_id = search_fingerprint();
            if (fingerprint_id != 65535) {
                if (fingerprint_id <= template_num) {
                    ESP_EARLY_LOGI(TAG, "fingerprint matching successful!!! id: %d", fingerprint_id);
                } else {
                    ESP_EARLY_LOGI(TAG, "fingerprint matching failed, Invalid fingerprint");
                }
            }
        }
    }
}

void app_main(void)
{
    ESP_LOGI(TAG, "Hello world!");
    xTaskCreate(fingerprint_recognition_task, "fingerprint_recognition_task", ECHO_TASK_STACK_SIZE, NULL, 10, NULL);
}
