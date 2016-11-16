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
static const char *ng0 = "H:/CS 3710/Cotter1 Project/Cotter1/wired_together.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {1023U, 0U};
static unsigned int ng9[] = {10000000U, 0U};
static unsigned int ng10[] = {9999U, 0U};



static void Cont_123_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 12240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 7560U);
    t3 = *((char **)t2);
    t2 = (t0 + 13432);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 7);
    t16 = (t0 + 13304);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_125_1(char *t0)
{
    char t11[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 12488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 13320);
    *((int *)t2) = 1;
    t3 = (t0 + 12520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(126, ng0);

LAB5:    xsi_set_current_line(129, ng0);
    t4 = (t0 + 11160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 7560U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    t7 = (t11 + 4);
    t9 = (t5 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t5);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t9);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t9);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB32;

LAB29:    if (t28 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t18) = 1;

LAB32:    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(179, ng0);

LAB37:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 7560U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 7U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 7U);

LAB38:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t5, 3);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 6440U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 16);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t16 & 65535U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 65535U);
    t7 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t7, t18, 0, 0, 16, 0LL);

LAB55:
LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(131, ng0);

LAB16:    xsi_set_current_line(132, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 9720);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(139, ng0);

LAB17:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 9720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 7560U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 7);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 7);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    t7 = (t11 + 4);
    t9 = (t5 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t5);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t9);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t9);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB21;

LAB18:    if (t28 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t18) = 1;

LAB21:    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(150, ng0);

LAB26:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB24:    goto LAB15;

LAB11:    xsi_set_current_line(156, ng0);

LAB27:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 9720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB13:    xsi_set_current_line(165, ng0);

LAB28:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 9720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB20:    t10 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(146, ng0);

LAB25:    xsi_set_current_line(147, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 10360);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 1);
    goto LAB24;

LAB31:    t10 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(175, ng0);

LAB36:    xsi_set_current_line(176, ng0);
    t37 = (t0 + 7240U);
    t38 = *((char **)t37);
    t37 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t37, t38, 0, 0, 16, 0LL);
    goto LAB35;

LAB39:    xsi_set_current_line(181, ng0);
    t7 = (t0 + 6440U);
    t9 = *((char **)t7);
    memset(t18, 0, 8);
    t7 = (t18 + 4);
    t10 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 0);
    *((unsigned int *)t18) = t20;
    t21 = *((unsigned int *)t10);
    t22 = (t21 >> 0);
    *((unsigned int *)t7) = t22;
    t23 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t23 & 65535U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 65535U);
    t31 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t31, t18, 0, 0, 16, 0LL);
    goto LAB55;

LAB41:    xsi_set_current_line(182, ng0);
    t3 = (t0 + 6440U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 16);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t7 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t7, t18, 0, 0, 16, 0LL);
    goto LAB55;

LAB43:    xsi_set_current_line(183, ng0);
    t3 = (t0 + 6440U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 8);
    t7 = (t4 + 12);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t9 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t9, t18, 0, 0, 16, 0LL);
    goto LAB55;

LAB45:    xsi_set_current_line(184, ng0);
    t3 = (t0 + 6440U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 8);
    t7 = (t4 + 12);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 16);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 16);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t9 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t9, t18, 0, 0, 16, 0LL);
    goto LAB55;

LAB47:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 6440U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 16);
    t7 = (t4 + 20);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t9 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t9, t18, 0, 0, 16, 0LL);
    goto LAB55;

LAB49:    xsi_set_current_line(186, ng0);
    t3 = (t0 + 6440U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 16);
    t7 = (t4 + 20);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 16);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 16);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t9 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t9, t18, 0, 0, 16, 0LL);
    goto LAB55;

LAB51:    xsi_set_current_line(187, ng0);
    t3 = (t0 + 6440U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t5 = (t4 + 24);
    t7 = (t4 + 28);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t16 & 65535U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 65535U);
    t9 = (t0 + 10840);
    xsi_vlogvar_wait_assign_value(t9, t18, 0, 0, 16, 0LL);
    goto LAB55;

}

static void Always_197_2(char *t0)
{
    char t4[8];
    char t32[8];
    char t40[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;

LAB0:    t1 = (t0 + 12736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 13336);
    *((int *)t2) = 1;
    t3 = (t0 + 12768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(198, ng0);

LAB5:    xsi_set_current_line(199, ng0);
    t5 = (t0 + 11320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB10:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 11320);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 11000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 11, t5, 11, t6, 11);
    t7 = (t0 + 11000);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 11, 0LL);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 11000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB15;

LAB12:    if (t21 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t4) = 1;

LAB15:    t15 = (t4 + 4);
    t24 = *((unsigned int *)t15);
    t26 = (~(t24));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 7720U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 4);
    t11 = (t10 & 1);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 4);
    t17 = (t13 & 1);
    *((unsigned int *)t2) = t17;
    t6 = ((char*)((ng2)));
    memset(t32, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t8);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t34 = (t24 & t29);
    if (t34 != 0)
        goto LAB23;

LAB20:    if (t28 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t32) = 1;

LAB23:    t15 = (t32 + 4);
    t35 = *((unsigned int *)t15);
    t36 = (~(t35));
    t37 = *((unsigned int *)t32);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 7560U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 7);
    t17 = (t13 & 1);
    *((unsigned int *)t2) = t17;
    t6 = ((char*)((ng2)));
    memset(t32, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t8);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t8);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t34 = (t24 & t29);
    if (t34 != 0)
        goto LAB31;

LAB28:    if (t28 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t32) = 1;

LAB31:    t15 = (t32 + 4);
    t35 = *((unsigned int *)t15);
    t36 = (~(t35));
    t37 = *((unsigned int *)t32);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB10;

LAB14:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(204, ng0);

LAB19:    xsi_set_current_line(205, ng0);
    t16 = (t0 + 11160);
    t25 = (t16 + 56U);
    t30 = *((char **)t25);
    t31 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 2, t30, 2, t31, 2);
    t33 = (t0 + 11160);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 2, 0LL);
    goto LAB18;

LAB22:    t14 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(209, ng0);

LAB27:    xsi_set_current_line(210, ng0);
    t16 = ((char*)((ng1)));
    t25 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t25, t16, 0, 0, 16, 0LL);
    goto LAB26;

LAB30:    t14 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(213, ng0);

LAB35:    xsi_set_current_line(214, ng0);
    t16 = (t0 + 10520);
    t25 = (t16 + 56U);
    t30 = *((char **)t25);
    t31 = ((char*)((ng9)));
    memset(t40, 0, 8);
    t33 = (t30 + 4);
    t41 = (t31 + 4);
    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t31);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t33);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB39;

LAB36:    if (t51 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t40) = 1;

LAB39:    t55 = (t40 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t40);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(227, ng0);

LAB53:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 10520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 24, t5, 24, t6, 24);
    t7 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 24, 0LL);

LAB42:    goto LAB34;

LAB38:    t54 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(215, ng0);

LAB43:    xsi_set_current_line(216, ng0);
    t61 = (t0 + 10680);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng10)));
    memset(t65, 0, 8);
    t66 = (t63 + 4);
    t67 = (t64 + 4);
    t68 = *((unsigned int *)t63);
    t69 = *((unsigned int *)t64);
    t70 = (t68 ^ t69);
    t71 = *((unsigned int *)t66);
    t72 = *((unsigned int *)t67);
    t73 = (t71 ^ t72);
    t74 = (t70 | t73);
    t75 = *((unsigned int *)t66);
    t76 = *((unsigned int *)t67);
    t77 = (t75 | t76);
    t78 = (~(t77));
    t79 = (t74 & t78);
    if (t79 != 0)
        goto LAB47;

LAB44:    if (t77 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t65) = 1;

LAB47:    t81 = (t65 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t65);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(221, ng0);

LAB52:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 10680);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 16, t5, 16, t6, 16);
    t7 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);

LAB50:    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    goto LAB42;

LAB46:    t80 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(217, ng0);

LAB51:    xsi_set_current_line(218, ng0);
    t87 = ((char*)((ng1)));
    t88 = (t0 + 10680);
    xsi_vlogvar_wait_assign_value(t88, t87, 0, 0, 16, 0LL);
    goto LAB50;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char t5[8];
    char t15[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 12984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7560U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 7560U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t13) = t22;
    t23 = (t0 + 7560U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 2);
    t29 = (t28 & 1);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 2);
    t32 = (t31 & 1);
    *((unsigned int *)t23) = t32;
    xsi_vlogtype_concat(t3, 3, 3, 3U, t25, 1, t15, 1, t5, 1);
    t33 = (t0 + 13496);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t37, 0, 8);
    t38 = 7U;
    t39 = t38;
    t40 = (t3 + 4);
    t41 = *((unsigned int *)t3);
    t38 = (t38 & t41);
    t42 = *((unsigned int *)t40);
    t39 = (t39 & t42);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 | t38);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t45 | t39);
    xsi_driver_vfirst_trans(t33, 0, 2);
    t46 = (t0 + 13352);
    *((int *)t46) = 1;

LAB1:    return;
}


extern void work_m_00000000002375263529_1150670103_init()
{
	static char *pe[] = {(void *)Cont_123_0,(void *)Always_125_1,(void *)Always_197_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000002375263529_1150670103", "isim/test_wired_isim_beh.exe.sim/work/m_00000000002375263529_1150670103.didat");
	xsi_register_executes(pe);
}
