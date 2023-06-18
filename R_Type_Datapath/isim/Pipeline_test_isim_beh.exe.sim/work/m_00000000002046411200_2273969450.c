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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Sanjeev/Desktop/Practice files/Acad Labs/Comp Arch Lab/Pipelined_MIPS_Assignment_3/Assignment_3/R_Type_Datapath (4)/R_Type_Datapath/Pipeline_test.v";
static int ng1[] = {0, 0};
static int ng2[] = {50, 0};
static int ng3[] = {1, 0};



static void Initial_43_0(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2496);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t3 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t0 + 5024);
    *((int *)t9) = t8;

LAB6:    t10 = (t0 + 5024);
    if (*((int *)t10) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(51, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB7:    xsi_set_current_line(49, ng0);
    t11 = (t0 + 2496);
    xsi_process_wait(t11, 5000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(49, ng0);
    t13 = (t0 + 1448);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t16) == 0)
        goto LAB10;

LAB12:    t22 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t22) = 1;

LAB13:    t23 = (t12 + 4);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    *((unsigned int *)t12) = t26;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB15;

LAB14:    t31 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t31 & 1U);
    t32 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t32 & 1U);
    t33 = (t0 + 1448);
    xsi_vlogvar_assign_value(t33, t12, 0, 0, 1);
    t2 = (t0 + 5024);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB6;

LAB10:    *((unsigned int *)t12) = 1;
    goto LAB13;

LAB15:    t27 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t24);
    *((unsigned int *)t12) = (t27 | t28);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t29 | t30);
    goto LAB14;

}

static void Initial_54_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2744);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2744);
    xsi_process_wait(t2, 253000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(58, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000002046411200_2273969450_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Initial_54_1};
	xsi_register_didat("work_m_00000000002046411200_2273969450", "isim/Pipeline_test_isim_beh.exe.sim/work/m_00000000002046411200_2273969450.didat");
	xsi_register_executes(pe);
}
