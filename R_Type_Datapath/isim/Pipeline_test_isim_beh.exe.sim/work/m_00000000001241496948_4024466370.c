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
static const char *ng0 = "C:/Users/Sanjeev/Desktop/Practice files/Acad Labs/Comp Arch Lab/Pipelined_MIPS_Assignment_3/Assignment_3/R_Type_Datapath (4)/R_Type_Datapath/EX_MEM.v";
static unsigned int ng1[] = {0U, 0U, 0U, 0U, 0U, 0U};
static int ng2[] = {83, 0};
static int ng3[] = {82, 0};
static int ng4[] = {51, 0};
static int ng5[] = {50, 0};
static int ng6[] = {19, 0};
static int ng7[] = {18, 0};
static int ng8[] = {17, 0};
static int ng9[] = {16, 0};
static int ng10[] = {15, 0};
static int ng11[] = {14, 0};
static int ng12[] = {0, 0};



static void Always_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5904);
    *((int *)t2) = 1;
    t3 = (t0 + 5120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 84);
    goto LAB2;

}

static void Always_49_1(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    unsigned int t16;
    int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5920);
    *((int *)t2) = 1;
    t3 = (t0 + 5368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 4168);
    t7 = (t0 + 4168);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    t4 = (t0 + 4168);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng3)));
    t9 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    t11 = (t14 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (!(t16));
    t18 = (t13 && t17);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    t4 = (t0 + 4168);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
    t9 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    t11 = (t14 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (!(t16));
    t18 = (t13 && t17);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    t4 = (t0 + 4168);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t9 = (t6 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    t4 = (t0 + 4168);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng8)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t9 = (t6 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    t4 = (t0 + 4168);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t9 = (t6 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    t4 = (t0 + 4168);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t9 = (t6 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    t4 = (t0 + 4168);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng11)));
    t9 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    t11 = (t14 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (!(t16));
    t18 = (t13 && t17);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB20;

LAB21:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t4, t5, 0, *((unsigned int *)t6), 1);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t15);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t3, t24, *((unsigned int *)t14), t28);
    goto LAB9;

LAB10:    t23 = *((unsigned int *)t15);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t3, t24, *((unsigned int *)t14), t28);
    goto LAB11;

LAB12:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB13;

LAB14:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB15;

LAB16:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB17;

LAB18:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB19;

LAB20:    t23 = *((unsigned int *)t15);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t3, t24, *((unsigned int *)t14), t28);
    goto LAB21;

}

static void Always_61_2(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5936);
    *((int *)t2) = 1;
    t3 = (t0 + 5616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 4168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 16);
    t10 = (t6 + 20);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 19);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 19);
    t16 = (t15 & 1);
    *((unsigned int *)t8) = t16;
    t17 = (t0 + 2888);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 8);
    t8 = (t4 + 12);
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 19);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 19);
    *((unsigned int *)t5) = t14;
    t9 = (t4 + 16);
    t10 = (t4 + 20);
    t15 = *((unsigned int *)t9);
    t16 = (t15 << 13);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t18 | t16);
    t19 = *((unsigned int *)t10);
    t20 = (t19 << 13);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 | t20);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 4294967295U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 4294967295U);
    t17 = (t0 + 3048);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 19);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 19);
    *((unsigned int *)t5) = t14;
    t8 = (t4 + 8);
    t9 = (t4 + 12);
    t15 = *((unsigned int *)t8);
    t16 = (t15 << 13);
    t18 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t18 | t16);
    t19 = *((unsigned int *)t9);
    t20 = (t19 << 13);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 | t20);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 4294967295U);
    t23 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t23 & 4294967295U);
    t10 = (t0 + 3208);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 18);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 18);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 17);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 17);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t8 = (t0 + 3528);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 16);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t8 = (t0 + 3688);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t5) = t16;
    t8 = (t0 + 3848);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 32767U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 32767U);
    t8 = (t0 + 4008);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 15);
    goto LAB2;

}


extern void work_m_00000000001241496948_4024466370_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Always_49_1,(void *)Always_61_2};
	xsi_register_didat("work_m_00000000001241496948_4024466370", "isim/Pipeline_test_isim_beh.exe.sim/work/m_00000000001241496948_4024466370.didat");
	xsi_register_executes(pe);
}
