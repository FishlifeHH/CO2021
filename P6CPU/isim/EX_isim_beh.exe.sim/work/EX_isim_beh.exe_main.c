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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001475260287_0886308060_init();
    work_m_00000000003924205770_3911632681_init();
    work_m_00000000003963939501_3637435828_init();
    work_m_00000000001921713822_3526784663_init();
    work_m_00000000000792314807_0029637345_init();
    work_m_00000000003165531402_3866892262_init();
    work_m_00000000001222221191_3666345988_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001222221191_3666345988");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
