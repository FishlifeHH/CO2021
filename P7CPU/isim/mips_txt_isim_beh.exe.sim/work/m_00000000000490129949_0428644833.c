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
static const char *ng0 = "D:/VHDLfile/P7CPU/mux.v";
static unsigned int ng1[] = {16768U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static int ng8[] = {4, 0};



static void Always_55_0(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);

LAB9:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB10:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB23:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB23;

LAB13:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB23;

LAB15:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB23;

LAB21:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng8)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t4, 32);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t14, 0, 0, 32);
    goto LAB23;

}


extern void work_m_00000000000490129949_0428644833_init()
{
	static char *pe[] = {(void *)Always_55_0};
	xsi_register_didat("work_m_00000000000490129949_0428644833", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000490129949_0428644833.didat");
	xsi_register_executes(pe);
}
