/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#define HDMIRX_PHY_READBACK (A_ADR + 0x1000)

//Page P0_HDMIRX_PHY_READBACK
#define REG_0000_READBACK (HDMIRX_PHY_READBACK + 0x800)
    #define REG_0000_READBACK_RD_LANE_FSM_STAT_0 Fld(13, 0, AC_MSKW10)
#define REG_0004_READBACK (HDMIRX_PHY_READBACK + 0x804)
    #define REG_0004_READBACK_RD_LANE_FSM_STAT_1 Fld(13, 0, AC_MSKW10)
#define REG_0008_READBACK (HDMIRX_PHY_READBACK + 0x808)
    #define REG_0008_READBACK_RD_LANE_FSM_STAT_2 Fld(13, 0, AC_MSKW10)
#define REG_000C_READBACK (HDMIRX_PHY_READBACK + 0x80C)
    #define REG_000C_READBACK_RD_LANE_FSM_STAT_3 Fld(13, 0, AC_MSKW10)
#define REG_0010_READBACK (HDMIRX_PHY_READBACK + 0x810)
    #define REG_0010_READBACK_RD_EQ_FSM_STAT_0 Fld(8, 0, AC_FULLB0)
    #define REG_0010_READBACK_RD_EQ_FSM_STAT_1 Fld(8, 8, AC_FULLB1)
#define REG_0014_READBACK (HDMIRX_PHY_READBACK + 0x814)
    #define REG_0014_READBACK_RD_EQ_FSM_STAT_2 Fld(8, 0, AC_FULLB0)
    #define REG_0014_READBACK_RD_EQ_FSM_STAT_3 Fld(8, 8, AC_FULLB1)
#define REG_0100_READBACK (HDMIRX_PHY_READBACK + 0x900)
    #define REG_0100_READBACK_RD_DLEV_CHECK_OV_0 Fld(8, 0, AC_FULLB0)
    #define REG_0100_READBACK_RD_DLEV_CHECK_OV_1 Fld(8, 8, AC_FULLB1)
#define REG_0104_READBACK (HDMIRX_PHY_READBACK + 0x904)
    #define REG_0104_READBACK_RD_DLEV_CHECK_OV_2 Fld(8, 0, AC_FULLB0)
    #define REG_0104_READBACK_RD_DLEV_CHECK_OV_3 Fld(8, 8, AC_FULLB1)
#define REG_0140_READBACK (HDMIRX_PHY_READBACK + 0x940)
    #define REG_0140_READBACK_RD_CLK_LCK_CNT_OVF_L0 Fld(1, 8, AC_MSKB1)
    #define REG_0140_READBACK_RD_CLK_LCK_CNT_OVF_L1 Fld(1, 10, AC_MSKB1)
    #define REG_0140_READBACK_RD_CLK_LCK_CNT_OVF_L2 Fld(1, 12, AC_MSKB1)
    #define REG_0140_READBACK_RD_CLK_LCK_CNT_OVF_L3 Fld(1, 14, AC_MSKB1)
    #define REG_0140_READBACK_RD_CLK_BIG_CHG_STS_L0 Fld(1, 9, AC_MSKB1)
    #define REG_0140_READBACK_RD_CLK_BIG_CHG_STS_L1 Fld(1, 11, AC_MSKB1)
    #define REG_0140_READBACK_RD_CLK_BIG_CHG_STS_L2 Fld(1, 13, AC_MSKB1)
    #define REG_0140_READBACK_RD_CLK_BIG_CHG_STS_L3 Fld(1, 15, AC_MSKB1)
#define REG_0154_READBACK (HDMIRX_PHY_READBACK + 0x954)
    #define REG_0154_READBACK_ECO_DUMMY_W_0 Fld(16, 0, AC_FULLW10)
#define REG_0158_READBACK (HDMIRX_PHY_READBACK + 0x958)
    #define REG_0158_READBACK_ECO_DUMMY_W_1 Fld(16, 0, AC_FULLW10)
#define REG_015C_READBACK (HDMIRX_PHY_READBACK + 0x95C)
    #define REG_015C_READBACK_ECO_DUMMY_W_2 Fld(16, 0, AC_FULLW10)
#define REG_0160_READBACK (HDMIRX_PHY_READBACK + 0x960)
    #define REG_0160_READBACK_ECO_DUMMY_W_3 Fld(16, 0, AC_FULLW10)
#define REG_0164_READBACK (HDMIRX_PHY_READBACK + 0x964)
    #define REG_0164_READBACK_ECO_DUMMY_W_4 Fld(16, 0, AC_FULLW10)
#define REG_0168_READBACK (HDMIRX_PHY_READBACK + 0x968)
    #define REG_0168_READBACK_ECO_DUMMY_W_5 Fld(16, 0, AC_FULLW10)
#define REG_016C_READBACK (HDMIRX_PHY_READBACK + 0x96C)
    #define REG_016C_READBACK_ECO_DUMMY_W_6 Fld(16, 0, AC_FULLW10)
#define REG_0170_READBACK (HDMIRX_PHY_READBACK + 0x970)
    #define REG_0170_READBACK_ECO_DUMMY_W_7 Fld(16, 0, AC_FULLW10)
#define REG_0174_READBACK (HDMIRX_PHY_READBACK + 0x974)
    #define REG_0174_READBACK_ECO_DUMMY_W_8 Fld(16, 0, AC_FULLW10)
#define REG_0178_READBACK (HDMIRX_PHY_READBACK + 0x978)
    #define REG_0178_READBACK_ECO_DUMMY_W_9 Fld(16, 0, AC_FULLW10)
#define REG_017C_READBACK (HDMIRX_PHY_READBACK + 0x97C)
    #define REG_017C_READBACK_ECO_DUMMY_W_10 Fld(16, 0, AC_FULLW10)
#define REG_0180_READBACK (HDMIRX_PHY_READBACK + 0x980)
    #define REG_0180_READBACK_ECO_DUMMY_W_11 Fld(16, 0, AC_FULLW10)
#define REG_0184_READBACK (HDMIRX_PHY_READBACK + 0x984)
    #define REG_0184_READBACK_ECO_DUMMY_W_12 Fld(16, 0, AC_FULLW10)
#define REG_0188_READBACK (HDMIRX_PHY_READBACK + 0x988)
    #define REG_0188_READBACK_ECO_DUMMY_W_13 Fld(16, 0, AC_FULLW10)
#define REG_018C_READBACK (HDMIRX_PHY_READBACK + 0x98C)
    #define REG_018C_READBACK_ECO_DUMMY_W_14 Fld(16, 0, AC_FULLW10)
#define REG_0190_READBACK (HDMIRX_PHY_READBACK + 0x990)
    #define REG_0190_READBACK_ECO_DUMMY_W_15 Fld(16, 0, AC_FULLW10)
#define REG_0194_READBACK (HDMIRX_PHY_READBACK + 0x994)
    #define REG_0194_READBACK_ECO_DUMMY_R_0 Fld(16, 0, AC_FULLW10)
#define REG_0198_READBACK (HDMIRX_PHY_READBACK + 0x998)
    #define REG_0198_READBACK_ECO_DUMMY_R_1 Fld(16, 0, AC_FULLW10)
#define REG_019C_READBACK (HDMIRX_PHY_READBACK + 0x99C)
    #define REG_019C_READBACK_ECO_DUMMY_R_2 Fld(16, 0, AC_FULLW10)
#define REG_01A0_READBACK (HDMIRX_PHY_READBACK + 0x9A0)
    #define REG_01A0_READBACK_ECO_DUMMY_R_3 Fld(16, 0, AC_FULLW10)
#define REG_01A4_READBACK (HDMIRX_PHY_READBACK + 0x9A4)
    #define REG_01A4_READBACK_ECO_DUMMY_R_4 Fld(16, 0, AC_FULLW10)
#define REG_01A8_READBACK (HDMIRX_PHY_READBACK + 0x9A8)
    #define REG_01A8_READBACK_ECO_DUMMY_R_5 Fld(16, 0, AC_FULLW10)
#define REG_01AC_READBACK (HDMIRX_PHY_READBACK + 0x9AC)
    #define REG_01AC_READBACK_ECO_DUMMY_R_6 Fld(16, 0, AC_FULLW10)
#define REG_01B0_READBACK (HDMIRX_PHY_READBACK + 0x9B0)
    #define REG_01B0_READBACK_ECO_DUMMY_R_7 Fld(16, 0, AC_FULLW10)
#define REG_01B4_READBACK (HDMIRX_PHY_READBACK + 0x9B4)
    #define REG_01B4_READBACK_ECO_DUMMY_R_8 Fld(16, 0, AC_FULLW10)
#define REG_01B8_READBACK (HDMIRX_PHY_READBACK + 0x9B8)
    #define REG_01B8_READBACK_ECO_DUMMY_R_9 Fld(16, 0, AC_FULLW10)
#define REG_01BC_READBACK (HDMIRX_PHY_READBACK + 0x9BC)
    #define REG_01BC_READBACK_ECO_DUMMY_R_10 Fld(16, 0, AC_FULLW10)
#define REG_01C0_READBACK (HDMIRX_PHY_READBACK + 0x9C0)
    #define REG_01C0_READBACK_ECO_DUMMY_R_11 Fld(16, 0, AC_FULLW10)
#define REG_01C4_READBACK (HDMIRX_PHY_READBACK + 0x9C4)
    #define REG_01C4_READBACK_ECO_DUMMY_R_12 Fld(16, 0, AC_FULLW10)
#define REG_01C8_READBACK (HDMIRX_PHY_READBACK + 0x9C8)
    #define REG_01C8_READBACK_ECO_DUMMY_R_13 Fld(16, 0, AC_FULLW10)
#define REG_01CC_READBACK (HDMIRX_PHY_READBACK + 0x9CC)
    #define REG_01CC_READBACK_ECO_DUMMY_R_14 Fld(16, 0, AC_FULLW10)
#define REG_01D0_READBACK (HDMIRX_PHY_READBACK + 0x9D0)
    #define REG_01D0_READBACK_ECO_DUMMY_R_15 Fld(16, 0, AC_FULLW10)

