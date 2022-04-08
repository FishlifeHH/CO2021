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
    work_m_00000000001582077820_1733832700_init();
    work_m_00000000003595122394_0833183191_init();
    work_m_00000000000046390454_0467708899_init();
    work_m_00000000001086187652_0428644833_init();
    work_m_00000000002480809756_2352116331_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002480809756_2352116331");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
