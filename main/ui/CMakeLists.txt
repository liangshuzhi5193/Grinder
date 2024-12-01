SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    images/ui_img_iw_logo_200x106_png.c
    images/ui_img_home_checked_icon_png.c
    images/ui_img_home_unchecked_icon_png.c
    images/ui_img_account_checked_png.c
    images/ui_img_account_unchecked_png.c
    images/ui_img_setting_checked_icon_png.c
    images/ui_img_setting_unchecked_icon_png.c
    images/ui_img_start_png.c
    images/ui_img_stop_png.c
    images/ui_img_user_sign_out_png.c
    images/ui_img_fingerprint_unchecked_png.c
    fonts/ui_font_Font_cn_28.c
    fonts/ui_font_Font_cn_36.c
    fonts/ui_font_Font_num_86.c
    fonts/ui_font_Font_number_64.c
    fonts/ui_font_Font_cn_25.c)

add_library(ui ${SOURCES})
