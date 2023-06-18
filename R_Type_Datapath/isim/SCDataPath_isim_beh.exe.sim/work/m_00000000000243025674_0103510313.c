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
static const char *ng0 = "C:/Users/lenovo/Downloads/R_Type_Datapath (3)/R_Type_Datapath/ID_EX.v";
static unsigned int ng1[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {224, 0};
static int ng4[] = {193, 0};
static int ng5[] = {192, 0};
static int ng6[] = {161, 0};
static int ng7[] = {160, 0};
static int ng8[] = {129, 0};
static int ng9[] = {128, 0};
static int ng10[] = {97, 0};
static int ng11[] = {96, 0};
static int ng12[] = {65, 0};
static int ng13[] = {64, 0};
static int ng14[] = {33, 0};
static int ng15[] = {32, 0};
static int ng16[] = {13, 0};
static int ng17[] = {12, 0};
static int ng18[] = {11, 0};
static int ng19[] = {10, 0};
static int ng20[] = {9, 0};
static int ng21[] = {8, 0};
static int ng22[] = {7, 0};
static int ng23[] = {6, 0};
static int ng24[] = {3, 0};
static int ng25[] = {2, 0};
static int ng26[] = {0, 0};



static void Always_61_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 7808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 8624);
    *((int *)t2) = 1;
    t3 = (t0 + 7840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 6888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 225);
    goto LAB2;

}

static void Always_66_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;

LAB0:    t1 = (t0 + 8056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 8640);
    *((int *)t2) = 1;
    t3 = (t0 + 8088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(71, ng0);

LAB13:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng3)));
    t21 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
    t21 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng7)));
    t21 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng9)));
    t21 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng11)));
    t21 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng13)));
    t21 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng15)));
    t21 = ((char*)((ng16)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng19)));
    t21 = ((char*)((ng20)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng21)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3288U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng22)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng23)));
    t21 = ((char*)((ng24)));
    xsi_vlog_convert_partindices(t6, t30, t31, ((int*)(t7)), 2, t8, 32, 1, t21, 32, 1);
    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t32 = (!(t9));
    t28 = (t30 + 4);
    t10 = *((unsigned int *)t28);
    t33 = (!(t10));
    t34 = (t32 && t33);
    t29 = (t31 + 4);
    t11 = *((unsigned int *)t29);
    t35 = (!(t11));
    t36 = (t34 && t35);
    if (t36 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng25)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng26)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t32 = (!(t9));
    if (t32 == 1)
        goto LAB44;

LAB45:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(69, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 6888);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 225);
    goto LAB12;

LAB14:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t37, *((unsigned int *)t30), t39);
    goto LAB15;

LAB16:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t37, *((unsigned int *)t30), t39);
    goto LAB17;

LAB18:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t37, *((unsigned int *)t30), t39);
    goto LAB19;

LAB20:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t37, *((unsigned int *)t30), t39);
    goto LAB21;

LAB22:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t37, *((unsigned int *)t30), t39);
    goto LAB23;

LAB24:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t37, *((unsigned int *)t30), t39);
    goto LAB25;

LAB26:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t37, *((unsigned int *)t30), t39);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB31;

LAB32:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t37, *((unsigned int *)t30), t39);
    goto LAB33;

LAB34:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB35;

LAB36:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB37;

LAB38:    t12 = *((unsigned int *)t31);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t30);
    t38 = (t13 - t14);
    t39 = (t38 + 1);
    xsi_vlogvar_assign_value(t2, t3, t37, *((unsigned int *)t30), t39);
    goto LAB39;

LAB40:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB41;

LAB42:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB43;

LAB44:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t6), 1);
    goto LAB45;

}

static void Always_91_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 8304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 8656);
    *((int *)t2) = 1;
    t3 = (t0 + 8336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 6888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 48);
    t10 = (t7 + 52);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 1);
    *((unsigned int *)t8) = t14;
    t15 = (t7 + 56);
    t16 = (t7 + 60);
    t17 = *((unsigned int *)t15);
    t18 = (t17 << 31);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 | t18);
    t20 = *((unsigned int *)t16);
    t21 = (t20 << 31);
    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 | t21);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 4294967295U);
    t25 = (t0 + 4328);
    xsi_vlogvar_assign_value(t25, t4, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 40);
    t8 = (t5 + 44);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 1);
    *((unsigned int *)t6) = t14;
    t9 = (t5 + 48);
    t10 = (t5 + 52);
    t17 = *((unsigned int *)t9);
    t18 = (t17 << 31);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 | t18);
    t20 = *((unsigned int *)t10);
    t21 = (t20 << 31);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 | t21);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 4294967295U);
    t15 = (t0 + 4488);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 32);
    t8 = (t5 + 36);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 1);
    *((unsigned int *)t6) = t14;
    t9 = (t5 + 40);
    t10 = (t5 + 44);
    t17 = *((unsigned int *)t9);
    t18 = (t17 << 31);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 | t18);
    t20 = *((unsigned int *)t10);
    t21 = (t20 << 31);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 | t21);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 4294967295U);
    t15 = (t0 + 4648);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 24);
    t8 = (t5 + 28);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 1);
    *((unsigned int *)t6) = t14;
    t9 = (t5 + 32);
    t10 = (t5 + 36);
    t17 = *((unsigned int *)t9);
    t18 = (t17 << 31);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 | t18);
    t20 = *((unsigned int *)t10);
    t21 = (t20 << 31);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 | t21);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 4294967295U);
    t15 = (t0 + 4808);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 16);
    t8 = (t5 + 20);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 1);
    *((unsigned int *)t6) = t14;
    t9 = (t5 + 24);
    t10 = (t5 + 28);
    t17 = *((unsigned int *)t9);
    t18 = (t17 << 31);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 | t18);
    t20 = *((unsigned int *)t10);
    t21 = (t20 << 31);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 | t21);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 4294967295U);
    t15 = (t0 + 4968);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 8);
    t8 = (t5 + 12);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 1);
    *((unsigned int *)t6) = t14;
    t9 = (t5 + 16);
    t10 = (t5 + 20);
    t17 = *((unsigned int *)t9);
    t18 = (t17 << 31);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 | t18);
    t20 = *((unsigned int *)t10);
    t21 = (t20 << 31);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 | t21);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 4294967295U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 4294967295U);
    t15 = (t0 + 5128);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 13);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 13);
    *((unsigned int *)t6) = t14;
    t8 = (t5 + 8);
    t9 = (t5 + 12);
    t17 = *((unsigned int *)t8);
    t18 = (t17 << 19);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 | t18);
    t20 = *((unsigned int *)t9);
    t21 = (t20 << 19);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 | t21);
    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1048575U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 1048575U);
    t10 = (t0 + 5288);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 20);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 12);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t7);
    t17 = (t14 >> 12);
    t18 = (t17 & 1);
    *((unsigned int *)t6) = t18;
    t8 = (t0 + 5448);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t7);
    t17 = (t14 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t6) = t18;
    t8 = (t0 + 5608);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 9);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 9);
    *((unsigned int *)t6) = t14;
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 3U);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 3U);
    t8 = (t0 + 5768);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 8);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t7);
    t17 = (t14 >> 8);
    t18 = (t17 & 1);
    *((unsigned int *)t6) = t18;
    t8 = (t0 + 5928);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t7);
    t17 = (t14 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t6) = t18;
    t8 = (t0 + 6088);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 3);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 3);
    *((unsigned int *)t6) = t14;
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 15U);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t8 = (t0 + 6248);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 4);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t7);
    t17 = (t14 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t6) = t18;
    t8 = (t0 + 6408);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t7);
    t17 = (t14 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t6) = t18;
    t8 = (t0 + 6568);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t7);
    t17 = (t14 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t6) = t18;
    t8 = (t0 + 6728);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    goto LAB2;

}


extern void work_m_00000000000243025674_0103510313_init()
{
	static char *pe[] = {(void *)Always_61_0,(void *)Always_66_1,(void *)Always_91_2};
	xsi_register_didat("work_m_00000000000243025674_0103510313", "isim/SCDataPath_isim_beh.exe.sim/work/m_00000000000243025674_0103510313.didat");
	xsi_register_executes(pe);
}
