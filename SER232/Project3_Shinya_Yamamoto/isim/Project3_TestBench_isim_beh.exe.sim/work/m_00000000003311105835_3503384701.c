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
static const char *ng0 = "C:/Xilinx/14.7/ISE_DS/ISE/Shinya_Yamamoto/Project3_Shinya_Yamamoto/calculator.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {5, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {10, 0};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {9U, 0U};



static void Always_36_0(char *t0)
{
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);

LAB28:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 16, t8, 16, t9, 16);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t3, 16, t4, 16);
    t2 = (t0 + 2248);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_greater(t11, 32, t10, 32, t8, 32);
    t9 = (t11 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t3, 16, t4, 16);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t10, 32, t8, 32);
    t9 = (t11 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(45, ng0);

LAB37:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB35:
LAB31:    goto LAB27;

LAB9:    xsi_set_current_line(49, ng0);

LAB38:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t3, 16, t4, 16);
    t2 = (t0 + 2248);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_greater(t11, 32, t10, 32, t8, 32);
    t9 = (t11 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t3, 16, t4, 16);
    t2 = (t0 + 2088);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t10, 32, t8, 32);
    t9 = (t11 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(56, ng0);

LAB47:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB45:
LAB41:    goto LAB27;

LAB11:    xsi_set_current_line(60, ng0);

LAB48:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t4, 16, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t3, 16, t2, 32);
    t4 = (t0 + 2248);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_greater(t11, 32, t10, 32, t8, 32);
    t9 = (t11 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t3, 16, t2, 32);
    t4 = (t0 + 2088);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t10, 32, t8, 32);
    t9 = (t11 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(67, ng0);

LAB57:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB55:
LAB51:    goto LAB27;

LAB13:    xsi_set_current_line(71, ng0);

LAB58:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_signed_divide(t10, 32, t4, 16, t3, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_signed_mod(t10, 32, t3, 16, t2, 32);
    t4 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_signed_equal(t11, 32, t10, 32, t4, 32);
    t7 = (t11 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(78, ng0);

LAB63:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB61:    goto LAB27;

LAB15:    xsi_set_current_line(82, ng0);

LAB64:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_and(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB27;

LAB17:    xsi_set_current_line(87, ng0);

LAB65:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_xor(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB27;

LAB19:    xsi_set_current_line(92, ng0);

LAB66:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_signed_bit_or(t10, 16, t4, 16, t7, 16);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 16);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB27;

LAB21:    xsi_set_current_line(97, ng0);

LAB67:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    memcpy(t10, t4, 8);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t13 | t14);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 65535U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 65535U);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 16);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB27;

LAB23:    xsi_set_current_line(103, ng0);

LAB68:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 16, t4, 16, t3, 16);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t3, 16, t7, 32);
    t8 = (t10 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(108, ng0);

LAB73:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB71:    goto LAB27;

LAB25:    xsi_set_current_line(112, ng0);

LAB74:    xsi_set_current_line(114, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 16, t4, 16, t3, 16);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 16);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t3, 16, t7, 32);
    t8 = (t10 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(117, ng0);

LAB79:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB77:    goto LAB27;

LAB29:    xsi_set_current_line(41, ng0);

LAB32:    xsi_set_current_line(42, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB31;

LAB33:    xsi_set_current_line(43, ng0);

LAB36:    xsi_set_current_line(44, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB35;

LAB39:    xsi_set_current_line(52, ng0);

LAB42:    xsi_set_current_line(53, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB41;

LAB43:    xsi_set_current_line(54, ng0);

LAB46:    xsi_set_current_line(55, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB45;

LAB49:    xsi_set_current_line(63, ng0);

LAB52:    xsi_set_current_line(64, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB51;

LAB53:    xsi_set_current_line(65, ng0);

LAB56:    xsi_set_current_line(66, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB55;

LAB59:    xsi_set_current_line(76, ng0);

LAB62:    xsi_set_current_line(77, ng0);
    t8 = ((char*)((ng3)));
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    goto LAB61;

LAB69:    xsi_set_current_line(106, ng0);

LAB72:    xsi_set_current_line(107, ng0);
    t9 = ((char*)((ng2)));
    t17 = (t0 + 1928);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 1);
    goto LAB71;

LAB75:    xsi_set_current_line(115, ng0);

LAB78:    xsi_set_current_line(116, ng0);
    t9 = ((char*)((ng2)));
    t17 = (t0 + 1928);
    xsi_vlogvar_assign_value(t17, t9, 0, 0, 1);
    goto LAB77;

}


extern void work_m_00000000003311105835_3503384701_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000003311105835_3503384701", "isim/Project3_TestBench_isim_beh.exe.sim/work/m_00000000003311105835_3503384701.didat");
	xsi_register_executes(pe);
}
