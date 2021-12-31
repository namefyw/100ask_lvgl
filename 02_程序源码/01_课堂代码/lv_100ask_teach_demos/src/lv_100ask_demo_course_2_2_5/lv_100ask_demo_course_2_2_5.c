/**
 ******************************************************************************
 * @file    lv_100ask_demo_course_2_2_5.c
 * @author  百问科技
 * @version V1.0
 * @date    2021-12-30
 * @brief	2_2_4课的课堂代码
 ******************************************************************************
 * Change Logs:
 * Date           Author          Notes
 * 2021-12-30     zhouyuebiao     First version
 ******************************************************************************
 * @attention
 *
 * Copyright (C) 2008-2021 深圳百问网科技有限公司<https://www.100ask.net/>
 * All rights reserved
 *
 ******************************************************************************
 */


/*********************
 *      INCLUDES
 *********************/
#include "../../lv_100ask_teach_demos.h"

#if 1 // LV_USE_100ASK_DEMO_COURSE_2_2_5

#include <stdio.h>
#include "lv_100ask_demo_course_2_2_5.h"


/*********************
 *      DEFINES
 *********************/


/**********************
 *  STATIC VARIABLES
 **********************/
static /**
 * Show how to style a slider.
 */
void lv_example_slider_2(void)
{
    /*Create a transition*/
    static const lv_style_prop_t props[] = {LV_STYLE_BG_COLOR, 0};
    static lv_style_transition_dsc_t transition_dsc;
    lv_style_transition_dsc_init(&transition_dsc, props, lv_anim_path_linear, 300, 0, NULL);

    static lv_style_t style_main;
    static lv_style_t style_indicator;
    static lv_style_t style_knob;
    static lv_style_t style_pressed_color;
    lv_style_init(&style_main);
    lv_style_set_bg_opa(&style_main, LV_OPA_COVER);
    lv_style_set_bg_color(&style_main, lv_color_hex3(0xbbb));
    //lv_style_set_outline_width(&style_main, 5);
    //lv_style_set_border_width(&style_main, 2);
    lv_style_set_radius(&style_main, LV_RADIUS_CIRCLE);
    lv_style_set_pad_ver(&style_main, -2); /*Makes the indicator larger*/

    lv_style_init(&style_indicator);
    lv_style_set_bg_opa(&style_indicator, LV_OPA_COVER);
    lv_style_set_bg_color(&style_indicator, lv_palette_main(LV_PALETTE_CYAN));
    lv_style_set_radius(&style_indicator, LV_RADIUS_CIRCLE);
    lv_style_set_transition(&style_indicator, &transition_dsc);

    lv_style_init(&style_knob);
    lv_style_set_bg_opa(&style_knob, LV_OPA_COVER);
    lv_style_set_bg_color(&style_knob, lv_palette_main(LV_PALETTE_CYAN));
    lv_style_set_border_color(&style_knob, lv_palette_darken(LV_PALETTE_CYAN, 3));
    lv_style_set_border_width(&style_knob, 2);
    lv_style_set_radius(&style_knob, LV_RADIUS_CIRCLE);
    lv_style_set_pad_all(&style_knob, 6); /*Makes the knob larger*/
    lv_style_set_transition(&style_knob, &transition_dsc);

    lv_style_init(&style_pressed_color);
    lv_style_set_bg_color(&style_pressed_color, lv_palette_darken(LV_PALETTE_CYAN, 2));

    /*Create a slider and add the style*/
    lv_obj_t * slider = lv_slider_create(lv_scr_act());
    lv_obj_remove_style_all(slider);        /*Remove the styles coming from the theme*/

    lv_obj_add_style(slider, &style_main, LV_PART_MAIN);
    lv_obj_add_style(slider, &style_indicator, LV_PART_INDICATOR);
    lv_obj_add_style(slider, &style_pressed_color, LV_PART_INDICATOR | LV_STATE_PRESSED);
    lv_obj_add_style(slider, &style_knob, LV_PART_KNOB);
    lv_obj_add_style(slider, &style_pressed_color, LV_PART_KNOB | LV_STATE_PRESSED);

    lv_obj_center(slider);
}

void lv_100ask_demo_course_2_2_5(void)
{
#if 1
    // 正常样式
    static lv_style_t style_obj;

	lv_style_init(&style_obj);
    lv_style_set_bg_color(&style_obj, lv_color_hex(0x000000));   // 设置背景色
    lv_style_set_text_color(&style_obj, lv_color_hex(0xc43e1c));   // 设置背景色
    //lv_style_set_bg_color(&style_obj, lv_color_hex(0xc43e1c));   // 设置背景色
    //lv_style_set_bg_opa(&style_obj, 30);   // 设置背景色

    // 创建对象
    lv_obj_t * obj = lv_obj_create(lv_scr_act());

    lv_obj_t * obj2 = lv_obj_create(lv_scr_act());
    lv_obj_align(obj2, LV_ALIGN_CENTER, 0 ,0);

    // 本地样式
    //lv_obj_set_style_bg_color(obj,  lv_color_hex(0xc43e1c), LV_STATE_PRESSED);   // 设置背景色
    //lv_obj_set_style_bg_color(obj2,  lv_color_hex(0xc43e1c), LV_STATE_PRESSED);   // 设置背景色
    //lv_obj_set_style_bg_opa(obj, LV_OPA_50, 0);	              // 设置背景透明度

    // 添加样式到对象
    lv_obj_add_style(obj, &style_obj, LV_STATE_PRESSED);   // 默认(常用)
    lv_obj_add_style(obj2, &style_obj, LV_STATE_PRESSED);   // 默认(常用)
#endif

    // 滑杆示例
    //lv_example_slider_2();
}


#endif /* LV_USE_100ASK_DEMO_COURSE_2_2_5 */
