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
static const char *ng0 = "D:/VHDLfile/P7CPU/ID.v";
static unsigned int ng1[] = {12288U, 0U};
static unsigned int ng2[] = {28668U, 0U};



static void Cont_124_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 7488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 6328U);
    t3 = *((char **)t2);
    t2 = (t0 + 8152);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 8056);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_125_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
    char t26[8];
    char t56[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;

LAB0:    t1 = (t0 + 7736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 3U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 3U);
    memset(t3, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 3U);
    if (t18 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t13) != 0)
        goto LAB6;

LAB7:    t20 = (t0 + 1528U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng1)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB9;

LAB8:    t24 = (t20 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB9;

LAB12:    if (*((unsigned int *)t21) < *((unsigned int *)t20))
        goto LAB10;

LAB11:    t27 = *((unsigned int *)t3);
    t28 = *((unsigned int *)t22);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t30 = (t3 + 4);
    t31 = (t22 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB13;

LAB14:
LAB15:    t54 = (t0 + 1528U);
    t55 = *((char **)t54);
    t54 = ((char*)((ng2)));
    memset(t56, 0, 8);
    t57 = (t55 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB17;

LAB16:    t58 = (t54 + 4);
    if (*((unsigned int *)t58) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t55) > *((unsigned int *)t54))
        goto LAB18;

LAB19:    t61 = *((unsigned int *)t26);
    t62 = *((unsigned int *)t56);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = (t26 + 4);
    t65 = (t56 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB21;

LAB22:
LAB23:    t88 = (t0 + 8216);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    memset(t92, 0, 8);
    t93 = 1U;
    t94 = t93;
    t95 = (t60 + 4);
    t96 = *((unsigned int *)t60);
    t93 = (t93 & t96);
    t97 = *((unsigned int *)t95);
    t94 = (t94 & t97);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t99 | t93);
    t100 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t100 | t94);
    xsi_driver_vfirst_trans(t88, 0, 0);
    t101 = (t0 + 8072);
    *((int *)t101) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB9:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB13:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t3 + 4);
    t41 = (t22 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (~(t42));
    t44 = *((unsigned int *)t3);
    t45 = (t44 & t43);
    t46 = *((unsigned int *)t41);
    t47 = (~(t46));
    t48 = *((unsigned int *)t22);
    t49 = (t48 & t47);
    t50 = (~(t45));
    t51 = (~(t49));
    t52 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t52 & t50);
    t53 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t53 & t51);
    goto LAB15;

LAB17:    t59 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t56) = 1;
    goto LAB19;

LAB21:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t26 + 4);
    t75 = (t56 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (~(t76));
    t78 = *((unsigned int *)t26);
    t79 = (t78 & t77);
    t80 = *((unsigned int *)t75);
    t81 = (~(t80));
    t82 = *((unsigned int *)t56);
    t83 = (t82 & t81);
    t84 = (~(t79));
    t85 = (~(t83));
    t86 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t86 & t84);
    t87 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t87 & t85);
    goto LAB23;

}


extern void work_m_00000000000609900076_1648104263_init()
{
	static char *pe[] = {(void *)Cont_124_0,(void *)Cont_125_1};
	xsi_register_didat("work_m_00000000000609900076_1648104263", "isim/mips_isim_beh.exe.sim/work/m_00000000000609900076_1648104263.didat");
	xsi_register_executes(pe);
}
