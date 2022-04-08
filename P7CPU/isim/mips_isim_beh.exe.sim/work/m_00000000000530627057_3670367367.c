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
static const char *ng0 = "D:/VHDLfile/P7CPU/IF_IDReg.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {16768U, 0U};
static unsigned int ng3[] = {12288U, 0U};
static int ng4[] = {4, 0};



static void Always_37_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t23[8];
    char t24[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(48, ng0);

LAB70:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB25:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB14;

LAB15:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t14) > 0)
        goto LAB20;

LAB21:    memcpy(t13, t12, 8);

LAB22:    t22 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t22, t13, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = ((char*)((ng2)));
    goto LAB15;

LAB16:    t12 = ((char*)((ng3)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t13, 32, t11, 32, t12, 32);
    goto LAB22;

LAB20:    memcpy(t13, t11, 8);
    goto LAB22;

LAB23:    xsi_set_current_line(43, ng0);

LAB26:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    memset(t24, 0, 8);
    t4 = (t24 + 4);
    t11 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t24) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t4) = t18;
    t19 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t19 & 3U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 3U);
    memset(t23, 0, 8);
    t12 = (t24 + 4);
    t21 = *((unsigned int *)t12);
    t25 = (~(t21));
    t26 = *((unsigned int *)t24);
    t27 = (t26 & t25);
    t28 = (t27 & 3U);
    if (t28 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t12) != 0)
        goto LAB29;

LAB30:    memset(t14, 0, 8);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t23);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t29) != 0)
        goto LAB33;

LAB34:    t36 = (t14 + 4);
    t37 = *((unsigned int *)t14);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB35;

LAB36:    t41 = *((unsigned int *)t14);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t36) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t14) > 0)
        goto LAB41;

LAB42:    memcpy(t13, t46, 8);

LAB43:    t45 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t45, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t2) != 0)
        goto LAB46;

LAB47:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB48;

LAB49:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t5) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t14) > 0)
        goto LAB54;

LAB55:    memcpy(t13, t29, 8);

LAB56:    t22 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t22, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t2) != 0)
        goto LAB59;

LAB60:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB61;

LAB62:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t5) > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t14) > 0)
        goto LAB67;

LAB68:    memcpy(t13, t22, 8);

LAB69:    t11 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB25;

LAB27:    *((unsigned int *)t23) = 1;
    goto LAB30;

LAB29:    t22 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t14) = 1;
    goto LAB34;

LAB33:    t35 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB34;

LAB35:    t40 = ((char*)((ng1)));
    goto LAB36;

LAB37:    t45 = (t0 + 1848U);
    t46 = *((char **)t45);
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t13, 32, t40, 32, t46, 32);
    goto LAB43;

LAB41:    memcpy(t13, t40, 8);
    goto LAB43;

LAB44:    *((unsigned int *)t14) = 1;
    goto LAB47;

LAB46:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB47;

LAB48:    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t12, 32, t11, 32);
    goto LAB49;

LAB50:    t22 = (t0 + 2008U);
    t29 = *((char **)t22);
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t13, 32, t23, 32, t29, 32);
    goto LAB56;

LAB54:    memcpy(t13, t23, 8);
    goto LAB56;

LAB57:    *((unsigned int *)t14) = 1;
    goto LAB60;

LAB59:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB60;

LAB61:    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    goto LAB62;

LAB63:    t11 = (t0 + 2168U);
    t22 = *((char **)t11);
    goto LAB64;

LAB65:    xsi_vlog_unsigned_bit_combine(t13, 32, t12, 32, t22, 32);
    goto LAB69;

LAB67:    memcpy(t13, t12, 8);
    goto LAB69;

}


extern void work_m_00000000000530627057_3670367367_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_00000000000530627057_3670367367", "isim/mips_isim_beh.exe.sim/work/m_00000000000530627057_3670367367.didat");
	xsi_register_executes(pe);
}
