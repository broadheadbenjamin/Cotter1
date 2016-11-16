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
static const char *ng0 = "H:/CS 3710/Cotter1 Project/Cotter1/phy_controller.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2032U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {15, 0};
static int ng6[] = {12, 0};
static int ng7[] = {11, 0};
static int ng8[] = {8, 0};
static int ng9[] = {7, 0};
static int ng10[] = {4, 0};
static int ng11[] = {3, 0};
static int ng12[] = {0, 0};
static unsigned int ng13[] = {14U, 0U};
static unsigned int ng14[] = {57U, 0U};
static unsigned int ng15[] = {25U, 0U};
static unsigned int ng16[] = {15U, 0U};



static void Always_64_0(char *t0)
{
    char t7[8];
    char t26[8];
    char t47[8];
    char t48[8];
    char t54[8];
    char t55[8];
    char t56[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    int t46;
    char *t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    int t64;
    char *t65;
    unsigned int t66;
    int t67;
    int t68;
    char *t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6456);
    *((int *)t2) = 1;
    t3 = (t0 + 6168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 5056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 11);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 11);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t28 = (t17 & t21);
    if (t28 != 0)
        goto LAB13;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t7) = 1;

LAB13:    t16 = (t7 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 12, t4, 12, t5, 12);
    t6 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t6, t7, 0, 0, 12, 0LL);

LAB16:
LAB8:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3376U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB2;

LAB6:    xsi_set_current_line(67, ng0);

LAB9:    xsi_set_current_line(68, ng0);
    t22 = (t0 + 5216);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng1)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 4, t24, 4, t25, 4);
    t27 = (t0 + 5216);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 4, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(73, ng0);

LAB17:    xsi_set_current_line(74, ng0);
    t22 = (t0 + 5056);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng1)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 12, t24, 12, t25, 12);
    t27 = (t0 + 5056);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 12, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(81, ng0);

LAB21:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 5216);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t17 = (t15 >> 0);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 >> 0);
    *((unsigned int *)t8) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 3U);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 3U);
    t16 = ((char*)((ng2)));
    memset(t26, 0, 8);
    t22 = (t7 + 4);
    t23 = (t16 + 4);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t16);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t22);
    t36 = *((unsigned int *)t23);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB25;

LAB22:    if (t37 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t26) = 1;

LAB25:    t25 = (t26 + 4);
    t40 = *((unsigned int *)t25);
    t41 = (~(t40));
    t42 = *((unsigned int *)t26);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t5 = (t26 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 3U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 3U);
    t8 = ((char*)((ng1)));
    memset(t47, 0, 8);
    t9 = (t26 + 4);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t26);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t16);
    t28 = (t20 ^ t21);
    t29 = (t19 | t28);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t16);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB47;

LAB44:    if (t32 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t47) = 1;

LAB47:    t23 = (t47 + 4);
    t35 = *((unsigned int *)t23);
    t36 = (~(t35));
    t37 = *((unsigned int *)t47);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    memset(t26, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t28 = (t17 & t21);
    if (t28 != 0)
        goto LAB77;

LAB74:    if (t20 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t26) = 1;

LAB77:    t16 = (t26 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t26, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t17 = (t12 | t15);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t28 = (t17 & t21);
    if (t28 != 0)
        goto LAB93;

LAB90:    if (t20 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t26) = 1;

LAB93:    t16 = (t26 + 4);
    t29 = *((unsigned int *)t16);
    t30 = (~(t29));
    t31 = *((unsigned int *)t26);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB94;

LAB95:
LAB96:
LAB80:
LAB50:
LAB28:    goto LAB20;

LAB24:    t24 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(83, ng0);

LAB29:    xsi_set_current_line(84, ng0);
    t27 = ((char*)((ng2)));
    t45 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t45, t27, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 2);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 2);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 3U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 3U);

LAB30:    t8 = ((char*)((ng2)));
    t46 = xsi_vlog_unsigned_case_compare(t7, 2, t8, 2);
    if (t46 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng1)));
    t46 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t46 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t46 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t46 == 1)
        goto LAB35;

LAB36:
LAB38:
LAB37:    xsi_set_current_line(99, ng0);

LAB43:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    memset(t26, 0, 8);
    t2 = (t26 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);
    t5 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t5, t26, 0, 0, 4, 0LL);

LAB39:    goto LAB28;

LAB31:    xsi_set_current_line(87, ng0);

LAB40:    xsi_set_current_line(88, ng0);
    t9 = (t0 + 2256U);
    t16 = *((char **)t9);
    memset(t26, 0, 8);
    t9 = (t26 + 4);
    t22 = (t16 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (t17 >> 12);
    *((unsigned int *)t26) = t18;
    t19 = *((unsigned int *)t22);
    t20 = (t19 >> 12);
    *((unsigned int *)t9) = t20;
    t21 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t21 & 15U);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t28 & 15U);
    t23 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t23, t26, 0, 0, 4, 0LL);
    goto LAB39;

LAB33:    xsi_set_current_line(91, ng0);

LAB41:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 2256U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 8);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 15U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t6 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t6, t26, 0, 0, 4, 0LL);
    goto LAB39;

LAB35:    xsi_set_current_line(95, ng0);

LAB42:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 2256U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 4);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 4);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 15U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t6 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t6, t26, 0, 0, 4, 0LL);
    goto LAB39;

LAB46:    t22 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(105, ng0);

LAB51:    xsi_set_current_line(106, ng0);
    t24 = (t0 + 5216);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    memset(t48, 0, 8);
    t45 = (t48 + 4);
    t49 = (t27 + 4);
    t40 = *((unsigned int *)t27);
    t41 = (t40 >> 2);
    *((unsigned int *)t48) = t41;
    t42 = *((unsigned int *)t49);
    t43 = (t42 >> 2);
    *((unsigned int *)t45) = t43;
    t44 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t44 & 3U);
    t50 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t50 & 3U);

LAB52:    t51 = ((char*)((ng2)));
    t46 = xsi_vlog_unsigned_case_compare(t48, 2, t51, 2);
    if (t46 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng1)));
    t46 = xsi_vlog_unsigned_case_compare(t48, 2, t2, 2);
    if (t46 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng4)));
    t46 = xsi_vlog_unsigned_case_compare(t48, 2, t2, 2);
    if (t46 == 1)
        goto LAB57;

LAB58:
LAB60:
LAB59:    xsi_set_current_line(120, ng0);

LAB71:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    t2 = (t0 + 3936);
    t4 = (t0 + 3936);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng11)));
    t9 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t26, t47, t54, ((int*)(t6)), 2, t8, 32, 1, t9, 32, 1);
    t16 = (t26 + 4);
    t10 = *((unsigned int *)t16);
    t46 = (!(t10));
    t22 = (t47 + 4);
    t11 = *((unsigned int *)t22);
    t64 = (!(t11));
    t67 = (t46 && t64);
    t23 = (t54 + 4);
    t12 = *((unsigned int *)t23);
    t68 = (!(t12));
    t71 = (t67 && t68);
    if (t71 == 1)
        goto LAB72;

LAB73:
LAB61:    goto LAB50;

LAB53:    xsi_set_current_line(108, ng0);

LAB62:    xsi_set_current_line(109, ng0);
    t52 = (t0 + 2416U);
    t53 = *((char **)t52);
    t52 = (t0 + 3936);
    t57 = (t0 + 3936);
    t58 = (t57 + 72U);
    t59 = *((char **)t58);
    t60 = ((char*)((ng5)));
    t61 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t54, t55, t56, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t54 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    t65 = (t55 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t64 && t67);
    t69 = (t56 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB63;

LAB64:    goto LAB61;

LAB55:    xsi_set_current_line(112, ng0);

LAB65:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 2416U);
    t4 = *((char **)t3);
    t3 = (t0 + 3936);
    t5 = (t0 + 3936);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng7)));
    t16 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t26, t47, t54, ((int*)(t8)), 2, t9, 32, 1, t16, 32, 1);
    t22 = (t26 + 4);
    t10 = *((unsigned int *)t22);
    t64 = (!(t10));
    t23 = (t47 + 4);
    t11 = *((unsigned int *)t23);
    t67 = (!(t11));
    t68 = (t64 && t67);
    t24 = (t54 + 4);
    t12 = *((unsigned int *)t24);
    t71 = (!(t12));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB66;

LAB67:    goto LAB61;

LAB57:    xsi_set_current_line(116, ng0);

LAB68:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 2416U);
    t4 = *((char **)t3);
    t3 = (t0 + 3936);
    t5 = (t0 + 3936);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng9)));
    t16 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t26, t47, t54, ((int*)(t8)), 2, t9, 32, 1, t16, 32, 1);
    t22 = (t26 + 4);
    t10 = *((unsigned int *)t22);
    t64 = (!(t10));
    t23 = (t47 + 4);
    t11 = *((unsigned int *)t23);
    t67 = (!(t11));
    t68 = (t64 && t67);
    t24 = (t54 + 4);
    t12 = *((unsigned int *)t24);
    t71 = (!(t12));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB69;

LAB70:    goto LAB61;

LAB63:    t73 = *((unsigned int *)t56);
    t74 = (t73 + 0);
    t75 = *((unsigned int *)t54);
    t76 = *((unsigned int *)t55);
    t77 = (t75 - t76);
    t78 = (t77 + 1);
    xsi_vlogvar_wait_assign_value(t52, t53, t74, *((unsigned int *)t55), t78, 0LL);
    goto LAB64;

LAB66:    t13 = *((unsigned int *)t54);
    t74 = (t13 + 0);
    t14 = *((unsigned int *)t26);
    t15 = *((unsigned int *)t47);
    t77 = (t14 - t15);
    t78 = (t77 + 1);
    xsi_vlogvar_wait_assign_value(t3, t4, t74, *((unsigned int *)t47), t78, 0LL);
    goto LAB67;

LAB69:    t13 = *((unsigned int *)t54);
    t74 = (t13 + 0);
    t14 = *((unsigned int *)t26);
    t15 = *((unsigned int *)t47);
    t77 = (t14 - t15);
    t78 = (t77 + 1);
    xsi_vlogvar_wait_assign_value(t3, t4, t74, *((unsigned int *)t47), t78, 0LL);
    goto LAB70;

LAB72:    t13 = *((unsigned int *)t54);
    t72 = (t13 + 0);
    t14 = *((unsigned int *)t26);
    t15 = *((unsigned int *)t47);
    t74 = (t14 - t15);
    t77 = (t74 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, t72, *((unsigned int *)t47), t77, 0LL);
    goto LAB73;

LAB76:    t9 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(126, ng0);

LAB81:    xsi_set_current_line(127, ng0);
    t22 = (t0 + 4096);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng14)));
    memset(t47, 0, 8);
    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB83;

LAB82:    t45 = (t25 + 4);
    if (*((unsigned int *)t45) != 0)
        goto LAB83;

LAB86:    if (*((unsigned int *)t24) < *((unsigned int *)t25))
        goto LAB84;

LAB85:    t51 = (t47 + 4);
    t34 = *((unsigned int *)t51);
    t35 = (~(t34));
    t36 = *((unsigned int *)t47);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 15, 0LL);

LAB89:    goto LAB80;

LAB83:    t49 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB85;

LAB84:    *((unsigned int *)t47) = 1;
    goto LAB85;

LAB87:    xsi_set_current_line(128, ng0);
    t52 = (t0 + 4096);
    t53 = (t52 + 56U);
    t57 = *((char **)t53);
    t58 = ((char*)((ng1)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 15, t57, 15, t58, 15);
    t59 = (t0 + 4096);
    xsi_vlogvar_wait_assign_value(t59, t54, 0, 0, 15, 0LL);
    goto LAB89;

LAB92:    t9 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(133, ng0);

LAB97:    xsi_set_current_line(134, ng0);
    t22 = ((char*)((ng1)));
    t23 = (t0 + 4896);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB96;

}


extern void work_m_00000000003011156421_1059229608_init()
{
	static char *pe[] = {(void *)Always_64_0};
	xsi_register_didat("work_m_00000000003011156421_1059229608", "isim/test_wired_isim_beh.exe.sim/work/m_00000000003011156421_1059229608.didat");
	xsi_register_executes(pe);
}
