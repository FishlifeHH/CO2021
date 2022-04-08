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
static const char *ng0 = "D:/VHDLfile/P7CPU/DMfdata2mdata.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {12U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};
static unsigned int ng9[] = {4294967295U, 0U};



static void Always_28_0(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

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
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t7 = (t0 + 2000U);
    t8 = *((char **)t7);
    t7 = (t0 + 2560);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB23;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    t8 = ((char*)((ng3)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t8, 16, t10, 16);
    t17 = (t0 + 2560);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);
    goto LAB23;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2000U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 65535U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 65535U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t10, 16, t3, 16);
    t17 = (t0 + 2560);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);
    goto LAB23;

LAB13:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t8 = ((char*)((ng3)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t8, 24, t10, 8);
    t17 = (t0 + 2560);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);
    goto LAB23;

LAB15:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2000U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t17 = ((char*)((ng3)));
    xsi_vlogtype_concat(t9, 32, 32, 3U, t17, 16, t10, 8, t3, 8);
    t18 = (t0 + 2560);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2000U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t17 = ((char*)((ng3)));
    xsi_vlogtype_concat(t9, 32, 32, 3U, t17, 8, t10, 8, t3, 16);
    t18 = (t0 + 2560);
    xsi_vlogvar_assign_value(t18, t9, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2000U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t4 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t10, 8, t3, 24);
    t17 = (t0 + 2560);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 32);
    goto LAB23;

}


extern void work_m_00000000002792188492_0517841365_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002792188492_0517841365", "isim/mips_isim_beh.exe.sim/work/m_00000000002792188492_0517841365.didat");
	xsi_register_executes(pe);
}
