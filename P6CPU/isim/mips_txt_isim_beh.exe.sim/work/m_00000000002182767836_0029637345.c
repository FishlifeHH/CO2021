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
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {32, 0};
static unsigned int ng7[] = {4294967295U, 0U};



static void Always_32_0(char *t0)
{
    char t7[16];
    char t10[16];
    char t12[16];
    char t14[8];
    char t15[8];
    char t16[8];
    char t24[16];
    char t29[8];
    char t37[16];
    char t38[16];
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
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

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(45, ng0);

LAB22:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    xsi_vlogtype_sign_extend(t7, 64, t9, 32);
    t8 = (t0 + 1208U);
    t11 = *((char **)t8);
    xsi_vlogtype_sign_extend(t10, 64, t11, 32);
    xsi_vlog_signed_multiply(t12, 64, t7, 64, t10, 64);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t12, 0, 0, 32);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t12, 32, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    xsi_vlog_unsigned_multiply(t7, 64, t4, 32, t8, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 32);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t7, 32, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(36, ng0);

LAB20:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t16, 0, 8);
    xsi_vlog_signed_divide(t16, 32, t4, 32, t8, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t16, 0, 8);
    xsi_vlog_signed_mod(t16, 32, t3, 32, t4, 32);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t16, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(40, ng0);

LAB21:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t8 = *((char **)t3);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_divide(t14, 32, t4, 32, t8, 32);
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t14, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_mod(t14, 32, t3, 32, t4, 32);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t8 = *((char **)t3);
    xsi_vlogtype_concat(t7, 64, 64, 2U, t8, 32, t4, 32);
    t3 = (t0 + 1048U);
    t9 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t11 = (t0 + 1048U);
    t13 = *((char **)t11);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t17 = (t13 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t11) = t23;
    xsi_vlog_mul_concat(t14, 32, 1, t3, 1U, t15, 1);
    xsi_vlogtype_concat(t12, 64, 64, 2U, t14, 32, t9, 32);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng6)));
    t27 = (t0 + 1208U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t27 = (t29 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 31);
    t33 = (t32 & 1);
    *((unsigned int *)t29) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 31);
    t36 = (t35 & 1);
    *((unsigned int *)t27) = t36;
    xsi_vlog_mul_concat(t16, 32, 1, t25, 1U, t29, 1);
    xsi_vlogtype_concat(t24, 64, 64, 2U, t16, 32, t26, 32);
    xsi_vlog_unsigned_multiply(t37, 64, t12, 64, t24, 64);
    xsi_vlog_unsigned_add(t38, 64, t7, 64, t37, 64);
    t39 = (t0 + 2248);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 32);
    t40 = (t0 + 2088);
    xsi_vlogvar_assign_value(t40, t38, 32, 0, 32);
    goto LAB19;

}


extern void work_m_00000000002182767836_0029637345_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002182767836_0029637345", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002182767836_0029637345.didat");
	xsi_register_executes(pe);
}
