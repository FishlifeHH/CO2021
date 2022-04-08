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
static const char *ng0 = "D:/VHDLfile/P5CPU/assembly_line_CPU/DM.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {4095U, 0U};
static int ng3[] = {1, 0};
static const char *ng4 = "%d@%h: *%h <= %h";
static unsigned int ng5[] = {0U, 0U};



static void Always_33_0(char *t0)
{
    char t13[8];
    char t18[8];
    char t19[8];
    char t40[16];
    char t41[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t42;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:
LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);

LAB9:    xsi_set_current_line(35, ng0);
    xsi_set_current_line(35, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB12;

LAB11:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;

LAB14:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:    goto LAB8;

LAB12:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(36, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 2568);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2728);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t18, t19, t22, t25, 2, 1, t28, 32, 1);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB18:    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, *((unsigned int *)t19), t39, 0LL);
    goto LAB19;

LAB20:    xsi_set_current_line(38, ng0);

LAB23:    xsi_set_current_line(39, ng0);
    t4 = xsi_vlog_time(t40, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t11 = *((char **)t5);
    t5 = (t0 + 1048U);
    t12 = *((char **)t5);
    t5 = (t0 + 1208U);
    t14 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng4, 5, t0, (char)118, t40, 64, (char)118, t11, 32, (char)118, t12, 32, (char)118, t14, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2568);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    memset(t41, 0, 8);
    t16 = (t41 + 4);
    t20 = (t17 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (t6 >> 2);
    *((unsigned int *)t41) = t7;
    t8 = *((unsigned int *)t20);
    t9 = (t8 >> 2);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t10 & 1073741823U);
    t30 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t30 & 1073741823U);
    t21 = ((char*)((ng5)));
    xsi_vlogtype_concat(t19, 32, 32, 2U, t21, 2, t41, 30);
    xsi_vlog_generic_convert_array_indices(t13, t18, t11, t15, 2, 1, t19, 32, 2);
    t22 = (t13 + 4);
    t33 = *((unsigned int *)t22);
    t31 = (!(t33));
    t23 = (t18 + 4);
    t36 = *((unsigned int *)t23);
    t34 = (!(t36));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB24;

LAB25:    goto LAB22;

LAB24:    t37 = *((unsigned int *)t13);
    t42 = *((unsigned int *)t18);
    t38 = (t37 - t42);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t18), t39, 0LL);
    goto LAB25;

}

static void Cont_44_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char t26[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1688U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t12);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t43, 8);

LAB16:    t42 = (t0 + 4312);
    t44 = (t42 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans_delayed(t42, 0, 31, 0LL, 0);
    t48 = (t0 + 4232);
    *((int *)t48) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2568);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t20 = (t0 + 2568);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2568);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    memset(t27, 0, 8);
    t28 = (t27 + 4);
    t30 = (t29 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (t31 >> 2);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 2);
    *((unsigned int *)t28) = t34;
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 1073741823U);
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 1073741823U);
    t37 = ((char*)((ng5)));
    xsi_vlogtype_concat(t26, 32, 32, 2U, t37, 2, t27, 30);
    xsi_vlog_generic_get_array_select_value(t19, 32, t18, t22, t25, 2, 1, t26, 32, 2);
    goto LAB9;

LAB10:    t42 = (t0 + 2168U);
    t43 = *((char **)t42);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t43, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}


extern void work_m_00000000003469224539_2924402094_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Cont_44_1};
	xsi_register_didat("work_m_00000000003469224539_2924402094", "isim/mipstest_isim_beh.exe.sim/work/m_00000000003469224539_2924402094.didat");
	xsi_register_executes(pe);
}
