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
static const char *ng0 = "D:/VHDLfile/P6CPU/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {16, 0};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {4294967295U, 0U};



static void Always_29_0(char *t0)
{
    char t10[8];
    char t36[8];
    char t37[8];
    char t49[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t50;

LAB0:    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 5208);
    *((int *)t2) = 1;
    t3 = (t0 + 4920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 3408U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 3088U);
    t8 = *((char **)t7);
    t7 = (t0 + 3248U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 3968);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB39;

LAB9:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t3 = (t0 + 3248U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 3968);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB39;

LAB11:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t3 = (t0 + 3248U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB40;

LAB41:
LAB42:    t35 = (t0 + 3968);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB39;

LAB13:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 3248U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t3, 32);
    t7 = (t0 + 3968);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB39;

LAB15:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 3248U);
    t4 = *((char **)t3);
    t3 = (t0 + 3568U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 3968);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB39;

LAB17:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 3248U);
    t4 = *((char **)t3);
    t3 = (t0 + 3568U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 3968);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB39;

LAB19:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 3248U);
    t4 = *((char **)t3);
    t3 = (t0 + 3088U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_lshift(t36, 32, t4, 32, t10, 5);
    t9 = (t0 + 3968);
    xsi_vlogvar_assign_value(t9, t36, 0, 0, 32);
    goto LAB39;

LAB21:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 3248U);
    t4 = *((char **)t3);
    t3 = (t0 + 3088U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_rshift(t36, 32, t4, 32, t10, 5);
    t9 = (t0 + 3968);
    xsi_vlogvar_assign_value(t9, t36, 0, 0, 32);
    goto LAB39;

LAB23:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 3248U);
    t4 = *((char **)t3);
    t3 = (t0 + 3568U);
    t7 = *((char **)t3);
    memset(t36, 0, 8);
    xsi_vlog_signed_arith_rshift(t36, 32, t4, 32, t7, 5);
    t3 = (t0 + 3968);
    xsi_vlogvar_assign_value(t3, t36, 0, 0, 32);
    goto LAB39;

LAB25:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 3248U);
    t4 = *((char **)t3);
    t3 = (t0 + 3088U);
    t7 = *((char **)t3);
    memset(t36, 0, 8);
    t3 = (t36 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t36) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t37, 0, 8);
    xsi_vlog_signed_arith_rshift(t37, 32, t4, 32, t36, 5);
    t9 = (t0 + 3968);
    xsi_vlogvar_assign_value(t9, t37, 0, 0, 32);
    goto LAB39;

LAB27:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t3 = (t0 + 3248U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB43;

LAB44:
LAB45:    t35 = (t0 + 3968);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB39;

LAB29:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t3 = (t0 + 3248U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB46;

LAB47:
LAB48:    t21 = (t0 + 3968);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB39;

LAB31:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t3 = (t0 + 3248U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t36) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t36 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB49;

LAB50:
LAB51:    memset(t10, 0, 8);
    t35 = (t10 + 4);
    t42 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    *((unsigned int *)t10) = t39;
    *((unsigned int *)t35) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB53;

LAB52:    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t46 & 4294967295U);
    t47 = (t0 + 3968);
    xsi_vlogvar_assign_value(t47, t10, 0, 0, 32);
    goto LAB39;

LAB33:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t3 = (t0 + 3248U);
    t7 = *((char **)t3);
    memset(t49, 0, 8);
    xsi_vlog_signed_less(t49, 32, t4, 32, t7, 32);
    memset(t36, 0, 8);
    t3 = (t49 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t49);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t3) != 0)
        goto LAB56;

LAB57:    t9 = (t36 + 4);
    t16 = *((unsigned int *)t36);
    t17 = *((unsigned int *)t9);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB58;

LAB59:    t19 = *((unsigned int *)t36);
    t20 = (~(t19));
    t23 = *((unsigned int *)t9);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t9) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t36) > 0)
        goto LAB64;

LAB65:    memcpy(t10, t22, 8);

LAB66:    t35 = (t0 + 3968);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB39;

LAB35:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 3088U);
    t4 = *((char **)t3);
    t3 = (t0 + 3248U);
    t7 = *((char **)t3);
    memset(t37, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB68;

LAB67:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB68;

LAB71:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB69;

LAB70:    memset(t36, 0, 8);
    t21 = (t37 + 4);
    t11 = *((unsigned int *)t21);
    t12 = (~(t11));
    t13 = *((unsigned int *)t37);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t21) != 0)
        goto LAB74;

LAB75:    t35 = (t36 + 4);
    t16 = *((unsigned int *)t36);
    t17 = *((unsigned int *)t35);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB76;

LAB77:    t19 = *((unsigned int *)t36);
    t20 = (~(t19));
    t23 = *((unsigned int *)t35);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t35) > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t36) > 0)
        goto LAB82;

LAB83:    memcpy(t10, t47, 8);

LAB84:    t50 = (t0 + 3968);
    xsi_vlogvar_assign_value(t50, t10, 0, 0, 32);
    goto LAB39;

LAB40:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB42;

LAB43:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t33);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t34);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t33);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t34);
    goto LAB45;

LAB46:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB48;

LAB49:    t19 = *((unsigned int *)t36);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t36) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB51;

LAB53:    t40 = *((unsigned int *)t10);
    t41 = *((unsigned int *)t42);
    *((unsigned int *)t10) = (t40 | t41);
    t43 = *((unsigned int *)t35);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t35) = (t43 | t44);
    goto LAB52;

LAB54:    *((unsigned int *)t36) = 1;
    goto LAB57;

LAB56:    t8 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB57;

LAB58:    t21 = ((char*)((ng2)));
    goto LAB59;

LAB60:    t22 = ((char*)((ng1)));
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t10, 32, t21, 32, t22, 32);
    goto LAB66;

LAB64:    memcpy(t10, t21, 8);
    goto LAB66;

LAB68:    t9 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB70;

LAB69:    *((unsigned int *)t37) = 1;
    goto LAB70;

LAB72:    *((unsigned int *)t36) = 1;
    goto LAB75;

LAB74:    t22 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB75;

LAB76:    t42 = ((char*)((ng2)));
    goto LAB77;

LAB78:    t47 = ((char*)((ng1)));
    goto LAB79;

LAB80:    xsi_vlog_unsigned_bit_combine(t10, 32, t42, 32, t47, 32);
    goto LAB84;

LAB82:    memcpy(t10, t42, 8);
    goto LAB84;

}


extern void work_m_00000000001475260287_0886308060_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000001475260287_0886308060", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001475260287_0886308060.didat");
	xsi_register_executes(pe);
}
