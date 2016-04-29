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
static const char *ng0 = "C:/Xilinx/14.7/ISE_DS/ISE/Shinya_Yamamoto/Project2_Shinya_Yamamoto/AddOrSubtractThenSelectAndDecodedInto7SegmentsDisplay.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {126U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {48U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {109U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {121U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {51U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {91U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {95U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {112U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {127U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {123U, 0U};
static unsigned int ng21[] = {10U, 0U};
static unsigned int ng22[] = {119U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {31U, 0U};
static unsigned int ng25[] = {12U, 0U};
static unsigned int ng26[] = {78U, 0U};
static unsigned int ng27[] = {13U, 0U};
static unsigned int ng28[] = {61U, 0U};
static unsigned int ng29[] = {14U, 0U};
static unsigned int ng30[] = {79U, 0U};
static unsigned int ng31[] = {15U, 0U};
static unsigned int ng32[] = {71U, 0U};
static unsigned int ng33[] = {29U, 0U};



static void Always_35_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 5, t5, 4, t6, 4);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 4);
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t7, 4, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 5, t3, 4, t4, 4);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t7, 0, 0, 4);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t7, 4, 0, 1);
    goto LAB2;

}

static void Always_40_1(char *t0)
{
    char t11[8];
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
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4480);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t11, 5, 5, 2U, t13, 1, t4, 4);
    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 5);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);
    t12 = (t0 + 1928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 2088);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlogtype_concat(t11, 5, 5, 2U, t17, 1, t14, 4);
    t18 = (t0 + 2728);
    xsi_vlogvar_assign_value(t18, t11, 0, 0, 5);
    goto LAB8;

}

static void Always_47_2(char *t0)
{
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

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4496);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng29)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng31)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(49, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 7);
    goto LAB41;

LAB9:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB11:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB13:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB15:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB17:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB19:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB21:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB23:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB25:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB27:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB29:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB31:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB33:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB35:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

LAB37:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB41;

}


extern void work_m_00000000004280613135_0719565513_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_40_1,(void *)Always_47_2};
	xsi_register_didat("work_m_00000000004280613135_0719565513", "isim/Project2_TestBench_byInstructor_isim_beh.exe.sim/work/m_00000000004280613135_0719565513.didat");
	xsi_register_executes(pe);
}
