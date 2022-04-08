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
static unsigned int ng0[] = {0U, 0U};
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};



static void Always_71_0(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 7128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7448);
    *((int *)t2) = 1;
    t3 = (t0 + 7160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 3088U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    t2 = (t0 + 3408U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB26;

LAB27:    t2 = (t0 + 4048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB30;

LAB31:    t2 = (t0 + 4208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB38;

LAB39:    t2 = (t0 + 4528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB42;

LAB43:
LAB46:    t2 = ((char*)((ng0)));
    t3 = (t0 + 5088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB44:
LAB40:
LAB36:
LAB32:
LAB28:
LAB24:
LAB20:
LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 5088);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB10:
LAB13:    t4 = ((char*)((ng0)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB14:
LAB17:    t4 = ((char*)((ng0)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB16;

LAB18:
LAB21:    t4 = ((char*)((ng1)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB20;

LAB22:
LAB25:    t4 = ((char*)((ng0)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB24;

LAB26:
LAB29:    t4 = ((char*)((ng0)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = (t0 + 4688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    xsi_vlogtype_concat(t13, 2, 2, 2U, t2, 1, t3, 1);
    t4 = (t0 + 5888);
    xsi_vlogvar_assign_value(t4, t13, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB28;

LAB30:
LAB33:    t4 = ((char*)((ng0)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB32;

LAB34:
LAB37:    t4 = ((char*)((ng2)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB36;

LAB38:
LAB41:    t4 = ((char*)((ng0)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB40;

LAB42:
LAB45:    t4 = ((char*)((ng0)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 6208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB44;

}


extern void work_m_00000000002085658314_3024162429_init()
{
	static char *pe[] = {(void *)Always_71_0};
	xsi_register_didat("work_m_00000000002085658314_3024162429", "isim/testmips.exe.sim/work/m_00000000002085658314_3024162429.didat");
	xsi_register_executes(pe);
}
