#include <stdio.h>
#include "ui.h"
#include "ui_events.h"
#include "esp_log.h"

static const char *TAG = "UI_EVENTS";

static bool startup_state = false;

void ui_event_home_button_clicked(lv_event_t * e)
{
    ESP_LOGI(TAG, "Home Page");
    lv_obj_set_style_bg_img_src(ui_homeButton, &ui_img_home_checked_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_accountButton, &ui_img_account_unchecked_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_clear_flag(ui_homePanel, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_accountPanel, LV_OBJ_FLAG_HIDDEN);
}

void ui_event_account_button_clicked(lv_event_t * e)
{
    ESP_LOGI(TAG, "Account Page");
    lv_obj_set_style_bg_img_src(ui_homeButton, &ui_img_home_unchecked_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_accountButton, &ui_img_account_checked_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(ui_homePanel, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_accountPanel, LV_OBJ_FLAG_HIDDEN);
}

void ui_event_setting_button_clicked(lv_event_t * e)
{
    ESP_LOGI(TAG, "Setting Page");
}

void ui_event_set_motor_speed(lv_event_t * e)
{
    ESP_LOGI(TAG, "Motor speed changed");
    lv_obj_set_style_bg_color(ui_speedSetLabel, lv_color_hex(0xBFEFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
}

void ui_event_set_time_hour(lv_event_t * e)
{
    ESP_LOGI(TAG, "Time hour changed");
    lv_obj_set_style_bg_color(ui_timeHourSetLabel, lv_color_hex(0xBFEFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
}

void ui_event_set_time_minute(lv_event_t * e)
{
    ESP_LOGI(TAG, "Time minute changed");
    lv_obj_set_style_bg_color(ui_timeMinuteSetLabel, lv_color_hex(0xBFEFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
}

void ui_event_set_time_second(lv_event_t * e)
{
    ESP_LOGI(TAG, "Time second changed");
    lv_obj_set_style_bg_color(ui_timeSecondSetLabel, lv_color_hex(0xBFEFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
}

void ui_event_startup_button(lv_event_t * e)
{
    if (!startup_state) {
        lv_obj_clear_flag(ui_startupConfirmationPanel, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_set_style_bg_img_src(ui_startupButton, &ui_img_start_png, LV_PART_MAIN | LV_STATE_DEFAULT);
        startup_state = false;
    }
}

void ui_event_startup_ok_button(lv_event_t * e)
{
    lv_obj_add_flag(ui_startupConfirmationPanel, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_style_bg_img_src(ui_startupButton, &ui_img_stop_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    startup_state = true;
}

void ui_event_startup_no_button(lv_event_t * e)
{
    if (!startup_state) {
        lv_obj_add_flag(ui_startupConfirmationPanel, LV_OBJ_FLAG_HIDDEN);
    }
}

