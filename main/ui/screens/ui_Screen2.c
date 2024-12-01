// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.6
// Project name: Grinder

#include "../ui.h"

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x363636), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_homeButton = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_homeButton, 290);
    lv_obj_set_height(ui_homeButton, 80);
    lv_obj_set_x(ui_homeButton, 0);
    lv_obj_set_y(ui_homeButton, 200);
    lv_obj_set_align(ui_homeButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_homeButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_homeButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_homeButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_homeButton, &ui_img_home_checked_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_accountButton = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_accountButton, 255);
    lv_obj_set_height(ui_accountButton, 80);
    lv_obj_set_x(ui_accountButton, 272);
    lv_obj_set_y(ui_accountButton, 200);
    lv_obj_set_align(ui_accountButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_accountButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_accountButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_accountButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_accountButton, &ui_img_account_unchecked_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_settingButton = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_settingButton, 255);
    lv_obj_set_height(ui_settingButton, 80);
    lv_obj_set_x(ui_settingButton, -273);
    lv_obj_set_y(ui_settingButton, 200);
    lv_obj_set_align(ui_settingButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_settingButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_settingButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settingButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_settingButton, &ui_img_setting_unchecked_icon_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sysTimeLable = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_sysTimeLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sysTimeLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_sysTimeLable, 40);
    lv_obj_set_y(ui_sysTimeLable, -227);
    lv_obj_set_align(ui_sysTimeLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_sysTimeLable, "14:00");
    lv_obj_set_style_text_color(ui_sysTimeLable, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sysTimeLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sysTimeLable, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sysDateLable = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_sysDateLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_sysDateLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_sysDateLable, -40);
    lv_obj_set_y(ui_sysDateLable, -227);
    lv_obj_set_align(ui_sysDateLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_sysDateLable, "2024-11-30");
    lv_obj_set_style_text_color(ui_sysDateLable, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sysDateLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sysDateLable, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_homePanel = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_homePanel, 800);
    lv_obj_set_height(ui_homePanel, 371);
    lv_obj_set_x(ui_homePanel, 0);
    lv_obj_set_y(ui_homePanel, -26);
    lv_obj_set_align(ui_homePanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_homePanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_homePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_homePanel);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -284);
    lv_obj_set_y(ui_Label1, -158);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "电机转速");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Label1, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &ui_font_Font_cn_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_homePanel);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -72);
    lv_obj_set_y(ui_Label3, -79);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "RPM");
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_homePanel);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -284);
    lv_obj_set_y(ui_Label5, -31);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "运行时间");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Label5, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &ui_font_Font_cn_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_homePanel);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, -94);
    lv_obj_set_y(ui_Label7, 69);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "时/分/秒");
    lv_obj_set_style_text_font(ui_Label7, &ui_font_Font_cn_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_startupButton = lv_btn_create(ui_homePanel);
    lv_obj_set_width(ui_startupButton, 90);
    lv_obj_set_height(ui_startupButton, 90);
    lv_obj_set_x(ui_startupButton, 0);
    lv_obj_set_y(ui_startupButton, 132);
    lv_obj_set_align(ui_startupButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_startupButton, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_startupButton, lv_color_hex(0xBFEFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_startupButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_startupButton, &ui_img_start_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_startupButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_startupButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_startupButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_startupButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speedSetButton = lv_btn_create(ui_homePanel);
    lv_obj_set_width(ui_speedSetButton, 220);
    lv_obj_set_height(ui_speedSetButton, 71);
    lv_obj_set_x(ui_speedSetButton, -215);
    lv_obj_set_y(ui_speedSetButton, -98);
    lv_obj_set_align(ui_speedSetButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_speedSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_speedSetButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_speedSetButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_speedSetButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_speedSetButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_speedSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_speedSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speedSetLabel = lv_label_create(ui_speedSetButton);
    lv_obj_set_width(ui_speedSetLabel, 220);
    lv_obj_set_height(ui_speedSetLabel, 80);
    lv_obj_set_x(ui_speedSetLabel, 0);
    lv_obj_set_y(ui_speedSetLabel, -4);
    lv_obj_set_align(ui_speedSetLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speedSetLabel, "1800");
    lv_obj_add_flag(ui_speedSetLabel, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_speedSetLabel, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speedSetLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_speedSetLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_speedSetLabel, &ui_font_Font_num_86, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_speedSetLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_speedSetLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_timeHourSetButton = lv_btn_create(ui_homePanel);
    lv_obj_set_width(ui_timeHourSetButton, 80);
    lv_obj_set_height(ui_timeHourSetButton, 62);
    lv_obj_set_x(ui_timeHourSetButton, -285);
    lv_obj_set_y(ui_timeHourSetButton, 25);
    lv_obj_set_align(ui_timeHourSetButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_timeHourSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_timeHourSetButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_timeHourSetButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_timeHourSetButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_timeHourSetButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_timeHourSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_timeHourSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_timeHourSetLabel = lv_label_create(ui_timeHourSetButton);
    lv_obj_set_width(ui_timeHourSetLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_timeHourSetLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_timeHourSetLabel, 0);
    lv_obj_set_y(ui_timeHourSetLabel, 2);
    lv_obj_set_align(ui_timeHourSetLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_timeHourSetLabel, "00");
    lv_obj_add_flag(ui_timeHourSetLabel, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_timeHourSetLabel, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_timeHourSetLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_timeHourSetLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_timeHourSetLabel, &ui_font_Font_number_64, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_timeHourSetLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_timeHourSetLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_timeMinuteSetButton = lv_btn_create(ui_homePanel);
    lv_obj_set_width(ui_timeMinuteSetButton, 80);
    lv_obj_set_height(ui_timeMinuteSetButton, 62);
    lv_obj_set_x(ui_timeMinuteSetButton, -185);
    lv_obj_set_y(ui_timeMinuteSetButton, 25);
    lv_obj_set_align(ui_timeMinuteSetButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_timeMinuteSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_timeMinuteSetButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_timeMinuteSetButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_timeMinuteSetButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_timeMinuteSetButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_timeMinuteSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_timeMinuteSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_timeMinuteSetLabel = lv_label_create(ui_timeMinuteSetButton);
    lv_obj_set_width(ui_timeMinuteSetLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_timeMinuteSetLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_timeMinuteSetLabel, 0);
    lv_obj_set_y(ui_timeMinuteSetLabel, 2);
    lv_obj_set_align(ui_timeMinuteSetLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_timeMinuteSetLabel, "00");
    lv_obj_add_flag(ui_timeMinuteSetLabel, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_timeMinuteSetLabel, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_timeMinuteSetLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_timeMinuteSetLabel, &ui_font_Font_number_64, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_timeMinuteSetLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_timeMinuteSetLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_timeSecondSetButton = lv_btn_create(ui_homePanel);
    lv_obj_set_width(ui_timeSecondSetButton, 80);
    lv_obj_set_height(ui_timeSecondSetButton, 62);
    lv_obj_set_x(ui_timeSecondSetButton, -85);
    lv_obj_set_y(ui_timeSecondSetButton, 25);
    lv_obj_set_align(ui_timeSecondSetButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_timeSecondSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_timeSecondSetButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_timeSecondSetButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_timeSecondSetButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_timeSecondSetButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_x(ui_timeSecondSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_ofs_y(ui_timeSecondSetButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_timeSecondSetLabel = lv_label_create(ui_timeSecondSetButton);
    lv_obj_set_width(ui_timeSecondSetLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_timeSecondSetLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_timeSecondSetLabel, 0);
    lv_obj_set_y(ui_timeSecondSetLabel, 2);
    lv_obj_set_align(ui_timeSecondSetLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_timeSecondSetLabel, "20");
    lv_obj_add_flag(ui_timeSecondSetLabel, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_timeSecondSetLabel, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_timeSecondSetLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_timeSecondSetLabel, &ui_font_Font_number_64, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_timeSecondSetLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_timeSecondSetLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_homePanel);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -235);
    lv_obj_set_y(ui_Label4, 22);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, ":");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &ui_font_Font_number_64, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_homePanel);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, -135);
    lv_obj_set_y(ui_Label6, 22);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, ":");
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &ui_font_Font_number_64, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_motorSpeedChart = lv_chart_create(ui_homePanel);
    lv_obj_set_width(ui_motorSpeedChart, 350);
    lv_obj_set_height(ui_motorSpeedChart, 240);
    lv_obj_set_x(ui_motorSpeedChart, 210);
    lv_obj_set_y(ui_motorSpeedChart, -49);
    lv_obj_set_align(ui_motorSpeedChart, LV_ALIGN_CENTER);
    lv_chart_set_type(ui_motorSpeedChart, LV_CHART_TYPE_LINE);
    lv_chart_set_range(ui_motorSpeedChart, LV_CHART_AXIS_PRIMARY_Y, 0, 2500);
    lv_chart_set_range(ui_motorSpeedChart, LV_CHART_AXIS_SECONDARY_Y, 0, 2500);
    lv_chart_set_axis_tick(ui_motorSpeedChart, LV_CHART_AXIS_PRIMARY_X, 4, 0, 16, 1, true, 50);
    lv_chart_set_axis_tick(ui_motorSpeedChart, LV_CHART_AXIS_PRIMARY_Y, 5, 3, 6, 2, true, 50);
    lv_chart_set_axis_tick(ui_motorSpeedChart, LV_CHART_AXIS_SECONDARY_Y, 0, 0, 5, 2, false, 25);
    lv_chart_series_t * ui_motorSpeedChart_series_1 = lv_chart_add_series(ui_motorSpeedChart, lv_color_hex(0x00BFFF),
                                                                          LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_motorSpeedChart_series_1_array[] = { 0, 1800, 1800, 1800, 1800, 1800, 1800, 1800, 1800, 1800, 1800 };
    lv_chart_set_ext_y_array(ui_motorSpeedChart, ui_motorSpeedChart_series_1, ui_motorSpeedChart_series_1_array);
    lv_obj_set_style_radius(ui_motorSpeedChart, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_motorSpeedChart, lv_color_hex(0x828282), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_motorSpeedChart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_motorSpeedChart, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_motorSpeedChart, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_motorSpeedChart, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_motorSpeedChart, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_motorSpeedChart, 0, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_startupConfirmationPanel = lv_obj_create(ui_homePanel);
    lv_obj_set_width(ui_startupConfirmationPanel, 300);
    lv_obj_set_height(ui_startupConfirmationPanel, 200);
    lv_obj_set_align(ui_startupConfirmationPanel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_startupConfirmationPanel, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_startupConfirmationPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_startupConfirmationPanel, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_startupConfirmationPanel, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_startupConfirmationPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_startupConfirmationPanel, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_startupOkButton = lv_btn_create(ui_startupConfirmationPanel);
    lv_obj_set_width(ui_startupOkButton, 80);
    lv_obj_set_height(ui_startupOkButton, 50);
    lv_obj_set_x(ui_startupOkButton, 60);
    lv_obj_set_y(ui_startupOkButton, 55);
    lv_obj_set_align(ui_startupOkButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_startupOkButton, 18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_startupOkButton, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_startupOkButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_startupOkButton, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_startupOkButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_startupOkButton, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_startupOkButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_startupOkButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_startupOkButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_startupOkButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_startupOkButton);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, 0);
    lv_obj_set_y(ui_Label8, -1);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "OK");
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_startupQuitButton = lv_btn_create(ui_startupConfirmationPanel);
    lv_obj_set_width(ui_startupQuitButton, 80);
    lv_obj_set_height(ui_startupQuitButton, 50);
    lv_obj_set_x(ui_startupQuitButton, -60);
    lv_obj_set_y(ui_startupQuitButton, 55);
    lv_obj_set_align(ui_startupQuitButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_startupQuitButton, 18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_startupQuitButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_startupQuitButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_startupQuitButton, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_startupQuitButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_startupQuitButton, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_startupQuitButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_startupQuitButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_startupQuitButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_startupQuitButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_startupQuitButton);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, 0);
    lv_obj_set_y(ui_Label9, -1);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "NO");
    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_startupConfirmationPanel);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, -70);
    lv_obj_set_y(ui_Label10, -60);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "电机转速: ");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label10, &ui_font_Font_cn_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_startupConfirmationPanel);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, -70);
    lv_obj_set_y(ui_Label11, -12);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "运行时间: ");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &ui_font_Font_cn_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speedConfimationLabel = lv_label_create(ui_startupConfirmationPanel);
    lv_obj_set_width(ui_speedConfimationLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_speedConfimationLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_speedConfimationLabel, 63);
    lv_obj_set_y(ui_speedConfimationLabel, -60);
    lv_obj_set_align(ui_speedConfimationLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speedConfimationLabel, "1800 RPM");
    lv_obj_set_style_text_color(ui_speedConfimationLabel, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speedConfimationLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_speedConfimationLabel, &ui_font_Font_cn_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_runTimeConfimationLabel = lv_label_create(ui_startupConfirmationPanel);
    lv_obj_set_width(ui_runTimeConfimationLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_runTimeConfimationLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_runTimeConfimationLabel, 63);
    lv_obj_set_y(ui_runTimeConfimationLabel, -12);
    lv_obj_set_align(ui_runTimeConfimationLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_runTimeConfimationLabel, "00:00:20");
    lv_obj_set_style_text_color(ui_runTimeConfimationLabel, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_runTimeConfimationLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_runTimeConfimationLabel, &ui_font_Font_cn_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_accountPanel = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_accountPanel, 800);
    lv_obj_set_height(ui_accountPanel, 371);
    lv_obj_set_x(ui_accountPanel, 0);
    lv_obj_set_y(ui_accountPanel, -26);
    lv_obj_set_align(ui_accountPanel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_accountPanel, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_accountPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_accountPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_userImage = lv_img_create(ui_accountPanel);
    lv_img_set_src(ui_userImage, &ui_img_user_sign_out_png);
    lv_obj_set_width(ui_userImage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_userImage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_userImage, 238);
    lv_obj_set_y(ui_userImage, -110);
    lv_obj_set_align(ui_userImage, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_userImage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_userImage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_userImage, 18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_userImage, lv_color_hex(0x8A8A8A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_userImage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_userImage, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_accountLabel = lv_label_create(ui_accountPanel);
    lv_obj_set_width(ui_accountLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_accountLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_accountLabel, 238);
    lv_obj_set_y(ui_accountLabel, -34);
    lv_obj_set_align(ui_accountLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_accountLabel, "未登录");
    lv_obj_set_style_text_color(ui_accountLabel, lv_color_hex(0x1C1C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_accountLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_accountLabel, &ui_font_Font_cn_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_signUpButton = lv_btn_create(ui_accountPanel);
    lv_obj_set_width(ui_signUpButton, 80);
    lv_obj_set_height(ui_signUpButton, 55);
    lv_obj_set_x(ui_signUpButton, 298);
    lv_obj_set_y(ui_signUpButton, 20);
    lv_obj_set_align(ui_signUpButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_signUpButton, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_signUpButton, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_signUpButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_signUpButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_signUpButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_signUpButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_signUpButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_signUpButton);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, 1);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "注册");
    lv_obj_set_style_text_font(ui_Label12, &ui_font_Font_cn_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_signInButton = lv_btn_create(ui_accountPanel);
    lv_obj_set_width(ui_signInButton, 80);
    lv_obj_set_height(ui_signInButton, 55);
    lv_obj_set_x(ui_signInButton, 178);
    lv_obj_set_y(ui_signInButton, 20);
    lv_obj_set_align(ui_signInButton, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_signInButton, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_signInButton, lv_color_hex(0x00BFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_signInButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_signInButton, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_signInButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_signInButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_signInButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_signInButton);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, 0);
    lv_obj_set_y(ui_Label13, 1);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "登录");
    lv_obj_set_style_text_font(ui_Label13, &ui_font_Font_cn_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_fingerprintImage = lv_img_create(ui_accountPanel);
    lv_img_set_src(ui_fingerprintImage, &ui_img_fingerprint_unchecked_png);
    lv_obj_set_width(ui_fingerprintImage, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_fingerprintImage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_fingerprintImage, 238);
    lv_obj_set_y(ui_fingerprintImage, 110);
    lv_obj_set_align(ui_fingerprintImage, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_fingerprintImage, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_fingerprintImage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel4 = lv_obj_create(ui_accountPanel);
    lv_obj_set_width(ui_Panel4, 3);
    lv_obj_set_height(ui_Panel4, 360);
    lv_obj_set_x(ui_Panel4, 80);
    lv_obj_set_y(ui_Panel4, 0);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0xBFEFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Panel4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_homeButton, ui_event_homeButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_accountButton, ui_event_accountButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_settingButton, ui_event_settingButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_startupButton, ui_event_startupButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_speedSetButton, ui_event_speedSetButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_timeHourSetButton, ui_event_timeHourSetButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_timeMinuteSetButton, ui_event_timeMinuteSetButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_timeSecondSetButton, ui_event_timeSecondSetButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_startupOkButton, ui_event_startupOkButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_startupQuitButton, ui_event_startupQuitButton, LV_EVENT_ALL, NULL);

}
