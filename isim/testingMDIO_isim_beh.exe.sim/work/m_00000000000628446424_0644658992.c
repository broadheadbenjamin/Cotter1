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
static const char *ng0 = "F:/CS 3710/Cotter1 Project/Cotter1/mdioControl.v";
static unsigned int ng1[] = {0U, 1U};
static unsigned int ng2[] = {1342210048U, 0U, 4294967295U, 0U, 1342185728U, 0U, 4294967295U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {63U, 0U};
static unsigned int ng6[] = {1U, 0U, 0U, 0U};
static int ng7[] = {16, 0};
static unsigned int ng8[] = {1610612736U, 0U, 4294967295U, 0U};
static int ng9[] = {39, 0};



static void Cont_48_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 4880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3960);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 5808);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 5696);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 3640);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_50_1(char *t0)
{
    char t11[8];
    char t32[8];
    char t44[8];
    char t65[8];
    char t73[8];
    char t112[8];
    char t120[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;

LAB0:    t1 = (t0 + 5128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5712);
    *((int *)t2) = 1;
    t3 = (t0 + 5160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);

LAB9:    xsi_set_current_line(54, ng0);
    t12 = (t0 + 2360);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t15) == 0)
        goto LAB10;

LAB12:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB13:    t22 = (t11 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t11) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB15;

LAB14:    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    memset(t32, 0, 8);
    t33 = (t11 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t11);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t33) != 0)
        goto LAB18;

LAB19:    t40 = (t32 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB20;

LAB21:    memcpy(t73, t32, 8);

LAB22:    t105 = (t73 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t73);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t5) == 0)
        goto LAB48;

LAB50:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;

LAB51:    t13 = (t11 + 4);
    t14 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t11) = t17;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB53;

LAB52:    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1U);
    t26 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t26 & 1U);
    memset(t32, 0, 8);
    t15 = (t11 + 4);
    t27 = *((unsigned int *)t15);
    t28 = (~(t27));
    t29 = *((unsigned int *)t11);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t15) != 0)
        goto LAB56;

LAB57:    t22 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = *((unsigned int *)t22);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB58;

LAB59:    memcpy(t65, t32, 8);

LAB60:    t56 = (t65 + 4);
    t83 = *((unsigned int *)t56);
    t84 = (~(t83));
    t85 = *((unsigned int *)t65);
    t86 = (t85 & t84);
    t89 = (t86 != 0);
    if (t89 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(77, ng0);

LAB77:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB79;

LAB78:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB80;

LAB81:    t15 = (t11 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB90;

LAB87:    if (t20 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t11) = 1;

LAB90:    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(89, ng0);

LAB95:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2200);
    t12 = (t0 + 2200);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t0 + 2840);
    t21 = (t15 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t22, 7, 2);
    t23 = (t11 + 4);
    t6 = *((unsigned int *)t23);
    t97 = (!(t6));
    if (t97 == 1)
        goto LAB96;

LAB97:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 7, t4, 7, t5, 7);
    t12 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 7, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB101;

LAB98:    if (t20 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t11) = 1;

LAB101:    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB102;

LAB103:
LAB104:
LAB93:
LAB85:
LAB70:
LAB38:    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB15:    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t11) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB14;

LAB16:    *((unsigned int *)t32) = 1;
    goto LAB19;

LAB18:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB19;

LAB20:    t45 = (t0 + 3160);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t44, 0, 8);
    t48 = (t47 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t48) == 0)
        goto LAB23;

LAB25:    t54 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t54) = 1;

LAB26:    t55 = (t44 + 4);
    t56 = (t47 + 4);
    t57 = *((unsigned int *)t47);
    t58 = (~(t57));
    *((unsigned int *)t44) = t58;
    *((unsigned int *)t55) = 0;
    if (*((unsigned int *)t56) != 0)
        goto LAB28;

LAB27:    t63 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t63 & 1U);
    t64 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t64 & 1U);
    memset(t65, 0, 8);
    t66 = (t44 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t44);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t66) != 0)
        goto LAB31;

LAB32:    t74 = *((unsigned int *)t32);
    t75 = *((unsigned int *)t65);
    t76 = (t74 & t75);
    *((unsigned int *)t73) = t76;
    t77 = (t32 + 4);
    t78 = (t65 + 4);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t77);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB22;

LAB23:    *((unsigned int *)t44) = 1;
    goto LAB26;

LAB28:    t59 = *((unsigned int *)t44);
    t60 = *((unsigned int *)t56);
    *((unsigned int *)t44) = (t59 | t60);
    t61 = *((unsigned int *)t55);
    t62 = *((unsigned int *)t56);
    *((unsigned int *)t55) = (t61 | t62);
    goto LAB27;

LAB29:    *((unsigned int *)t65) = 1;
    goto LAB32;

LAB31:    t72 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB32;

LAB33:    t85 = *((unsigned int *)t73);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t85 | t86);
    t87 = (t32 + 4);
    t88 = (t65 + 4);
    t89 = *((unsigned int *)t32);
    t90 = (~(t89));
    t91 = *((unsigned int *)t87);
    t92 = (~(t91));
    t93 = *((unsigned int *)t65);
    t94 = (~(t93));
    t95 = *((unsigned int *)t88);
    t96 = (~(t95));
    t97 = (t90 & t92);
    t98 = (t94 & t96);
    t99 = (~(t97));
    t100 = (~(t98));
    t101 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t101 & t99);
    t102 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t102 & t100);
    t103 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t103 & t99);
    t104 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t104 & t100);
    goto LAB35;

LAB36:    xsi_set_current_line(55, ng0);

LAB39:    xsi_set_current_line(56, ng0);
    t111 = ((char*)((ng2)));
    t113 = (t0 + 416);
    t114 = (t113 + 72U);
    t115 = *((char **)t114);
    t116 = (t0 + 2840);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    xsi_vlog_generic_get_index_select_value(t112, 1, t111, t115, 2, t118, 7, 2);
    t119 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t119, t112, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 7, t4, 7, t5, 7);
    t12 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 7, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB43;

LAB40:    if (t20 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t11) = 1;

LAB43:    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB38;

LAB42:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(60, ng0);

LAB47:    xsi_set_current_line(61, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB46;

LAB48:    *((unsigned int *)t11) = 1;
    goto LAB51;

LAB53:    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t18 | t19);
    t20 = *((unsigned int *)t13);
    t24 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t24);
    goto LAB52;

LAB54:    *((unsigned int *)t32) = 1;
    goto LAB57;

LAB56:    t21 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB57;

LAB58:    t23 = (t0 + 3160);
    t33 = (t23 + 56U);
    t39 = *((char **)t33);
    memset(t44, 0, 8);
    t40 = (t39 + 4);
    t37 = *((unsigned int *)t40);
    t38 = (~(t37));
    t41 = *((unsigned int *)t39);
    t42 = (t41 & t38);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t40) != 0)
        goto LAB63;

LAB64:    t49 = *((unsigned int *)t32);
    t50 = *((unsigned int *)t44);
    t51 = (t49 & t50);
    *((unsigned int *)t65) = t51;
    t46 = (t32 + 4);
    t47 = (t44 + 4);
    t48 = (t65 + 4);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t47);
    t57 = (t52 | t53);
    *((unsigned int *)t48) = t57;
    t58 = *((unsigned int *)t48);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB60;

LAB61:    *((unsigned int *)t44) = 1;
    goto LAB64;

LAB63:    t45 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB64;

LAB65:    t60 = *((unsigned int *)t65);
    t61 = *((unsigned int *)t48);
    *((unsigned int *)t65) = (t60 | t61);
    t54 = (t32 + 4);
    t55 = (t44 + 4);
    t62 = *((unsigned int *)t32);
    t63 = (~(t62));
    t64 = *((unsigned int *)t54);
    t67 = (~(t64));
    t68 = *((unsigned int *)t44);
    t69 = (~(t68));
    t70 = *((unsigned int *)t55);
    t71 = (~(t70));
    t97 = (t63 & t67);
    t98 = (t69 & t71);
    t74 = (~(t97));
    t75 = (~(t98));
    t76 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t76 & t74);
    t80 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t80 & t75);
    t81 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t81 & t74);
    t82 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t82 & t75);
    goto LAB67;

LAB68:    xsi_set_current_line(66, ng0);

LAB71:    xsi_set_current_line(67, ng0);
    t66 = (t0 + 2520);
    t72 = (t66 + 56U);
    t77 = *((char **)t72);
    memset(t73, 0, 8);
    t78 = (t73 + 4);
    t79 = (t77 + 4);
    t90 = *((unsigned int *)t77);
    t91 = (t90 >> 19);
    t92 = (t91 & 1);
    *((unsigned int *)t73) = t92;
    t93 = *((unsigned int *)t79);
    t94 = (t93 >> 19);
    t95 = (t94 & 1);
    *((unsigned int *)t78) = t95;
    t87 = (t73 + 4);
    t96 = *((unsigned int *)t87);
    t99 = (~(t96));
    t100 = *((unsigned int *)t73);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(72, ng0);

LAB76:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    xsi_vlog_unsigned_add(t120, 34, t4, 34, t5, 34);
    t12 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t12, t120, 0, 0, 34, 0LL);

LAB74:    goto LAB70;

LAB72:    xsi_set_current_line(68, ng0);

LAB75:    xsi_set_current_line(69, ng0);
    t88 = ((char*)((ng3)));
    t105 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t105, t88, 0, 0, 1, 0LL);
    goto LAB74;

LAB79:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB81;

LAB80:    *((unsigned int *)t11) = 1;
    goto LAB81;

LAB83:    xsi_set_current_line(79, ng0);

LAB86:    xsi_set_current_line(80, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 552);
    t23 = (t22 + 72U);
    t33 = *((char **)t23);
    t39 = (t0 + 2840);
    t40 = (t39 + 56U);
    t45 = *((char **)t40);
    xsi_vlog_generic_get_index_select_value(t32, 1, t21, t33, 2, t45, 7, 2);
    t46 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t46, t32, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 7, t4, 7, t5, 7);
    t12 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 7, 0LL);
    goto LAB85;

LAB89:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(84, ng0);

LAB94:    xsi_set_current_line(85, ng0);
    t21 = (t0 + 2840);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t33 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 7, t23, 7, t33, 7);
    t39 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t39, t32, 0, 0, 7, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB93;

LAB96:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB97;

LAB100:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(94, ng0);

LAB105:    xsi_set_current_line(95, ng0);
    t21 = ((char*)((ng5)));
    t22 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 7, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB104;

}

static void Always_103_2(char *t0)
{
    char t6[8];
    char t23[8];
    char t38[8];
    char t46[8];
    char t88[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;

LAB0:    t1 = (t0 + 5376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5728);
    *((int *)t2) = 1;
    t3 = (t0 + 5408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    t4 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t23, 0, 8);
    t24 = (t6 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t6);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t24) != 0)
        goto LAB14;

LAB15:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB16;

LAB17:    memcpy(t46, t23, 8);

LAB18:    t78 = (t46 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t46);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB14:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    t35 = (t0 + 3480);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t37);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t39) != 0)
        goto LAB21;

LAB22:    t47 = *((unsigned int *)t23);
    t48 = *((unsigned int *)t38);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t50 = (t23 + 4);
    t51 = (t38 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB18;

LAB19:    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB21:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB22;

LAB23:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t23 + 4);
    t61 = (t38 + 4);
    t62 = *((unsigned int *)t23);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB25;

LAB26:    xsi_set_current_line(107, ng0);

LAB29:    xsi_set_current_line(108, ng0);
    t84 = (t0 + 3000);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t87 = ((char*)((ng9)));
    memset(t88, 0, 8);
    t89 = (t86 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB31;

LAB30:    t90 = (t87 + 4);
    if (*((unsigned int *)t90) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t86) < *((unsigned int *)t87))
        goto LAB32;

LAB33:    t92 = (t88 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t88);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB37:    goto LAB28;

LAB31:    t91 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t88) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(109, ng0);
    t98 = (t0 + 3000);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = ((char*)((ng3)));
    memset(t102, 0, 8);
    xsi_vlog_unsigned_add(t102, 6, t100, 6, t101, 6);
    t103 = (t0 + 3000);
    xsi_vlogvar_assign_value(t103, t102, 0, 0, 6);
    goto LAB37;

}


extern void work_m_00000000000628446424_0644658992_init()
{
	static char *pe[] = {(void *)Cont_48_0,(void *)Always_50_1,(void *)Always_103_2};
	xsi_register_didat("work_m_00000000000628446424_0644658992", "isim/testingMDIO_isim_beh.exe.sim/work/m_00000000000628446424_0644658992.didat");
	xsi_register_executes(pe);
}
