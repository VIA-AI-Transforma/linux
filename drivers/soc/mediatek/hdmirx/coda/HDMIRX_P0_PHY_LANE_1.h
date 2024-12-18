/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */

#define HDMIRX_P0_PHY_LANE_1_BASE (A_ADR + 0x1000)

//Page P0_HDMIRX_PHY_LANE_1_1
#define REG_0000_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x000)
    #define REG_0000_LANE_1_HD20_GC_DIVSEL_IN_L0_BAND_3 Fld(2, 0, AC_MSKB0)
    #define REG_0000_LANE_1_HD20_GC_DIVSEL_IN_L0_BAND_2 Fld(2, 2, AC_MSKB0)
    #define REG_0000_LANE_1_HD20_GC_DIVSEL_IN_L0_BAND_1 Fld(2, 4, AC_MSKB0)
    #define REG_0000_LANE_1_HD20_GC_DIVSEL_IN_L0_BAND_0 Fld(2, 6, AC_MSKB0)
    #define REG_0000_LANE_1_HD14_GC_DIVSEL_IN_L0_BAND_6 Fld(2, 8, AC_MSKB1)
    #define REG_0000_LANE_1_HD14_GC_DIVSEL_IN_L0_BAND_5 Fld(2, 10, AC_MSKB1)
    #define REG_0000_LANE_1_HD14_GC_DIVSEL_IN_L0_BAND_4 Fld(2, 12, AC_MSKB1)
    #define REG_0000_LANE_1_HD14_GC_DIVSEL_IN_L0_BAND_3 Fld(2, 14, AC_MSKB1)
#define REG_0004_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x004)
    #define REG_0004_LANE_1_HD14_GC_DIVSEL_IN_L0_BAND_2 Fld(2, 0, AC_MSKB0)
    #define REG_0004_LANE_1_HD14_GC_DIVSEL_IN_L0_BAND_1 Fld(2, 2, AC_MSKB0)
    #define REG_0004_LANE_1_HD14_GC_DIVSEL_IN_L0_BAND_0 Fld(2, 4, AC_MSKB0)
    #define REG_0004_LANE_1_HD21_GC_DIVSEL_IN_L0_12G Fld(2, 6, AC_MSKB0)
    #define REG_0004_LANE_1_HD21_GC_DIVSEL_IN_L0_10G Fld(2, 8, AC_MSKB1)
    #define REG_0004_LANE_1_HD21_GC_DIVSEL_IN_L0_8G Fld(2, 10, AC_MSKB1)
    #define REG_0004_LANE_1_HD21_GC_DIVSEL_IN_L0_6G Fld(2, 12, AC_MSKB1)
    #define REG_0004_LANE_1_HD21_GC_DIVSEL_IN_L0_3G Fld(2, 14, AC_MSKB1)
#define REG_0008_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x008)
    #define REG_0008_LANE_1_HD20_GC_DIVSEL_MHL_L0_BAND_3 Fld(2, 0, AC_MSKB0)
    #define REG_0008_LANE_1_HD20_GC_DIVSEL_MHL_L0_BAND_2 Fld(2, 2, AC_MSKB0)
    #define REG_0008_LANE_1_HD20_GC_DIVSEL_MHL_L0_BAND_1 Fld(2, 4, AC_MSKB0)
    #define REG_0008_LANE_1_HD20_GC_DIVSEL_MHL_L0_BAND_0 Fld(2, 6, AC_MSKB0)
    #define REG_0008_LANE_1_HD14_GC_DIVSEL_MHL_L0_BAND_6 Fld(2, 8, AC_MSKB1)
    #define REG_0008_LANE_1_HD14_GC_DIVSEL_MHL_L0_BAND_5 Fld(2, 10, AC_MSKB1)
    #define REG_0008_LANE_1_HD14_GC_DIVSEL_MHL_L0_BAND_4 Fld(2, 12, AC_MSKB1)
    #define REG_0008_LANE_1_HD14_GC_DIVSEL_MHL_L0_BAND_3 Fld(2, 14, AC_MSKB1)
#define REG_000C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x00C)
    #define REG_000C_LANE_1_HD14_GC_DIVSEL_MHL_L0_BAND_2 Fld(2, 0, AC_MSKB0)
    #define REG_000C_LANE_1_HD14_GC_DIVSEL_MHL_L0_BAND_1 Fld(2, 2, AC_MSKB0)
    #define REG_000C_LANE_1_HD14_GC_DIVSEL_MHL_L0_BAND_0 Fld(2, 4, AC_MSKB0)
    #define REG_000C_LANE_1_HD21_GC_DIVSEL_MHL_L0_12G Fld(2, 6, AC_MSKB0)
    #define REG_000C_LANE_1_HD21_GC_DIVSEL_MHL_L0_10G Fld(2, 8, AC_MSKB1)
    #define REG_000C_LANE_1_HD21_GC_DIVSEL_MHL_L0_8G Fld(2, 10, AC_MSKB1)
    #define REG_000C_LANE_1_HD21_GC_DIVSEL_MHL_L0_6G Fld(2, 12, AC_MSKB1)
    #define REG_000C_LANE_1_HD21_GC_DIVSEL_MHL_L0_3G Fld(2, 14, AC_MSKB1)
#define REG_0010_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x010)
    #define REG_0010_LANE_1_HD20_GC_DFE_MODE_L0_BAND_3 Fld(2, 0, AC_MSKB0)
    #define REG_0010_LANE_1_HD20_GC_DFE_MODE_L0_BAND_2 Fld(2, 2, AC_MSKB0)
    #define REG_0010_LANE_1_HD20_GC_DFE_MODE_L0_BAND_1 Fld(2, 4, AC_MSKB0)
    #define REG_0010_LANE_1_HD20_GC_DFE_MODE_L0_BAND_0 Fld(2, 6, AC_MSKB0)
    #define REG_0010_LANE_1_HD14_GC_DFE_MODE_L0_BAND_6 Fld(2, 8, AC_MSKB1)
    #define REG_0010_LANE_1_HD14_GC_DFE_MODE_L0_BAND_5 Fld(2, 10, AC_MSKB1)
    #define REG_0010_LANE_1_HD14_GC_DFE_MODE_L0_BAND_4 Fld(2, 12, AC_MSKB1)
    #define REG_0010_LANE_1_HD14_GC_DFE_MODE_L0_BAND_3 Fld(2, 14, AC_MSKB1)
#define REG_0014_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x014)
    #define REG_0014_LANE_1_HD14_GC_DFE_MODE_L0_BAND_2 Fld(2, 0, AC_MSKB0)
    #define REG_0014_LANE_1_HD14_GC_DFE_MODE_L0_BAND_1 Fld(2, 2, AC_MSKB0)
    #define REG_0014_LANE_1_HD14_GC_DFE_MODE_L0_BAND_0 Fld(2, 4, AC_MSKB0)
    #define REG_0014_LANE_1_HD21_GC_DFE_MODE_L0_12G Fld(2, 6, AC_MSKB0)
    #define REG_0014_LANE_1_HD21_GC_DFE_MODE_L0_10G Fld(2, 8, AC_MSKB1)
    #define REG_0014_LANE_1_HD21_GC_DFE_MODE_L0_8G Fld(2, 10, AC_MSKB1)
    #define REG_0014_LANE_1_HD21_GC_DFE_MODE_L0_6G Fld(2, 12, AC_MSKB1)
    #define REG_0014_LANE_1_HD21_GC_DFE_MODE_L0_3G Fld(2, 14, AC_MSKB1)
#define REG_0018_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x018)
    #define REG_0018_LANE_1_HD20_GC_SEL_PHD_L0_BAND_3 Fld(2, 0, AC_MSKB0)
    #define REG_0018_LANE_1_HD20_GC_SEL_PHD_L0_BAND_2 Fld(2, 2, AC_MSKB0)
    #define REG_0018_LANE_1_HD20_GC_SEL_PHD_L0_BAND_1 Fld(2, 4, AC_MSKB0)
    #define REG_0018_LANE_1_HD20_GC_SEL_PHD_L0_BAND_0 Fld(2, 6, AC_MSKB0)
    #define REG_0018_LANE_1_HD14_GC_SEL_PHD_L0_BAND_6 Fld(2, 8, AC_MSKB1)
    #define REG_0018_LANE_1_HD14_GC_SEL_PHD_L0_BAND_5 Fld(2, 10, AC_MSKB1)
    #define REG_0018_LANE_1_HD14_GC_SEL_PHD_L0_BAND_4 Fld(2, 12, AC_MSKB1)
    #define REG_0018_LANE_1_HD14_GC_SEL_PHD_L0_BAND_3 Fld(2, 14, AC_MSKB1)
#define REG_001C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x01C)
    #define REG_001C_LANE_1_HD14_GC_SEL_PHD_L0_BAND_2 Fld(2, 0, AC_MSKB0)
    #define REG_001C_LANE_1_HD14_GC_SEL_PHD_L0_BAND_1 Fld(2, 2, AC_MSKB0)
    #define REG_001C_LANE_1_HD14_GC_SEL_PHD_L0_BAND_0 Fld(2, 4, AC_MSKB0)
    #define REG_001C_LANE_1_HD21_GC_SEL_PHD_L0_12G Fld(2, 6, AC_MSKB0)
    #define REG_001C_LANE_1_HD21_GC_SEL_PHD_L0_10G Fld(2, 8, AC_MSKB1)
    #define REG_001C_LANE_1_HD21_GC_SEL_PHD_L0_8G Fld(2, 10, AC_MSKB1)
    #define REG_001C_LANE_1_HD21_GC_SEL_PHD_L0_6G Fld(2, 12, AC_MSKB1)
    #define REG_001C_LANE_1_HD21_GC_SEL_PHD_L0_3G Fld(2, 14, AC_MSKB1)
#define REG_0020_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x020)
    #define REG_0020_LANE_1_HD20_GC_DIVSEL_PLL_L0_BAND_3 Fld(3, 0, AC_MSKB0)
    #define REG_0020_LANE_1_HD20_GC_DIVSEL_PLL_L0_BAND_2 Fld(3, 4, AC_MSKB0)
    #define REG_0020_LANE_1_HD20_GC_DIVSEL_PLL_L0_BAND_1 Fld(3, 8, AC_MSKB1)
    #define REG_0020_LANE_1_HD20_GC_DIVSEL_PLL_L0_BAND_0 Fld(3, 12, AC_MSKB1)
#define REG_0024_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x024)
    #define REG_0024_LANE_1_HD14_GC_DIVSEL_PLL_L0_BAND_6 Fld(3, 0, AC_MSKB0)
    #define REG_0024_LANE_1_HD14_GC_DIVSEL_PLL_L0_BAND_5 Fld(3, 4, AC_MSKB0)
    #define REG_0024_LANE_1_HD14_GC_DIVSEL_PLL_L0_BAND_4 Fld(3, 8, AC_MSKB1)
    #define REG_0024_LANE_1_HD14_GC_DIVSEL_PLL_L0_BAND_3 Fld(3, 12, AC_MSKB1)
#define REG_0028_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x028)
    #define REG_0028_LANE_1_HD14_GC_DIVSEL_PLL_L0_BAND_2 Fld(3, 0, AC_MSKB0)
    #define REG_0028_LANE_1_HD14_GC_DIVSEL_PLL_L0_BAND_1 Fld(3, 4, AC_MSKB0)
    #define REG_0028_LANE_1_HD14_GC_DIVSEL_PLL_L0_BAND_0 Fld(3, 8, AC_MSKB1)
    #define REG_0028_LANE_1_HD21_GC_DIVSEL_PLL_L0_12G Fld(3, 12, AC_MSKB1)
#define REG_002C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x02C)
    #define REG_002C_LANE_1_HD21_GC_DIVSEL_PLL_L0_10G Fld(3, 0, AC_MSKB0)
    #define REG_002C_LANE_1_HD21_GC_DIVSEL_PLL_L0_8G Fld(3, 4, AC_MSKB0)
    #define REG_002C_LANE_1_HD21_GC_DIVSEL_PLL_L0_6G Fld(3, 8, AC_MSKB1)
    #define REG_002C_LANE_1_HD21_GC_DIVSEL_PLL_L0_3G Fld(3, 12, AC_MSKB1)
#define REG_0030_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x030)
    #define REG_0030_LANE_1_HD20_GC_DIVSEL_POST_L0_BAND_3 Fld(3, 0, AC_MSKB0)
    #define REG_0030_LANE_1_HD20_GC_DIVSEL_POST_L0_BAND_2 Fld(3, 4, AC_MSKB0)
    #define REG_0030_LANE_1_HD20_GC_DIVSEL_POST_L0_BAND_1 Fld(3, 8, AC_MSKB1)
    #define REG_0030_LANE_1_HD20_GC_DIVSEL_POST_L0_BAND_0 Fld(3, 12, AC_MSKB1)
#define REG_0034_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x034)
    #define REG_0034_LANE_1_HD14_GC_DIVSEL_POST_L0_BAND_6 Fld(3, 0, AC_MSKB0)
    #define REG_0034_LANE_1_HD14_GC_DIVSEL_POST_L0_BAND_5 Fld(3, 4, AC_MSKB0)
    #define REG_0034_LANE_1_HD14_GC_DIVSEL_POST_L0_BAND_4 Fld(3, 8, AC_MSKB1)
    #define REG_0034_LANE_1_HD14_GC_DIVSEL_POST_L0_BAND_3 Fld(3, 12, AC_MSKB1)
#define REG_0038_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x038)
    #define REG_0038_LANE_1_HD14_GC_DIVSEL_POST_L0_BAND_2 Fld(3, 0, AC_MSKB0)
    #define REG_0038_LANE_1_HD14_GC_DIVSEL_POST_L0_BAND_1 Fld(3, 4, AC_MSKB0)
    #define REG_0038_LANE_1_HD14_GC_DIVSEL_POST_L0_BAND_0 Fld(3, 8, AC_MSKB1)
    #define REG_0038_LANE_1_HD21_GC_DIVSEL_POST_L0_12G Fld(3, 12, AC_MSKB1)
#define REG_003C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x03C)
    #define REG_003C_LANE_1_HD21_GC_DIVSEL_POST_L0_10G Fld(3, 0, AC_MSKB0)
    #define REG_003C_LANE_1_HD21_GC_DIVSEL_POST_L0_8G Fld(3, 4, AC_MSKB0)
    #define REG_003C_LANE_1_HD21_GC_DIVSEL_POST_L0_6G Fld(3, 8, AC_MSKB1)
    #define REG_003C_LANE_1_HD21_GC_DIVSEL_POST_L0_3G Fld(3, 12, AC_MSKB1)
#define REG_0040_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x040)
    #define REG_0040_LANE_1_HD20_GC_EQ_BW_BAND_3 Fld(3, 0, AC_MSKB0)
    #define REG_0040_LANE_1_HD20_GC_EQ_BW_BAND_2 Fld(3, 4, AC_MSKB0)
    #define REG_0040_LANE_1_HD20_GC_EQ_BW_BAND_1 Fld(3, 8, AC_MSKB1)
    #define REG_0040_LANE_1_HD20_GC_EQ_BW_BAND_0 Fld(3, 12, AC_MSKB1)
#define REG_0044_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x044)
    #define REG_0044_LANE_1_HD14_GC_EQ_BW_BAND_6 Fld(3, 0, AC_MSKB0)
    #define REG_0044_LANE_1_HD14_GC_EQ_BW_BAND_5 Fld(3, 4, AC_MSKB0)
    #define REG_0044_LANE_1_HD14_GC_EQ_BW_BAND_4 Fld(3, 8, AC_MSKB1)
    #define REG_0044_LANE_1_HD14_GC_EQ_BW_BAND_3 Fld(3, 12, AC_MSKB1)
#define REG_0048_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x048)
    #define REG_0048_LANE_1_HD14_GC_EQ_BW_BAND_2 Fld(3, 0, AC_MSKB0)
    #define REG_0048_LANE_1_HD14_GC_EQ_BW_BAND_1 Fld(3, 4, AC_MSKB0)
    #define REG_0048_LANE_1_HD14_GC_EQ_BW_BAND_0 Fld(3, 8, AC_MSKB1)
    #define REG_0048_LANE_1_HD21_GC_EQ_BW_12G Fld(3, 12, AC_MSKB1)
#define REG_004C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x04C)
    #define REG_004C_LANE_1_HD21_GC_EQ_BW_10G Fld(3, 0, AC_MSKB0)
    #define REG_004C_LANE_1_HD21_GC_EQ_BW_8G Fld(3, 4, AC_MSKB0)
    #define REG_004C_LANE_1_HD21_GC_EQ_BW_6G Fld(3, 8, AC_MSKB1)
    #define REG_004C_LANE_1_HD21_GC_EQ_BW_3G Fld(3, 12, AC_MSKB1)
#define REG_0050_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x050)
    #define REG_0050_LANE_1_HD20_GC_RCTRL_PLL_L0_BAND_3 Fld(3, 0, AC_MSKB0)
    #define REG_0050_LANE_1_HD20_GC_RCTRL_PLL_L0_BAND_2 Fld(3, 4, AC_MSKB0)
    #define REG_0050_LANE_1_HD20_GC_RCTRL_PLL_L0_BAND_1 Fld(3, 8, AC_MSKB1)
    #define REG_0050_LANE_1_HD20_GC_RCTRL_PLL_L0_BAND_0 Fld(3, 12, AC_MSKB1)
#define REG_0054_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x054)
    #define REG_0054_LANE_1_HD14_GC_RCTRL_PLL_L0_BAND_6 Fld(3, 0, AC_MSKB0)
    #define REG_0054_LANE_1_HD14_GC_RCTRL_PLL_L0_BAND_5 Fld(3, 4, AC_MSKB0)
    #define REG_0054_LANE_1_HD14_GC_RCTRL_PLL_L0_BAND_4 Fld(3, 8, AC_MSKB1)
    #define REG_0054_LANE_1_HD14_GC_RCTRL_PLL_L0_BAND_3 Fld(3, 12, AC_MSKB1)
#define REG_0058_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x058)
    #define REG_0058_LANE_1_HD14_GC_RCTRL_PLL_L0_BAND_2 Fld(3, 0, AC_MSKB0)
    #define REG_0058_LANE_1_HD14_GC_RCTRL_PLL_L0_BAND_1 Fld(3, 4, AC_MSKB0)
    #define REG_0058_LANE_1_HD14_GC_RCTRL_PLL_L0_BAND_0 Fld(3, 8, AC_MSKB1)
    #define REG_0058_LANE_1_HD21_GC_RCTRL_PLL_L0_12G Fld(3, 12, AC_MSKB1)
#define REG_005C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x05C)
    #define REG_005C_LANE_1_HD21_GC_RCTRL_PLL_L0_10G Fld(3, 0, AC_MSKB0)
    #define REG_005C_LANE_1_HD21_GC_RCTRL_PLL_L0_8G Fld(3, 4, AC_MSKB0)
    #define REG_005C_LANE_1_HD21_GC_RCTRL_PLL_L0_6G Fld(3, 8, AC_MSKB1)
    #define REG_005C_LANE_1_HD21_GC_RCTRL_PLL_L0_3G Fld(3, 12, AC_MSKB1)
#define REG_0060_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x060)
    #define REG_0060_LANE_1_HD20_GC_DFE_BW_L0_BAND_3 Fld(3, 0, AC_MSKB0)
    #define REG_0060_LANE_1_HD20_GC_DFE_BW_L0_BAND_2 Fld(3, 4, AC_MSKB0)
    #define REG_0060_LANE_1_HD20_GC_DFE_BW_L0_BAND_1 Fld(3, 8, AC_MSKB1)
    #define REG_0060_LANE_1_HD20_GC_DFE_BW_L0_BAND_0 Fld(3, 12, AC_MSKB1)
#define REG_0064_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x064)
    #define REG_0064_LANE_1_HD14_GC_DFE_BW_L0_BAND_6 Fld(3, 0, AC_MSKB0)
    #define REG_0064_LANE_1_HD14_GC_DFE_BW_L0_BAND_5 Fld(3, 4, AC_MSKB0)
    #define REG_0064_LANE_1_HD14_GC_DFE_BW_L0_BAND_4 Fld(3, 8, AC_MSKB1)
    #define REG_0064_LANE_1_HD14_GC_DFE_BW_L0_BAND_3 Fld(3, 12, AC_MSKB1)
#define REG_0068_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x068)
    #define REG_0068_LANE_1_HD14_GC_DFE_BW_L0_BAND_2 Fld(3, 0, AC_MSKB0)
    #define REG_0068_LANE_1_HD14_GC_DFE_BW_L0_BAND_1 Fld(3, 4, AC_MSKB0)
    #define REG_0068_LANE_1_HD14_GC_DFE_BW_L0_BAND_0 Fld(3, 8, AC_MSKB1)
    #define REG_0068_LANE_1_HD21_GC_DFE_BW_L0_12G Fld(3, 12, AC_MSKB1)
#define REG_006C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x06C)
    #define REG_006C_LANE_1_HD21_GC_DFE_BW_L0_10G Fld(3, 0, AC_MSKB0)
    #define REG_006C_LANE_1_HD21_GC_DFE_BW_L0_8G Fld(3, 4, AC_MSKB0)
    #define REG_006C_LANE_1_HD21_GC_DFE_BW_L0_6G Fld(3, 8, AC_MSKB1)
    #define REG_006C_LANE_1_HD21_GC_DFE_BW_L0_3G Fld(3, 12, AC_MSKB1)
#define REG_0070_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x070)
    #define REG_0070_LANE_1_HD20_GC_VCODIV_SEL_BAND_3 Fld(2, 0, AC_MSKB0)
    #define REG_0070_LANE_1_HD20_GC_VCODIV_SEL_BAND_2 Fld(2, 2, AC_MSKB0)
    #define REG_0070_LANE_1_HD20_GC_VCODIV_SEL_BAND_1 Fld(2, 4, AC_MSKB0)
    #define REG_0070_LANE_1_HD20_GC_VCODIV_SEL_BAND_0 Fld(2, 6, AC_MSKB0)
    #define REG_0070_LANE_1_HD14_GC_VCODIV_SEL_BAND_6 Fld(2, 8, AC_MSKB1)
    #define REG_0070_LANE_1_HD14_GC_VCODIV_SEL_BAND_5 Fld(2, 10, AC_MSKB1)
    #define REG_0070_LANE_1_HD14_GC_VCODIV_SEL_BAND_4 Fld(2, 12, AC_MSKB1)
    #define REG_0070_LANE_1_HD14_GC_VCODIV_SEL_BAND_3 Fld(2, 14, AC_MSKB1)
#define REG_0074_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x074)
    #define REG_0074_LANE_1_HD14_GC_VCODIV_SEL_BAND_2 Fld(2, 0, AC_MSKB0)
    #define REG_0074_LANE_1_HD14_GC_VCODIV_SEL_BAND_1 Fld(2, 2, AC_MSKB0)
    #define REG_0074_LANE_1_HD14_GC_VCODIV_SEL_BAND_0 Fld(2, 4, AC_MSKB0)
    #define REG_0074_LANE_1_HD21_GC_VCODIV_SEL_12G Fld(2, 6, AC_MSKB0)
    #define REG_0074_LANE_1_HD21_GC_VCODIV_SEL_10G Fld(2, 8, AC_MSKB1)
    #define REG_0074_LANE_1_HD21_GC_VCODIV_SEL_8G Fld(2, 10, AC_MSKB1)
    #define REG_0074_LANE_1_HD21_GC_VCODIV_SEL_6G Fld(2, 12, AC_MSKB1)
    #define REG_0074_LANE_1_HD21_GC_VCODIV_SEL_3G Fld(2, 14, AC_MSKB1)
#define REG_0078_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x078)
    #define REG_0078_LANE_1_CDR_MODE_HD21 Fld(3, 0, AC_MSKB0)
    #define REG_0078_LANE_1_CDR_MODE_HD20 Fld(3, 4, AC_MSKB0)
    #define REG_0078_LANE_1_CDR_MODE_HD14 Fld(3, 8, AC_MSKB1)
    #define REG_0078_LANE_1_DIS_CDR_ST_SQH Fld(1, 12, AC_MSKB1)
#define REG_007C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x07C)
    #define REG_007C_LANE_1_DIG_LOCK_TIME Fld(7, 0, AC_MSKB0)
    #define REG_007C_LANE_1_H14_600M_EN Fld(1, 11, AC_MSKB1)
    #define REG_007C_LANE_1_FB_CLK_DET_EN_L0 Fld(1, 12, AC_MSKB1)
    #define REG_007C_LANE_1_FB_CLK_DET_EN_L1 Fld(1, 13, AC_MSKB1)
    #define REG_007C_LANE_1_FB_CLK_DET_EN_L2 Fld(1, 14, AC_MSKB1)
    #define REG_007C_LANE_1_FB_CLK_DET_EN_L3 Fld(1, 15, AC_MSKB1)
#define REG_0080_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x080)
    #define REG_0080_LANE_1_HD20_GC_ICTRL_PFD_L0_BAND_3 Fld(6, 0, AC_MSKB0)
    #define REG_0080_LANE_1_HD20_EN_LA_DIV_BAND_3 Fld(1, 6, AC_MSKB0)
    #define REG_0080_LANE_1_HD20_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_3 Fld(1, 7, AC_MSKB0)
    #define REG_0080_LANE_1_HD20_GC_ICTRL_PFD_L0_BAND_2 Fld(6, 8, AC_MSKB1)
    #define REG_0080_LANE_1_HD20_EN_LA_DIV_BAND_2 Fld(1, 14, AC_MSKB1)
    #define REG_0080_LANE_1_HD20_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_2 Fld(1, 15, AC_MSKB1)
#define REG_0084_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x084)
    #define REG_0084_LANE_1_HD20_GC_ICTRL_PFD_L0_BAND_1 Fld(6, 0, AC_MSKB0)
    #define REG_0084_LANE_1_HD20_EN_LA_DIV_BAND_1 Fld(1, 6, AC_MSKB0)
    #define REG_0084_LANE_1_HD20_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_1 Fld(1, 7, AC_MSKB0)
    #define REG_0084_LANE_1_HD20_GC_ICTRL_PFD_L0_BAND_0 Fld(6, 8, AC_MSKB1)
    #define REG_0084_LANE_1_HD20_EN_LA_DIV_BAND_0 Fld(1, 14, AC_MSKB1)
    #define REG_0084_LANE_1_HD20_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_0 Fld(1, 15, AC_MSKB1)
#define REG_0088_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x088)
    #define REG_0088_LANE_1_HD14_GC_ICTRL_PFD_L0_BAND_6 Fld(6, 0, AC_MSKB0)
    #define REG_0088_LANE_1_HD14_EN_LA_DIV_BAND_6 Fld(1, 6, AC_MSKB0)
    #define REG_0088_LANE_1_HD14_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_6 Fld(1, 7, AC_MSKB0)
    #define REG_0088_LANE_1_HD14_GC_ICTRL_PFD_L0_BAND_5 Fld(6, 8, AC_MSKB1)
    #define REG_0088_LANE_1_HD14_EN_LA_DIV_BAND_5 Fld(1, 14, AC_MSKB1)
    #define REG_0088_LANE_1_HD14_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_5 Fld(1, 15, AC_MSKB1)
#define REG_008C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x08C)
    #define REG_008C_LANE_1_HD14_GC_ICTRL_PFD_L0_BAND_4 Fld(6, 0, AC_MSKB0)
    #define REG_008C_LANE_1_HD14_EN_LA_DIV_BAND_4 Fld(1, 6, AC_MSKB0)
    #define REG_008C_LANE_1_HD14_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_4 Fld(1, 7, AC_MSKB0)
    #define REG_008C_LANE_1_HD14_GC_ICTRL_PFD_L0_BAND_3 Fld(6, 8, AC_MSKB1)
    #define REG_008C_LANE_1_HD14_EN_LA_DIV_BAND_3 Fld(1, 14, AC_MSKB1)
    #define REG_008C_LANE_1_HD14_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_3 Fld(1, 15, AC_MSKB1)
#define REG_0090_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x090)
    #define REG_0090_LANE_1_HD14_GC_ICTRL_PFD_L0_BAND_2 Fld(6, 0, AC_MSKB0)
    #define REG_0090_LANE_1_HD14_EN_LA_DIV_BAND_2 Fld(1, 6, AC_MSKB0)
    #define REG_0090_LANE_1_HD14_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_2 Fld(1, 7, AC_MSKB0)
    #define REG_0090_LANE_1_HD14_GC_ICTRL_PFD_L0_BAND_1 Fld(6, 8, AC_MSKB1)
    #define REG_0090_LANE_1_HD14_EN_LA_DIV_BAND_1 Fld(1, 14, AC_MSKB1)
    #define REG_0090_LANE_1_HD14_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_1 Fld(1, 15, AC_MSKB1)
#define REG_0094_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x094)
    #define REG_0094_LANE_1_HD14_GC_ICTRL_PFD_L0_BAND_0 Fld(6, 0, AC_MSKB0)
    #define REG_0094_LANE_1_HD14_EN_LA_DIV_BAND_0 Fld(1, 6, AC_MSKB0)
    #define REG_0094_LANE_1_HD14_EN_CLKO_LINK_DATARATE_DIV36_2X_BAND_0 Fld(1, 7, AC_MSKB0)
    #define REG_0094_LANE_1_HD21_GC_ICTRL_PFD_L0_12G Fld(6, 8, AC_MSKB1)
    #define REG_0094_LANE_1_HD21_EN_LA_DIV_12G Fld(1, 14, AC_MSKB1)
    #define REG_0094_LANE_1_HD21_EN_CLKO_LINK_DATARATE_DIV36_2X_12G Fld(1, 15, AC_MSKB1)
#define REG_0098_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x098)
    #define REG_0098_LANE_1_HD21_GC_ICTRL_PFD_L0_10G Fld(6, 0, AC_MSKB0)
    #define REG_0098_LANE_1_HD21_EN_LA_DIV_10G Fld(1, 6, AC_MSKB0)
    #define REG_0098_LANE_1_HD21_EN_CLKO_LINK_DATARATE_DIV36_2X_10G Fld(1, 7, AC_MSKB0)
    #define REG_0098_LANE_1_HD21_GC_ICTRL_PFD_L0_8G Fld(6, 8, AC_MSKB1)
    #define REG_0098_LANE_1_HD21_EN_LA_DIV_8G Fld(1, 14, AC_MSKB1)
    #define REG_0098_LANE_1_HD21_EN_CLKO_LINK_DATARATE_DIV36_2X_8G Fld(1, 15, AC_MSKB1)
#define REG_009C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x09C)
    #define REG_009C_LANE_1_HD21_GC_ICTRL_PFD_L0_6G Fld(6, 0, AC_MSKB0)
    #define REG_009C_LANE_1_HD21_EN_LA_DIV_6G Fld(1, 6, AC_MSKB0)
    #define REG_009C_LANE_1_HD21_EN_CLKO_LINK_DATARATE_DIV36_2X_6G Fld(1, 7, AC_MSKB0)
    #define REG_009C_LANE_1_HD21_GC_ICTRL_PFD_L0_3G Fld(6, 8, AC_MSKB1)
    #define REG_009C_LANE_1_HD21_EN_LA_DIV_3G Fld(1, 14, AC_MSKB1)
    #define REG_009C_LANE_1_HD21_EN_CLKO_LINK_DATARATE_DIV36_2X_3G Fld(1, 15, AC_MSKB1)
#define REG_00A0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0A0)
    #define REG_00A0_LANE_1_HD20_GC_ICTRL_PD_L0_BAND_3 Fld(6, 0, AC_MSKB0)
    #define REG_00A0_LANE_1_HD20_GC_ICTRL_PD_L0_BAND_2 Fld(6, 8, AC_MSKB1)
#define REG_00A4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0A4)
    #define REG_00A4_LANE_1_HD20_GC_ICTRL_PD_L0_BAND_1 Fld(6, 0, AC_MSKB0)
    #define REG_00A4_LANE_1_HD20_GC_ICTRL_PD_L0_BAND_0 Fld(6, 8, AC_MSKB1)
#define REG_00A8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0A8)
    #define REG_00A8_LANE_1_HD14_GC_ICTRL_PD_L0_BAND_6 Fld(6, 0, AC_MSKB0)
    #define REG_00A8_LANE_1_HD14_GC_ICTRL_PD_L0_BAND_5 Fld(6, 8, AC_MSKB1)
#define REG_00AC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0AC)
    #define REG_00AC_LANE_1_HD14_GC_ICTRL_PD_L0_BAND_4 Fld(6, 0, AC_MSKB0)
    #define REG_00AC_LANE_1_HD14_GC_ICTRL_PD_L0_BAND_3 Fld(6, 8, AC_MSKB1)
#define REG_00B0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0B0)
    #define REG_00B0_LANE_1_HD14_GC_ICTRL_PD_L0_BAND_2 Fld(6, 0, AC_MSKB0)
    #define REG_00B0_LANE_1_HD14_GC_ICTRL_PD_L0_BAND_1 Fld(6, 8, AC_MSKB1)
#define REG_00B4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0B4)
    #define REG_00B4_LANE_1_HD14_GC_ICTRL_PD_L0_BAND_0 Fld(6, 0, AC_MSKB0)
    #define REG_00B4_LANE_1_HD21_GC_ICTRL_PD_L0_12G Fld(6, 8, AC_MSKB1)
#define REG_00B8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0B8)
    #define REG_00B8_LANE_1_HD21_GC_ICTRL_PD_L0_10G Fld(6, 0, AC_MSKB0)
    #define REG_00B8_LANE_1_HD21_GC_ICTRL_PD_L0_8G Fld(6, 8, AC_MSKB1)
#define REG_00BC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0BC)
    #define REG_00BC_LANE_1_HD21_GC_ICTRL_PD_L0_6G Fld(6, 0, AC_MSKB0)
    #define REG_00BC_LANE_1_HD21_GC_ICTRL_PD_L0_3G Fld(6, 8, AC_MSKB1)
#define REG_00C0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0C0)
    #define REG_00C0_LANE_1_HD21_RS_MODE_0_L0 Fld(14, 0, AC_MSKW10)
#define REG_00C4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0C4)
    #define REG_00C4_LANE_1_HD21_RS_MODE_1_L0 Fld(14, 0, AC_MSKW10)
#define REG_00C8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0C8)
    #define REG_00C8_LANE_1_HD21_RS_MODE_2_L0 Fld(14, 0, AC_MSKW10)
#define REG_00CC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0CC)
    #define REG_00CC_LANE_1_HD21_RS_MODE_3_L0 Fld(14, 0, AC_MSKW10)
#define REG_00D0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0D0)
    #define REG_00D0_LANE_1_HD21_RS_MODE_0_L1 Fld(14, 0, AC_MSKW10)
#define REG_00D4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0D4)
    #define REG_00D4_LANE_1_HD21_RS_MODE_1_L1 Fld(14, 0, AC_MSKW10)
#define REG_00D8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0D8)
    #define REG_00D8_LANE_1_HD21_RS_MODE_2_L1 Fld(14, 0, AC_MSKW10)
#define REG_00DC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0DC)
    #define REG_00DC_LANE_1_HD21_RS_MODE_3_L1 Fld(14, 0, AC_MSKW10)
#define REG_00E0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0E0)
    #define REG_00E0_LANE_1_HD21_RS_MODE_0_L2 Fld(14, 0, AC_MSKW10)
#define REG_00E4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0E4)
    #define REG_00E4_LANE_1_HD21_RS_MODE_1_L2 Fld(14, 0, AC_MSKW10)
#define REG_00E8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0E8)
    #define REG_00E8_LANE_1_HD21_RS_MODE_2_L2 Fld(14, 0, AC_MSKW10)
#define REG_00EC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0EC)
    #define REG_00EC_LANE_1_HD21_RS_MODE_3_L2 Fld(14, 0, AC_MSKW10)
#define REG_00F0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0F0)
    #define REG_00F0_LANE_1_HD21_RS_MODE_0_L3 Fld(14, 0, AC_MSKW10)
#define REG_00F4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0F4)
    #define REG_00F4_LANE_1_HD21_RS_MODE_1_L3 Fld(14, 0, AC_MSKW10)
#define REG_00F8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0F8)
    #define REG_00F8_LANE_1_HD21_RS_MODE_2_L3 Fld(14, 0, AC_MSKW10)

//Page P0_HDMIRX_PHY_LANE_1_2
#define REG_00FC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x0FC)
    #define REG_00FC_LANE_1_HD21_RS_MODE_3_L3 Fld(14, 0, AC_MSKW10)
#define REG_0100_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x100)
    #define REG_0100_LANE_1_HD20_GC_ICTRL_PD_WIDE_L0_BAND_3 Fld(6, 0, AC_MSKB0)
    #define REG_0100_LANE_1_HD20_GC_ICTRL_PD_WIDE_L0_BAND_2 Fld(6, 8, AC_MSKB1)
#define REG_0104_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x104)
    #define REG_0104_LANE_1_HD20_GC_ICTRL_PD_WIDE_L0_BAND_1 Fld(6, 0, AC_MSKB0)
    #define REG_0104_LANE_1_HD20_GC_ICTRL_PD_WIDE_L0_BAND_0 Fld(6, 8, AC_MSKB1)
#define REG_0108_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x108)
    #define REG_0108_LANE_1_HD14_GC_ICTRL_PD_WIDE_L0_BAND_6 Fld(6, 0, AC_MSKB0)
    #define REG_0108_LANE_1_HD14_GC_ICTRL_PD_WIDE_L0_BAND_5 Fld(6, 8, AC_MSKB1)
#define REG_010C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x10C)
    #define REG_010C_LANE_1_HD14_GC_ICTRL_PD_WIDE_L0_BAND_4 Fld(6, 0, AC_MSKB0)
    #define REG_010C_LANE_1_HD14_GC_ICTRL_PD_WIDE_L0_BAND_3 Fld(6, 8, AC_MSKB1)
#define REG_0110_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x110)
    #define REG_0110_LANE_1_HD14_GC_ICTRL_PD_WIDE_L0_BAND_2 Fld(6, 0, AC_MSKB0)
    #define REG_0110_LANE_1_HD14_GC_ICTRL_PD_WIDE_L0_BAND_1 Fld(6, 8, AC_MSKB1)
#define REG_0114_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x114)
    #define REG_0114_LANE_1_HD14_GC_ICTRL_PD_WIDE_L0_BAND_0 Fld(6, 0, AC_MSKB0)
    #define REG_0114_LANE_1_HD21_GC_ICTRL_PD_WIDE_L0_12G Fld(6, 8, AC_MSKB1)
#define REG_0118_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x118)
    #define REG_0118_LANE_1_HD21_GC_ICTRL_PD_WIDE_L0_10G Fld(6, 0, AC_MSKB0)
    #define REG_0118_LANE_1_HD21_GC_ICTRL_PD_WIDE_L0_8G Fld(6, 8, AC_MSKB1)
#define REG_011C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x11C)
    #define REG_011C_LANE_1_HD21_GC_ICTRL_PD_WIDE_L0_6G Fld(6, 0, AC_MSKB0)
    #define REG_011C_LANE_1_HD21_GC_ICTRL_PD_WIDE_L0_3G Fld(6, 8, AC_MSKB1)
#define REG_0120_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x120)
    #define REG_0120_LANE_1_PRBS_ERRCNT_RPT_L0 Fld(16, 0, AC_FULLW10)
#define REG_0124_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x124)
    #define REG_0124_LANE_1_PRBS_ERRCNT_RPT_L1 Fld(16, 0, AC_FULLW10)
#define REG_0128_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x128)
    #define REG_0128_LANE_1_PRBS_ERRCNT_RPT_L2 Fld(16, 0, AC_FULLW10)
#define REG_012C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x12C)
    #define REG_012C_LANE_1_PRBS_ERRCNT_RPT_L3 Fld(16, 0, AC_FULLW10)
#define REG_0130_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x130)
    #define REG_0130_LANE_1_CR_LOCK_L0_OV_EN Fld(1, 0, AC_MSKB0)
    #define REG_0130_LANE_1_CR_LOCK_L0_OV Fld(1, 1, AC_MSKB0)
    #define REG_0130_LANE_1_CR_LOCK_L1_OV_EN Fld(1, 2, AC_MSKB0)
    #define REG_0130_LANE_1_CR_LOCK_L1_OV Fld(1, 3, AC_MSKB0)
    #define REG_0130_LANE_1_CR_LOCK_L2_OV_EN Fld(1, 4, AC_MSKB0)
    #define REG_0130_LANE_1_CR_LOCK_L2_OV Fld(1, 5, AC_MSKB0)
    #define REG_0130_LANE_1_CR_LOCK_L3_OV_EN Fld(1, 6, AC_MSKB0)
    #define REG_0130_LANE_1_CR_LOCK_L3_OV Fld(1, 7, AC_MSKB0)
    #define REG_0130_LANE_1_DIG_LOCK_L0_OV_EN Fld(1, 8, AC_MSKB1)
    #define REG_0130_LANE_1_DIG_LOCK_L0_OV Fld(1, 9, AC_MSKB1)
    #define REG_0130_LANE_1_DIG_LOCK_L1_OV_EN Fld(1, 10, AC_MSKB1)
    #define REG_0130_LANE_1_DIG_LOCK_L1_OV Fld(1, 11, AC_MSKB1)
    #define REG_0130_LANE_1_DIG_LOCK_L2_OV_EN Fld(1, 12, AC_MSKB1)
    #define REG_0130_LANE_1_DIG_LOCK_L2_OV Fld(1, 13, AC_MSKB1)
    #define REG_0130_LANE_1_DIG_LOCK_L3_OV_EN Fld(1, 14, AC_MSKB1)
    #define REG_0130_LANE_1_DIG_LOCK_L3_OV Fld(1, 15, AC_MSKB1)
#define REG_0134_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x134)
    #define REG_0134_LANE_1_NO_INPUT_DET_L0_OV_EN Fld(1, 0, AC_MSKB0)
    #define REG_0134_LANE_1_NO_INPUT_DET_L0_OV Fld(1, 1, AC_MSKB0)
    #define REG_0134_LANE_1_NO_INPUT_DET_L1_OV_EN Fld(1, 2, AC_MSKB0)
    #define REG_0134_LANE_1_NO_INPUT_DET_L1_OV Fld(1, 3, AC_MSKB0)
    #define REG_0134_LANE_1_NO_INPUT_DET_L2_OV_EN Fld(1, 4, AC_MSKB0)
    #define REG_0134_LANE_1_NO_INPUT_DET_L2_OV Fld(1, 5, AC_MSKB0)
    #define REG_0134_LANE_1_NO_INPUT_DET_L3_OV_EN Fld(1, 6, AC_MSKB0)
    #define REG_0134_LANE_1_NO_INPUT_DET_L3_OV Fld(1, 7, AC_MSKB0)
#define REG_0140_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x140)
    #define REG_0140_LANE_1_HDMI_CLK_THR6 Fld(16, 0, AC_FULLW10)
#define REG_0144_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x144)
    #define REG_0144_LANE_1_HDMI_CLK_THR5 Fld(16, 0, AC_FULLW10)
#define REG_0148_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x148)
    #define REG_0148_LANE_1_HDMI_CLK_THR4 Fld(16, 0, AC_FULLW10)
#define REG_014C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x14C)
    #define REG_014C_LANE_1_HDMI_CLK_THR3 Fld(16, 0, AC_FULLW10)
#define REG_0150_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x150)
    #define REG_0150_LANE_1_HDMI_CLK_THR2 Fld(16, 0, AC_FULLW10)
#define REG_0154_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x154)
    #define REG_0154_LANE_1_HDMI_CLK_THR1 Fld(16, 0, AC_FULLW10)
#define REG_0158_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x158)
    #define REG_0158_LANE_1_HDMI2_CLK_THR4 Fld(16, 0, AC_FULLW10)
#define REG_015C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x15C)
    #define REG_015C_LANE_1_HDMI2_CLK_THR3 Fld(16, 0, AC_FULLW10)
#define REG_0160_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x160)
    #define REG_0160_LANE_1_HDMI2_CLK_THR2 Fld(16, 0, AC_FULLW10)
#define REG_0164_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x164)
    #define REG_0164_LANE_1_HDMI2_CLK_THR1 Fld(16, 0, AC_FULLW10)
#define REG_0168_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x168)
    #define REG_0168_LANE_1_CR_LOCK_TH Fld(5, 0, AC_MSKB0)
    #define REG_0168_LANE_1_AUTO_VCORST_EN Fld(1, 5, AC_MSKB0)
    #define REG_0168_LANE_1_CLK_VCO_LCKDET_EN Fld(1, 6, AC_MSKB0)
    #define REG_0168_LANE_1_DIG_LCK_CNT_POWER Fld(4, 12, AC_MSKB1)
#define REG_016C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x16C)
    #define REG_016C_LANE_1_DIG_LCK_RANGE Fld(4, 0, AC_MSKB0)
    #define REG_016C_LANE_1_DIG_LOSE_RANGE Fld(6, 4, AC_MSKW10)
    #define REG_016C_LANE_1_DIG_LOCK_MODE Fld(1, 12, AC_MSKB1)
#define REG_0170_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x170)
    #define REG_0170_LANE_1_CR_UNLOCK_TH Fld(5, 0, AC_MSKB0)
    #define REG_0170_LANE_1_DIG_UNLOCK_TIME Fld(7, 8, AC_MSKB1)
#define REG_0174_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x174)
    #define REG_0174_LANE_1_LESS_100K_TH Fld(16, 0, AC_FULLW10)
#define REG_0178_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x178)
    #define REG_0178_LANE_1_DIG_LCK_RANGE_POWER Fld(4, 0, AC_MSKB0)
    #define REG_0178_LANE_1_DIG_LOSE_RANGE_POWER Fld(4, 4, AC_MSKB0)
    #define REG_0178_LANE_1_LCK_RANGE_SEL Fld(1, 8, AC_MSKB1)
    #define REG_0178_LANE_1_LOSE_RANGE_SEL Fld(1, 9, AC_MSKB1)
    #define REG_0178_LANE_1_DIG_LOCK_FLAG_L0 Fld(1, 12, AC_MSKB1)
    #define REG_0178_LANE_1_DIG_LOCK_FLAG_L1 Fld(1, 13, AC_MSKB1)
    #define REG_0178_LANE_1_DIG_LOCK_FLAG_L2 Fld(1, 14, AC_MSKB1)
    #define REG_0178_LANE_1_DIG_LOCK_FLAG_L3 Fld(1, 15, AC_MSKB1)
#define REG_017C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x17C)
    #define REG_017C_LANE_1_CLK_DET_EN_L0 Fld(1, 0, AC_MSKB0)
    #define REG_017C_LANE_1_CLK_LCK_CNT_OVF_L0 Fld(1, 1, AC_MSKB0)
    #define REG_017C_LANE_1_CLK_BIG_CHG_STS_L0 Fld(1, 2, AC_MSKB0)
    #define REG_017C_LANE_1_CLK_STABLE_OUT_L0 Fld(1, 3, AC_MSKB0)
    #define REG_017C_LANE_1_CLK_DET_EN_L1 Fld(1, 4, AC_MSKB0)
    #define REG_017C_LANE_1_CLK_LCK_CNT_OVF_L1 Fld(1, 5, AC_MSKB0)
    #define REG_017C_LANE_1_CLK_BIG_CHG_STS_L1 Fld(1, 6, AC_MSKB0)
    #define REG_017C_LANE_1_CLK_STABLE_OUT_L1 Fld(1, 7, AC_MSKB0)
    #define REG_017C_LANE_1_CLK_DET_EN_L2 Fld(1, 8, AC_MSKB1)
    #define REG_017C_LANE_1_CLK_LCK_CNT_OVF_L2 Fld(1, 9, AC_MSKB1)
    #define REG_017C_LANE_1_CLK_BIG_CHG_STS_L2 Fld(1, 10, AC_MSKB1)
    #define REG_017C_LANE_1_CLK_STABLE_OUT_L2 Fld(1, 11, AC_MSKB1)
    #define REG_017C_LANE_1_CLK_DET_EN_L3 Fld(1, 12, AC_MSKB1)
    #define REG_017C_LANE_1_CLK_LCK_CNT_OVF_L3 Fld(1, 13, AC_MSKB1)
    #define REG_017C_LANE_1_CLK_BIG_CHG_STS_L3 Fld(1, 14, AC_MSKB1)
    #define REG_017C_LANE_1_CLK_STABLE_OUT_L3 Fld(1, 15, AC_MSKB1)
#define REG_0180_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x180)
    #define REG_0180_LANE_1_CLK_VALID_L Fld(12, 0, AC_MSKW10)
#define REG_0184_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x184)
    #define REG_0184_LANE_1_CLK_VALID_U Fld(13, 0, AC_MSKW10)
#define REG_0188_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x188)
    #define REG_0188_LANE_1_SAFF_PULSE_WIDTH Fld(4, 0, AC_MSKB0)
    #define REG_0188_LANE_1_SAFF_PULSE_PERIOD Fld(4, 4, AC_MSKB0)
    #define REG_0188_LANE_1_BYPASS_CAL_DFE Fld(1, 8, AC_MSKB1)
    #define REG_0188_LANE_1_ENABLE_SAFF_CAL_TIME_OUT_MODE Fld(1, 9, AC_MSKB1)
    #define REG_0188_LANE_1_ST_SAFF_START Fld(1, 10, AC_MSKB1)
    #define REG_0188_LANE_1_EN_SAFF_DONE_CLR_CR_CNT Fld(1, 11, AC_MSKB1)
    #define REG_0188_LANE_1_SAFF_PULSE_MODE_SEL Fld(1, 12, AC_MSKB1)
    #define REG_0188_LANE_1_LK_REC_EN Fld(1, 13, AC_MSKB1)
    #define REG_0188_LANE_1_LK_REC_CLR Fld(1, 14, AC_MSKB1)
#define REG_018C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x18C)
    #define REG_018C_LANE_1_CR_LK_REC_L0 Fld(4, 0, AC_MSKB0)
    #define REG_018C_LANE_1_CR_LK_REC_L1 Fld(4, 4, AC_MSKB0)
    #define REG_018C_LANE_1_CR_LK_REC_L2 Fld(4, 8, AC_MSKB1)
    #define REG_018C_LANE_1_CR_LK_REC_L3 Fld(4, 12, AC_MSKB1)
#define REG_0190_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x190)
    #define REG_0190_LANE_1_HDMI2P1_12G_MID Fld(16, 0, AC_FULLW10)
#define REG_0194_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x194)
    #define REG_0194_LANE_1_HDMI2P1_10G_MID Fld(16, 0, AC_FULLW10)
#define REG_0198_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x198)
    #define REG_0198_LANE_1_HDMI2P1_8G_MID Fld(16, 0, AC_FULLW10)
#define REG_019C_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x19C)
    #define REG_019C_LANE_1_HDMI2P1_6G_MID Fld(16, 0, AC_FULLW10)
#define REG_01A0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1A0)
    #define REG_01A0_LANE_1_HDMI2P1_3G_MID Fld(16, 0, AC_FULLW10)
#define REG_01A4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1A4)
    #define REG_01A4_LANE_1_MAINLINK_CRLOCK_THR_12G Fld(8, 0, AC_FULLB0)
    #define REG_01A4_LANE_1_MAINLINK_CRLOSE_THR_12G Fld(8, 8, AC_FULLB1)
#define REG_01A8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1A8)
    #define REG_01A8_LANE_1_MAINLINK_CRLOCK_THR_10G Fld(8, 0, AC_FULLB0)
    #define REG_01A8_LANE_1_MAINLINK_CRLOSE_THR_10G Fld(8, 8, AC_FULLB1)
#define REG_01AC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1AC)
    #define REG_01AC_LANE_1_MAINLINK_CRLOCK_THR_8G Fld(8, 0, AC_FULLB0)
    #define REG_01AC_LANE_1_MAINLINK_CRLOSE_THR_8G Fld(8, 8, AC_FULLB1)
#define REG_01B0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1B0)
    #define REG_01B0_LANE_1_MAINLINK_CRLOCK_THR_6G Fld(8, 0, AC_FULLB0)
    #define REG_01B0_LANE_1_MAINLINK_CRLOSE_THR_6G Fld(8, 8, AC_FULLB1)
#define REG_01B4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1B4)
    #define REG_01B4_LANE_1_MAINLINK_CRLOCK_THR_3G Fld(8, 0, AC_FULLB0)
    #define REG_01B4_LANE_1_MAINLINK_CRLOSE_THR_3G Fld(8, 8, AC_FULLB1)
#define REG_01B8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1B8)
    #define REG_01B8_LANE_1_MAINLINK_CRLOSE_THR_12G_EQ Fld(8, 0, AC_FULLB0)
    #define REG_01B8_LANE_1_MAINLINK_CRLOSE_THR_10G_EQ Fld(8, 8, AC_FULLB1)
#define REG_01BC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1BC)
    #define REG_01BC_LANE_1_MAINLINK_CRLOSE_THR_8G_EQ Fld(8, 0, AC_FULLB0)
    #define REG_01BC_LANE_1_MAINLINK_CRLOSE_THR_6G_EQ Fld(8, 8, AC_FULLB1)
#define REG_01C0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1C0)
    #define REG_01C0_LANE_1_MAINLINK_CRLOSE_THR_3G_EQ Fld(8, 0, AC_FULLB0)
    #define REG_01C0_LANE_1_CLOCK_XTAL_DIVIDER_12G Fld(8, 8, AC_FULLB1)
#define REG_01C4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1C4)
    #define REG_01C4_LANE_1_CLOCK_XTAL_DIVIDER_10G Fld(8, 0, AC_FULLB0)
    #define REG_01C4_LANE_1_CLOCK_XTAL_DIVIDER_8G Fld(8, 8, AC_FULLB1)
#define REG_01C8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1C8)
    #define REG_01C8_LANE_1_CLOCK_XTAL_DIVIDER_6G Fld(8, 0, AC_FULLB0)
    #define REG_01C8_LANE_1_CLOCK_XTAL_DIVIDER_3G Fld(8, 8, AC_FULLB1)
#define REG_01CC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1CC)
    #define REG_01CC_LANE_1_CLOCK_XTAL_DIVIDER_2P0 Fld(8, 0, AC_FULLB0)
    #define REG_01CC_LANE_1_CLOCK_XTAL_DIVIDER_1P4 Fld(8, 8, AC_FULLB1)
#define REG_01D0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1D0)
    #define REG_01D0_LANE_1_CR_DONE_CNT_HOLD_L0 Fld(16, 0, AC_FULLW10)
#define REG_01D4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1D4)
    #define REG_01D4_LANE_1_CR_DONE_CNT_HOLD_L1 Fld(16, 0, AC_FULLW10)
#define REG_01D8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1D8)
    #define REG_01D8_LANE_1_CR_DONE_CNT_HOLD_L2 Fld(16, 0, AC_FULLW10)
#define REG_01DC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1DC)
    #define REG_01DC_LANE_1_CR_DONE_CNT_HOLD_L3 Fld(16, 0, AC_FULLW10)
#define REG_01E0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1E0)
    #define REG_01E0_LANE_1_VCO_DIV40_CLK_THR7 Fld(16, 0, AC_FULLW10)
#define REG_01E4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1E4)
    #define REG_01E4_LANE_1_VCO_DIV40_CLK_THR6 Fld(16, 0, AC_FULLW10)
#define REG_01E8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1E8)
    #define REG_01E8_LANE_1_VCO_DIV40_CLK_THR5 Fld(16, 0, AC_FULLW10)
#define REG_01EC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1EC)
    #define REG_01EC_LANE_1_VCO_DIV40_CLK_THR4 Fld(16, 0, AC_FULLW10)
#define REG_01F0_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1F0)
    #define REG_01F0_LANE_1_VCO_DIV40_CLK_THR3 Fld(16, 0, AC_FULLW10)
#define REG_01F4_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1F4)
    #define REG_01F4_LANE_1_VCO_DIV40_CLK_THR2 Fld(16, 0, AC_FULLW10)
#define REG_01F8_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1F8)
    #define REG_01F8_LANE_1_VCO_DIV40_CLK_THR1 Fld(16, 0, AC_FULLW10)
#define REG_01FC_LANE_1 (HDMIRX_P0_PHY_LANE_1_BASE + 0x1FC)
    #define REG_01FC_LANE_1_FREQ_DET_STATUS_L0 Fld(4, 0, AC_MSKB0)
    #define REG_01FC_LANE_1_FREQ_DET_STATUS_L1 Fld(4, 4, AC_MSKB0)
    #define REG_01FC_LANE_1_FREQ_DET_STATUS_L2 Fld(4, 8, AC_MSKB1)
    #define REG_01FC_LANE_1_FREQ_DET_STATUS_L3 Fld(4, 12, AC_MSKB1)

