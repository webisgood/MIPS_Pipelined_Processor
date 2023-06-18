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
static const char *ng0 = "C:/Users/Sanjeev/Desktop/Practice files/Acad Labs/Comp Arch Lab/Pipelined_MIPS_Assignment_3/Assignment_3/R_Type_Datapath (4)/R_Type_Datapath/ALU_Control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {13U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {12U, 0U};
static unsigned int ng12[] = {15U, 15U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {11U, 0U};



static void Always_27_0(char *t0)
{
    char t9[8];
    char t17[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB23;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB23;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB23;

LAB13:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB23;

LAB15:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB23;

LAB17:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB23;

LAB19:    xsi_set_current_line(37, ng0);

LAB24:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 4);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 4);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);

LAB25:    t8 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t9, 2, t8, 2);
    if (t16 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 2, t2, 2);
    if (t6 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB32:    goto LAB23;

LAB26:    xsi_set_current_line(39, ng0);

LAB33:    xsi_set_current_line(40, ng0);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 15U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 15U);

LAB34:    t27 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t17, 4, t27, 4);
    if (t28 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 4, t2, 4);
    if (t6 == 1)
        goto LAB47;

LAB48:
LAB50:
LAB49:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB51:    goto LAB32;

LAB28:    xsi_set_current_line(51, ng0);

LAB52:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t31, 0, 8);
    t3 = (t31 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t31) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t14 & 15U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);

LAB53:    t8 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t31, 4, t8, 4);
    if (t16 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t6 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t6 == 1)
        goto LAB58;

LAB59:
LAB61:
LAB60:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB62:    goto LAB32;

LAB35:    xsi_set_current_line(41, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 1608);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 4);
    goto LAB51;

LAB37:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB51;

LAB39:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB51;

LAB41:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB51;

LAB43:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB51;

LAB45:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB51;

LAB47:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB51;

LAB54:    xsi_set_current_line(53, ng0);
    t18 = ((char*)((ng13)));
    t19 = (t0 + 1608);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 4);
    goto LAB62;

LAB56:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB62;

LAB58:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB62;

}


extern void work_m_00000000001045140209_3148384703_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000001045140209_3148384703", "isim/Pipeline_test_isim_beh.exe.sim/work/m_00000000001045140209_3148384703.didat");
	xsi_register_executes(pe);
}
