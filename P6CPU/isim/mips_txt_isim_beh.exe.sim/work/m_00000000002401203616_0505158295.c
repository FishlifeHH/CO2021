/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/VHDLfile/P6CPU/byteen_generator.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};



static void Always_28_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3800);
    *((int *)t2) = 1;
    t3 = (t0 + 3512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 2000U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 2560);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2560);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(32, ng0);

LAB16:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);

LAB17:    t3 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t9 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB24:    goto LAB15;

LAB13:    xsi_set_current_line(39, ng0);

LAB25:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2160U);
    t7 = *((char **)t3);

LAB26:    t3 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 2, t3, 2);
    if (t9 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB15;

LAB18:    xsi_set_current_line(34, ng0);
    t7 = ((char*)((ng5)));
    t8 = (t0 + 2560);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB24;

LAB20:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng6)));
    t7 = (t0 + 2560);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    goto LAB24;

LAB27:    xsi_set_current_line(41, ng0);
    t8 = ((char*)((ng2)));
    t10 = (t0 + 2560);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 4);
    goto LAB35;

LAB29:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng4)));
    t8 = (t0 + 2560);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);
    goto LAB35;

LAB31:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng7)));
    t8 = (t0 + 2560);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);
    goto LAB35;

LAB33:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng8)));
    t8 = (t0 + 2560);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);
    goto LAB35;

}


extern void work_m_00000000002401203616_0505158295_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002401203616_0505158295", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002401203616_0505158295.didat");
	xsi_register_executes(pe);
}
