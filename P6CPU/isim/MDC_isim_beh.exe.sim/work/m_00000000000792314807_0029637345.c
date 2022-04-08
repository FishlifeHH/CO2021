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
static const char *ng0 = "D:/VHDLfile/P6CPU/MDC.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4294967295U, 0U};



static void Always_30_0(char *t0)
{
    char t7[16];
    char t10[16];
    char t12[16];
    char t14[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t11;
    char *t13;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5208);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(42, ng0);

LAB20:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(32, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    xsi_vlogtype_sign_extend(t7, 64, t9, 32);
    t8 = (t0 + 1208U);
    t11 = *((char **)t8);
    xsi_vlogtype_sign_extend(t10, 64, t11, 32);
    xsi_vlog_signed_multiply(t12, 64, t7, 64, t10, 64);
    t8 = (t0 + 2728);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 32);
    t13 = (t0 + 2568);
    xsi_vlogvar_assign_value(t13, t12, 32, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    xsi_vlog_get_part_select_value(t7, 64, t4, 63, 0);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 32);
    t8 = (t0 + 2568);
    xsi_vlogvar_assign_value(t8, t7, 32, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(34, ng0);

LAB18:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t16, 0, 8);
    xsi_vlog_signed_divide(t16, 32, t4, 32, t8, 32);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t3, 32, t4, 32);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t16, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(38, ng0);

LAB19:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t8);
    t20 = (t19 >> 0);
    *((unsigned int *)t3) = t20;
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 & 4294967295U);
    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 4294967295U);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t14, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t18 = (t17 >> 0);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t4);
    t20 = (t19 >> 0);
    *((unsigned int *)t2) = t20;
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 & 4294967295U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 4294967295U);
    t8 = (t0 + 2568);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB17;

}

static void Cont_48_1(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 33, 33, 2U, t2, 1, t4, 32);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t5, 0, 32);
    t10 = (t0 + 5224);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_49_2(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 33, 33, 2U, t2, 1, t4, 32);
    t5 = (t0 + 5432);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t5, 0, 32);
    t10 = (t0 + 5240);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_50_3(char *t0)
{
    char t5[24];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_multiply(t5, 66, t3, 33, t4, 33);
    t2 = (t0 + 5496);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t5, 0, 66);
    xsi_driver_vfirst_trans(t2, 0, 65);
    t10 = (t0 + 5256);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_51_4(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_divide(t5, 33, t3, 33, t4, 33);
    t2 = (t0 + 5560);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t5, 0, 33);
    xsi_driver_vfirst_trans(t2, 0, 32);
    t10 = (t0 + 5272);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_52_5(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_mod(t5, 33, t3, 33, t4, 33);
    t2 = (t0 + 5624);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t5, 0, 33);
    xsi_driver_vfirst_trans(t2, 0, 32);
    t10 = (t0 + 5288);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000000792314807_0029637345_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Cont_48_1,(void *)Cont_49_2,(void *)Cont_50_3,(void *)Cont_51_4,(void *)Cont_52_5};
	xsi_register_didat("work_m_00000000000792314807_0029637345", "isim/MDC_isim_beh.exe.sim/work/m_00000000000792314807_0029637345.didat");
	xsi_register_executes(pe);
}
