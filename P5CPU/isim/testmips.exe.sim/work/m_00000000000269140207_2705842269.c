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
static unsigned int ng0[] = {1U, 0U};
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {4U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {6U, 0U};



static void Always_143_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng0)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB19;

LAB9:    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB11:    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB13:    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

LAB15:    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB19;

}


extern void work_m_00000000000269140207_2705842269_init()
{
	static char *pe[] = {(void *)Always_143_0};
	xsi_register_didat("work_m_00000000000269140207_2705842269", "isim/testmips.exe.sim/work/m_00000000000269140207_2705842269.didat");
	xsi_register_executes(pe);
}
