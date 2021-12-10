/**
 ******************************************************************************
 * @file    lv_100ask_demo_section_1.c
 * @author  百问科技
 * @version V1.0
 * @date    2021-12-02
 * @brief	第一节的课堂代码
 ******************************************************************************
 * Change Logs:
 * Date           Author          Notes
 * 2021-12-02     zhouyuebiao     First version
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

#if LV_USE_100ASK_DEMO_SECTION_1

#include <stdio.h>
#include "lv_100ask_demo_section_1.h"


/*********************
 *      DEFINES
 *********************/


/**********************
 *  STATIC VARIABLES
 **********************/


void lv_100ask_demo_section_1(void)
{
    lv_obj_t * obj = lv_btn_create(lv_scr_act());
    lv_obj_center(obj);
}


#endif /* LV_USE_100ASK_DEMO_SECTION_1 */
