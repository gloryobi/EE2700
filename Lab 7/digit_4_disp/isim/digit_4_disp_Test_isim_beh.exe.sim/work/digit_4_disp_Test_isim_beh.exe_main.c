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
    work_m_00000000003618169771_1097522811_init();
    work_m_00000000000508170192_0720750977_init();
    work_m_00000000000213912481_1678943863_init();
    work_m_00000000000242528716_3108391642_init();
    work_m_00000000001231332002_2421774201_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001231332002_2421774201");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
