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
static int ng0[] = {0, 0};
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {5U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {0U, 0U};



static void Always_45_0(char *t0)
{
    char t7[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t92[8];
    char t106[8];
    char t113[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
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
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;

LAB0:    t1 = (t0 + 6064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7872);
    *((int *)t2) = 1;
    t3 = (t0 + 6096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1864U);
    t5 = *((char **)t4);
    t4 = (t0 + 2984U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    memset(t92, 0, 8);
    t93 = (t60 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t93) != 0)
        goto LAB30;

LAB31:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB32;

LAB33:    memcpy(t113, t92, 8);

LAB34:    t145 = (t113 + 4);
    t146 = *((unsigned int *)t145);
    t147 = (~(t146));
    t148 = *((unsigned int *)t113);
    t149 = (t148 & t147);
    t150 = (t149 != 0);
    if (t150 > 0)
        goto LAB42;

LAB43:    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 3144U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t7) = 1;

LAB48:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t8) != 0)
        goto LAB51;

LAB52:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB53;

LAB54:    memcpy(t60, t22, 8);

LAB55:    t74 = (t60 + 4);
    t94 = *((unsigned int *)t74);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB67;

LAB68:    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB86;

LAB83:    if (t18 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t7) = 1;

LAB86:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t8) != 0)
        goto LAB89;

LAB90:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB91;

LAB92:    memcpy(t60, t22, 8);

LAB93:    t74 = (t60 + 4);
    t94 = *((unsigned int *)t74);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB105;

LAB106:    t2 = ((char*)((ng5)));
    t3 = (t0 + 4184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB107:
LAB69:
LAB44:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 2984U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    *((unsigned int *)t92) = 1;
    goto LAB31;

LAB30:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB31;

LAB32:    t104 = (t0 + 3464U);
    t105 = *((char **)t104);
    memset(t106, 0, 8);
    t104 = (t105 + 4);
    t107 = *((unsigned int *)t104);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t104) != 0)
        goto LAB37;

LAB38:    t114 = *((unsigned int *)t92);
    t115 = *((unsigned int *)t106);
    t116 = (t114 & t115);
    *((unsigned int *)t113) = t116;
    t117 = (t92 + 4);
    t118 = (t106 + 4);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t117);
    t121 = *((unsigned int *)t118);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 != 0);
    if (t124 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB35:    *((unsigned int *)t106) = 1;
    goto LAB38;

LAB37:    t112 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB38;

LAB39:    t125 = *((unsigned int *)t113);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t113) = (t125 | t126);
    t127 = (t92 + 4);
    t128 = (t106 + 4);
    t129 = *((unsigned int *)t92);
    t130 = (~(t129));
    t131 = *((unsigned int *)t127);
    t132 = (~(t131));
    t133 = *((unsigned int *)t106);
    t134 = (~(t133));
    t135 = *((unsigned int *)t128);
    t136 = (~(t135));
    t137 = (t130 & t132);
    t138 = (t134 & t136);
    t139 = (~(t137));
    t140 = (~(t138));
    t141 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t141 & t139);
    t142 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t142 & t140);
    t143 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t143 & t139);
    t144 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t144 & t140);
    goto LAB41;

LAB42:    t151 = ((char*)((ng1)));
    t152 = (t0 + 4184);
    xsi_vlogvar_assign_value(t152, t151, 0, 0, 3);
    goto LAB44;

LAB47:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t22) = 1;
    goto LAB52;

LAB51:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB52;

LAB53:    t29 = (t0 + 3144U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB57;

LAB56:    if (t48 != 0)
        goto LAB58;

LAB59:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t38) != 0)
        goto LAB62;

LAB63:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB57:    *((unsigned int *)t36) = 1;
    goto LAB59;

LAB58:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t52) = 1;
    goto LAB63;

LAB62:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB63;

LAB64:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB66;

LAB67:    t75 = (t0 + 3624U);
    t93 = *((char **)t75);
    memset(t106, 0, 8);
    t75 = (t93 + 4);
    t101 = *((unsigned int *)t75);
    t102 = (~(t101));
    t103 = *((unsigned int *)t93);
    t107 = (t103 & t102);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t75) != 0)
        goto LAB72;

LAB73:    t100 = (t106 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t100);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB74;

LAB75:    t114 = *((unsigned int *)t106);
    t115 = (~(t114));
    t116 = *((unsigned int *)t100);
    t120 = (t115 || t116);
    if (t120 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t100) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t106) > 0)
        goto LAB80;

LAB81:    memcpy(t92, t105, 8);

LAB82:    t112 = (t0 + 4184);
    xsi_vlogvar_assign_value(t112, t92, 0, 0, 3);
    goto LAB69;

LAB70:    *((unsigned int *)t106) = 1;
    goto LAB73;

LAB72:    t99 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB73;

LAB74:    t104 = ((char*)((ng2)));
    goto LAB75;

LAB76:    t105 = ((char*)((ng3)));
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t92, 3, t104, 3, t105, 3);
    goto LAB82;

LAB80:    memcpy(t92, t104, 8);
    goto LAB82;

LAB85:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t22) = 1;
    goto LAB90;

LAB89:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB90;

LAB91:    t29 = (t0 + 3304U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB95;

LAB94:    if (t48 != 0)
        goto LAB96;

LAB97:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t38) != 0)
        goto LAB100;

LAB101:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB93;

LAB95:    *((unsigned int *)t36) = 1;
    goto LAB97;

LAB96:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t52) = 1;
    goto LAB101;

LAB100:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB101;

LAB102:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB104;

LAB105:    t75 = ((char*)((ng4)));
    t93 = (t0 + 4184);
    xsi_vlogvar_assign_value(t93, t75, 0, 0, 3);
    goto LAB107;

}

static void Always_57_1(char *t0)
{
    char t7[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t92[8];
    char t106[8];
    char t113[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
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
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;

LAB0:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7888);
    *((int *)t2) = 1;
    t3 = (t0 + 6344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t0 + 2984U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    memset(t92, 0, 8);
    t93 = (t60 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t93) != 0)
        goto LAB30;

LAB31:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB32;

LAB33:    memcpy(t113, t92, 8);

LAB34:    t145 = (t113 + 4);
    t146 = *((unsigned int *)t145);
    t147 = (~(t146));
    t148 = *((unsigned int *)t113);
    t149 = (t148 & t147);
    t150 = (t149 != 0);
    if (t150 > 0)
        goto LAB42;

LAB43:    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t0 + 3144U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t7) = 1;

LAB48:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t8) != 0)
        goto LAB51;

LAB52:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB53;

LAB54:    memcpy(t60, t22, 8);

LAB55:    t74 = (t60 + 4);
    t94 = *((unsigned int *)t74);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB67;

LAB68:    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB86;

LAB83:    if (t18 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t7) = 1;

LAB86:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t8) != 0)
        goto LAB89;

LAB90:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB91;

LAB92:    memcpy(t60, t22, 8);

LAB93:    t74 = (t60 + 4);
    t94 = *((unsigned int *)t74);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB105;

LAB106:    t2 = ((char*)((ng5)));
    t3 = (t0 + 4344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB107:
LAB69:
LAB44:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 2984U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    *((unsigned int *)t92) = 1;
    goto LAB31;

LAB30:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB31;

LAB32:    t104 = (t0 + 3464U);
    t105 = *((char **)t104);
    memset(t106, 0, 8);
    t104 = (t105 + 4);
    t107 = *((unsigned int *)t104);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t104) != 0)
        goto LAB37;

LAB38:    t114 = *((unsigned int *)t92);
    t115 = *((unsigned int *)t106);
    t116 = (t114 & t115);
    *((unsigned int *)t113) = t116;
    t117 = (t92 + 4);
    t118 = (t106 + 4);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t117);
    t121 = *((unsigned int *)t118);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 != 0);
    if (t124 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB35:    *((unsigned int *)t106) = 1;
    goto LAB38;

LAB37:    t112 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB38;

LAB39:    t125 = *((unsigned int *)t113);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t113) = (t125 | t126);
    t127 = (t92 + 4);
    t128 = (t106 + 4);
    t129 = *((unsigned int *)t92);
    t130 = (~(t129));
    t131 = *((unsigned int *)t127);
    t132 = (~(t131));
    t133 = *((unsigned int *)t106);
    t134 = (~(t133));
    t135 = *((unsigned int *)t128);
    t136 = (~(t135));
    t137 = (t130 & t132);
    t138 = (t134 & t136);
    t139 = (~(t137));
    t140 = (~(t138));
    t141 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t141 & t139);
    t142 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t142 & t140);
    t143 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t143 & t139);
    t144 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t144 & t140);
    goto LAB41;

LAB42:    t151 = ((char*)((ng1)));
    t152 = (t0 + 4344);
    xsi_vlogvar_assign_value(t152, t151, 0, 0, 3);
    goto LAB44;

LAB47:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t22) = 1;
    goto LAB52;

LAB51:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB52;

LAB53:    t29 = (t0 + 3144U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB57;

LAB56:    if (t48 != 0)
        goto LAB58;

LAB59:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t38) != 0)
        goto LAB62;

LAB63:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB57:    *((unsigned int *)t36) = 1;
    goto LAB59;

LAB58:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t52) = 1;
    goto LAB63;

LAB62:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB63;

LAB64:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB66;

LAB67:    t75 = (t0 + 3624U);
    t93 = *((char **)t75);
    memset(t106, 0, 8);
    t75 = (t93 + 4);
    t101 = *((unsigned int *)t75);
    t102 = (~(t101));
    t103 = *((unsigned int *)t93);
    t107 = (t103 & t102);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t75) != 0)
        goto LAB72;

LAB73:    t100 = (t106 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t100);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB74;

LAB75:    t114 = *((unsigned int *)t106);
    t115 = (~(t114));
    t116 = *((unsigned int *)t100);
    t120 = (t115 || t116);
    if (t120 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t100) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t106) > 0)
        goto LAB80;

LAB81:    memcpy(t92, t105, 8);

LAB82:    t112 = (t0 + 4344);
    xsi_vlogvar_assign_value(t112, t92, 0, 0, 3);
    goto LAB69;

LAB70:    *((unsigned int *)t106) = 1;
    goto LAB73;

LAB72:    t99 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB73;

LAB74:    t104 = ((char*)((ng2)));
    goto LAB75;

LAB76:    t105 = ((char*)((ng3)));
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t92, 3, t104, 3, t105, 3);
    goto LAB82;

LAB80:    memcpy(t92, t104, 8);
    goto LAB82;

LAB85:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t22) = 1;
    goto LAB90;

LAB89:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB90;

LAB91:    t29 = (t0 + 3304U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB95;

LAB94:    if (t48 != 0)
        goto LAB96;

LAB97:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t38) != 0)
        goto LAB100;

LAB101:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB93;

LAB95:    *((unsigned int *)t36) = 1;
    goto LAB97;

LAB96:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t52) = 1;
    goto LAB101;

LAB100:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB101;

LAB102:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB104;

LAB105:    t75 = ((char*)((ng4)));
    t93 = (t0 + 4344);
    xsi_vlogvar_assign_value(t93, t75, 0, 0, 3);
    goto LAB107;

}

static void Always_69_2(char *t0)
{
    char t7[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t92[8];
    char t106[8];
    char t113[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
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
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;

LAB0:    t1 = (t0 + 6560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7904);
    *((int *)t2) = 1;
    t3 = (t0 + 6592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1864U);
    t5 = *((char **)t4);
    t4 = (t0 + 2984U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    memset(t92, 0, 8);
    t93 = (t60 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t93) != 0)
        goto LAB30;

LAB31:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB32;

LAB33:    memcpy(t113, t92, 8);

LAB34:    t145 = (t113 + 4);
    t146 = *((unsigned int *)t145);
    t147 = (~(t146));
    t148 = *((unsigned int *)t113);
    t149 = (t148 & t147);
    t150 = (t149 != 0);
    if (t150 > 0)
        goto LAB42;

LAB43:    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 3144U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t7) = 1;

LAB48:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t8) != 0)
        goto LAB51;

LAB52:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB53;

LAB54:    memcpy(t60, t22, 8);

LAB55:    t74 = (t60 + 4);
    t94 = *((unsigned int *)t74);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB67;

LAB68:    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB86;

LAB83:    if (t18 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t7) = 1;

LAB86:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t8) != 0)
        goto LAB89;

LAB90:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB91;

LAB92:    memcpy(t60, t22, 8);

LAB93:    t74 = (t60 + 4);
    t94 = *((unsigned int *)t74);
    t95 = (~(t94));
    t96 = *((unsigned int *)t60);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB105;

LAB106:    t2 = ((char*)((ng5)));
    t3 = (t0 + 4984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB107:
LAB69:
LAB44:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 2984U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    *((unsigned int *)t92) = 1;
    goto LAB31;

LAB30:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB31;

LAB32:    t104 = (t0 + 3464U);
    t105 = *((char **)t104);
    memset(t106, 0, 8);
    t104 = (t105 + 4);
    t107 = *((unsigned int *)t104);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (t109 & t108);
    t111 = (t110 & 1U);
    if (t111 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t104) != 0)
        goto LAB37;

LAB38:    t114 = *((unsigned int *)t92);
    t115 = *((unsigned int *)t106);
    t116 = (t114 & t115);
    *((unsigned int *)t113) = t116;
    t117 = (t92 + 4);
    t118 = (t106 + 4);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t117);
    t121 = *((unsigned int *)t118);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = *((unsigned int *)t119);
    t124 = (t123 != 0);
    if (t124 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB35:    *((unsigned int *)t106) = 1;
    goto LAB38;

LAB37:    t112 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB38;

LAB39:    t125 = *((unsigned int *)t113);
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t113) = (t125 | t126);
    t127 = (t92 + 4);
    t128 = (t106 + 4);
    t129 = *((unsigned int *)t92);
    t130 = (~(t129));
    t131 = *((unsigned int *)t127);
    t132 = (~(t131));
    t133 = *((unsigned int *)t106);
    t134 = (~(t133));
    t135 = *((unsigned int *)t128);
    t136 = (~(t135));
    t137 = (t130 & t132);
    t138 = (t134 & t136);
    t139 = (~(t137));
    t140 = (~(t138));
    t141 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t141 & t139);
    t142 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t142 & t140);
    t143 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t143 & t139);
    t144 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t144 & t140);
    goto LAB41;

LAB42:    t151 = ((char*)((ng1)));
    t152 = (t0 + 4984);
    xsi_vlogvar_assign_value(t152, t151, 0, 0, 3);
    goto LAB44;

LAB47:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t22) = 1;
    goto LAB52;

LAB51:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB52;

LAB53:    t29 = (t0 + 3144U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB57;

LAB56:    if (t48 != 0)
        goto LAB58;

LAB59:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t38) != 0)
        goto LAB62;

LAB63:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB57:    *((unsigned int *)t36) = 1;
    goto LAB59;

LAB58:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t52) = 1;
    goto LAB63;

LAB62:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB63;

LAB64:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB66;

LAB67:    t75 = (t0 + 3624U);
    t93 = *((char **)t75);
    memset(t106, 0, 8);
    t75 = (t93 + 4);
    t101 = *((unsigned int *)t75);
    t102 = (~(t101));
    t103 = *((unsigned int *)t93);
    t107 = (t103 & t102);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t75) != 0)
        goto LAB72;

LAB73:    t100 = (t106 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t100);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB74;

LAB75:    t114 = *((unsigned int *)t106);
    t115 = (~(t114));
    t116 = *((unsigned int *)t100);
    t120 = (t115 || t116);
    if (t120 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t100) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t106) > 0)
        goto LAB80;

LAB81:    memcpy(t92, t105, 8);

LAB82:    t112 = (t0 + 4984);
    xsi_vlogvar_assign_value(t112, t92, 0, 0, 3);
    goto LAB69;

LAB70:    *((unsigned int *)t106) = 1;
    goto LAB73;

LAB72:    t99 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB73;

LAB74:    t104 = ((char*)((ng2)));
    goto LAB75;

LAB76:    t105 = ((char*)((ng3)));
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t92, 3, t104, 3, t105, 3);
    goto LAB82;

LAB80:    memcpy(t92, t104, 8);
    goto LAB82;

LAB85:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t22) = 1;
    goto LAB90;

LAB89:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB90;

LAB91:    t29 = (t0 + 3304U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB95;

LAB94:    if (t48 != 0)
        goto LAB96;

LAB97:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t38) != 0)
        goto LAB100;

LAB101:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB93;

LAB95:    *((unsigned int *)t36) = 1;
    goto LAB97;

LAB96:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t52) = 1;
    goto LAB101;

LAB100:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB101;

LAB102:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB104;

LAB105:    t75 = ((char*)((ng4)));
    t93 = (t0 + 4984);
    xsi_vlogvar_assign_value(t93, t75, 0, 0, 3);
    goto LAB107;

}

static void Always_80_3(char *t0)
{
    char t7[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t98[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
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
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;

LAB0:    t1 = (t0 + 6808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7920);
    *((int *)t2) = 1;
    t3 = (t0 + 6840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t0 + 3144U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t7) = 1;

LAB47:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t8) != 0)
        goto LAB50;

LAB51:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB52;

LAB53:    memcpy(t60, t22, 8);

LAB54:    t74 = (t60 + 4);
    t93 = *((unsigned int *)t74);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB66;

LAB67:    t2 = ((char*)((ng5)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB68:
LAB30:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 3144U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    t100 = (t0 + 3624U);
    t101 = *((char **)t100);
    memset(t99, 0, 8);
    t100 = (t101 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (~(t102));
    t104 = *((unsigned int *)t101);
    t105 = (t104 & t103);
    t106 = (t105 & 1U);
    if (t106 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t100) != 0)
        goto LAB33;

LAB34:    t108 = (t99 + 4);
    t109 = *((unsigned int *)t99);
    t110 = *((unsigned int *)t108);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB35;

LAB36:    t113 = *((unsigned int *)t99);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t108) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t99) > 0)
        goto LAB41;

LAB42:    memcpy(t98, t117, 8);

LAB43:    t118 = (t0 + 4504);
    xsi_vlogvar_assign_value(t118, t98, 0, 0, 3);
    goto LAB30;

LAB31:    *((unsigned int *)t99) = 1;
    goto LAB34;

LAB33:    t107 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB34;

LAB35:    t112 = ((char*)((ng2)));
    goto LAB36;

LAB37:    t117 = ((char*)((ng3)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t98, 3, t112, 3, t117, 3);
    goto LAB43;

LAB41:    memcpy(t98, t112, 8);
    goto LAB43;

LAB46:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t22) = 1;
    goto LAB51;

LAB50:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB51;

LAB52:    t29 = (t0 + 3304U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB56;

LAB55:    if (t48 != 0)
        goto LAB57;

LAB58:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t38) != 0)
        goto LAB61;

LAB62:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB54;

LAB56:    *((unsigned int *)t36) = 1;
    goto LAB58;

LAB57:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t52) = 1;
    goto LAB62;

LAB61:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB62;

LAB63:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB65;

LAB66:    t75 = ((char*)((ng4)));
    t92 = (t0 + 4504);
    xsi_vlogvar_assign_value(t92, t75, 0, 0, 3);
    goto LAB68;

}

static void Always_90_4(char *t0)
{
    char t7[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t98[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
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
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;

LAB0:    t1 = (t0 + 7056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7936);
    *((int *)t2) = 1;
    t3 = (t0 + 7088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2344U);
    t5 = *((char **)t4);
    t4 = (t0 + 3144U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t7) = 1;

LAB47:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t8) != 0)
        goto LAB50;

LAB51:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB52;

LAB53:    memcpy(t60, t22, 8);

LAB54:    t74 = (t60 + 4);
    t93 = *((unsigned int *)t74);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB66;

LAB67:    t2 = ((char*)((ng5)));
    t3 = (t0 + 4664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB68:
LAB30:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 3144U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    t100 = (t0 + 3624U);
    t101 = *((char **)t100);
    memset(t99, 0, 8);
    t100 = (t101 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (~(t102));
    t104 = *((unsigned int *)t101);
    t105 = (t104 & t103);
    t106 = (t105 & 1U);
    if (t106 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t100) != 0)
        goto LAB33;

LAB34:    t108 = (t99 + 4);
    t109 = *((unsigned int *)t99);
    t110 = *((unsigned int *)t108);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB35;

LAB36:    t113 = *((unsigned int *)t99);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t108) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t99) > 0)
        goto LAB41;

LAB42:    memcpy(t98, t117, 8);

LAB43:    t118 = (t0 + 4664);
    xsi_vlogvar_assign_value(t118, t98, 0, 0, 3);
    goto LAB30;

LAB31:    *((unsigned int *)t99) = 1;
    goto LAB34;

LAB33:    t107 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB34;

LAB35:    t112 = ((char*)((ng2)));
    goto LAB36;

LAB37:    t117 = ((char*)((ng3)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t98, 3, t112, 3, t117, 3);
    goto LAB43;

LAB41:    memcpy(t98, t112, 8);
    goto LAB43;

LAB46:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t22) = 1;
    goto LAB51;

LAB50:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB51;

LAB52:    t29 = (t0 + 3304U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB56;

LAB55:    if (t48 != 0)
        goto LAB57;

LAB58:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t38) != 0)
        goto LAB61;

LAB62:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB54;

LAB56:    *((unsigned int *)t36) = 1;
    goto LAB58;

LAB57:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t52) = 1;
    goto LAB62;

LAB61:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB62;

LAB63:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB65;

LAB66:    t75 = ((char*)((ng4)));
    t92 = (t0 + 4664);
    xsi_vlogvar_assign_value(t92, t75, 0, 0, 3);
    goto LAB68;

}

static void Always_100_5(char *t0)
{
    char t7[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
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
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;

LAB0:    t1 = (t0 + 7304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7952);
    *((int *)t2) = 1;
    t3 = (t0 + 7336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2504U);
    t5 = *((char **)t4);
    t4 = (t0 + 3304U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB28;

LAB29:    t2 = ((char*)((ng3)));
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB30:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 3304U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    t98 = ((char*)((ng4)));
    t99 = (t0 + 4824);
    xsi_vlogvar_assign_value(t99, t98, 0, 0, 3);
    goto LAB30;

}

static void Always_107_6(char *t0)
{
    char t7[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t98[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
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
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;

LAB0:    t1 = (t0 + 7552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7968);
    *((int *)t2) = 1;
    t3 = (t0 + 7584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2344U);
    t5 = *((char **)t4);
    t4 = (t0 + 3144U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = (t0 + 3304U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB47;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t7) = 1;

LAB47:    memset(t22, 0, 8);
    t8 = (t7 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t8) != 0)
        goto LAB50;

LAB51:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB52;

LAB53:    memcpy(t60, t22, 8);

LAB54:    t74 = (t60 + 4);
    t93 = *((unsigned int *)t74);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB66;

LAB67:    t2 = ((char*)((ng5)));
    t3 = (t0 + 5144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB68:
LAB30:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 3144U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB18;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB20;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    t100 = (t0 + 3624U);
    t101 = *((char **)t100);
    memset(t99, 0, 8);
    t100 = (t101 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (~(t102));
    t104 = *((unsigned int *)t101);
    t105 = (t104 & t103);
    t106 = (t105 & 1U);
    if (t106 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t100) != 0)
        goto LAB33;

LAB34:    t108 = (t99 + 4);
    t109 = *((unsigned int *)t99);
    t110 = *((unsigned int *)t108);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB35;

LAB36:    t113 = *((unsigned int *)t99);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t108) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t99) > 0)
        goto LAB41;

LAB42:    memcpy(t98, t117, 8);

LAB43:    t118 = (t0 + 5144);
    xsi_vlogvar_assign_value(t118, t98, 0, 0, 3);
    goto LAB30;

LAB31:    *((unsigned int *)t99) = 1;
    goto LAB34;

LAB33:    t107 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB34;

LAB35:    t112 = ((char*)((ng2)));
    goto LAB36;

LAB37:    t117 = ((char*)((ng3)));
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t98, 3, t112, 3, t117, 3);
    goto LAB43;

LAB41:    memcpy(t98, t112, 8);
    goto LAB43;

LAB46:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t22) = 1;
    goto LAB51;

LAB50:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB51;

LAB52:    t29 = (t0 + 3304U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng0)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB56;

LAB55:    if (t48 != 0)
        goto LAB57;

LAB58:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t38) != 0)
        goto LAB61;

LAB62:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB54;

LAB56:    *((unsigned int *)t36) = 1;
    goto LAB58;

LAB57:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t52) = 1;
    goto LAB62;

LAB61:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB62;

LAB63:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB65;

LAB66:    t75 = ((char*)((ng4)));
    t92 = (t0 + 5144);
    xsi_vlogvar_assign_value(t92, t75, 0, 0, 3);
    goto LAB68;

}


extern void work_m_00000000002844992240_1152096529_init()
{
	static char *pe[] = {(void *)Always_45_0,(void *)Always_57_1,(void *)Always_69_2,(void *)Always_80_3,(void *)Always_90_4,(void *)Always_100_5,(void *)Always_107_6};
	xsi_register_didat("work_m_00000000002844992240_1152096529", "isim/testmips.exe.sim/work/m_00000000002844992240_1152096529.didat");
	xsi_register_executes(pe);
}
