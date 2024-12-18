/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 MediaTek Inc.
 * Copyright (c) 2021 BayLibre, SAS
 */

#ifndef _MTK_HDMI_REGS_H
#define _MTK_HDMI_REGS_H

#define AIF_HEADER GENMASK(19, 0)
#define AIF_PKT00 GENMASK(31, 0)
#define AIF_PKT01 (23, 0)
#define AIF_PKT02 (31, 0)
#define AIF_PKT03 (23, 0)

#define AIP_CTRL 0x400
#define AIP_CTS_SVAL 0x408
#define AIP_DOWNSAMPLE_CTRL 0x41C
#define AIP_I2S_CHST0 0x414
#define AIP_I2S_CHST1 0x418
#define AIP_I2S_CTRL 0x410
#define AIP_N_VAL 0x404
#define AIP_SPDIF_CTRL 0x40C
#define AIP_TPI_CTRL 0x428
#define AIP_TXCTRL 0x424

#define AUD_DIS (0x0)
#define AUD_DIS_WR (0x0)
#define AUD_EN BIT(2)
#define AUD_EN_WR BIT(18)
#define AUD_ERR_THRESH GENMASK(29, 24)
#define AUD_ERR_THRESH_SHIFT 24
#define AUD_IN_EN BIT(8)
#define AUD_IN_EN_SHIFT 8
#define AUD_MUTE_DIS (0x0)
#define AUD_MUTE_FIFO_EN BIT(5)
#define AUD_PACKET_DROP BIT(6)
#define AUD_RPT_DIS (0x0)
#define AUD_RPT_EN BIT(2)
#define AUD_SEL_OWRT BIT(9)

#define AVI_DIS (0)
#define AVI_DIS_WR (0)
#define AVI_EN (0x1)
#define AVI_EN_WR BIT(16)
#define AVI_HEADER GENMASK(23, 0)
#define AVI_PKT00 GENMASK(31, 0)
#define AVI_PKT01 GENMASK(23, 0)
#define AVI_PKT02 GENMASK(31, 0)
#define AVI_PKT03 GENMASK(23, 0)
#define AVI_PKT04 GENMASK(31, 0)
#define AVI_PKT05 GENMASK(23, 0)
#define AVI_RPT_DIS (0x0)
#define AVI_RPT_EN (0x1)

#define C422_C420_CONFIG_BYPASS BIT(5)
#define C422_C420_CONFIG_ENABLE BIT(4)
#define C422_C420_CONFIG_OUT_CB_OR_CR BIT(6)
#define C444_C422_CONFIG_ENABLE (0x1)

#define CBIT_ORDER_SAME BIT(13)

#define CEA_AUD_EN BIT(9)
#define CEA_AVI_EN BIT(11)
#define CEA_CP_EN BIT(6)
#define CEA_SPD_EN BIT(10)

#define CLEAR_FIFO 0x9

#define CLOCK_SCL 0xA

#define CP_CLR_MUTE_EN BIT(1)
#define CP_EN BIT(5)
#define CP_EN_WR BIT(21)
#define CP_RPT_EN BIT(5)
#define CP_SET_MUTE_DIS (0)
#define CP_SET_MUTE_EN (1)

#define CTS_CAL_N4 BIT(23)
#define CTS_REQ_EN BIT(1)
#define CTS_SW_SEL (1)

#define C_SD0 (0x0)
#define C_SD1 BIT(4)
#define C_SD2 BIT(9)
#define C_SD3 GENMASK(13, 12)
#define C_SD4 BIT(18)
#define C_SD5 (0x5 << 20)
#define C_SD6 GENMASK(26, 25)
#define C_SD7 GENMASK(30, 28)

#define DATA_DIR_LSB BIT(9)
#define DATA_DIR_MSB (0)

#define DDC_CMD GENMASK(31, 28)
#define DDC_CMD_SHIFT (28)
#define DDC_CTRL 0xC10
#define DDC_DATA_OUT GENMASK(23, 16)
#define DDC_DATA_OUT_CNT GENMASK(12, 8)
#define DDC_DATA_OUT_SHIFT (16)
#define DDC_DELAY_CNT GENMASK(31, 16)
#define DDC_DELAY_CNT_SHIFT (16)
#define DDC_DIN_CNT (25, 16)
#define DDC_DIN_CNT_SHIFT (16)
#define DDC_I2C_BUS_LOW BIT(11)
#define DDC_I2C_IN_PROG BIT(13)
#define DDC_I2C_IN_PROG_INT_CLR BIT(29)
#define DDC_I2C_IN_PROG_INT_MASK (0)
#define DDC_I2C_IN_PROG_INT_STA BIT(1)
#define DDC_I2C_IN_PROG_INT_UNCLR (0)
#define DDC_I2C_IN_PROG_INT_UNMASK BIT(29)
#define DDC_I2C_NO_ACK BIT(10)
#define DDC_OFFSET GENMASK(15, 8)
#define DDC_OFFSET_SHIFT (8)
#define DDC_SEGMENT GENMASK(15, 8)
#define DDC_SEGMENT_SHIFT (8)

#define DEEPCOLOR_MODE_10BIT BIT(8)
#define DEEPCOLOR_MODE_12BIT GENMASK(9, 8)
#define DEEPCOLOR_MODE_16BIT GENMASK(10, 8)
#define DEEPCOLOR_MODE_8BIT (0)
#define DEEPCOLOR_MODE_MASKBIT GENMASK(10, 8)
#define DEEPCOLOR_PAT_EN BIT(12)
#define DEEP_COLOR_ADD BIT(4)

#define DOWNSAMPLE 0x2

#define DSD_EN BIT(15)
#define DSD_MUTE_DATA BIT(7)

#define ENH_READ_NO_ACK 0x4

#define FIFO0_MAP GENMASK(1, 0)
#define FIFO1_MAP GENMASK(3, 2)
#define FIFO2_MAP GENMASK(5, 4)
#define FIFO3_MAP GENMASK(7, 6)

#define FS_OVERRIDE_WRITE BIT(1)
#define FS_UNOVERRIDE (0)

#define HBRA_ON BIT(14)

#define HBR_FROM_SPDIF BIT(20)

#define HDCP1X_CTRL 0xCD0
#define HDCP1X_ENC_EN BIT(6)
#define HDCP1X_ENC_EN_SHIFT (6)
#define HDCP2X_CTRL_0 0xC20
#define HDCP2X_DDCM_STATUS 0xC68
#define HDCP2X_DIS_POLL_EN BIT(16)
#define HDCP2X_EN (0x1)
#define HDCP2X_ENCRYPTING_ON BIT(10)
#define HDCP2X_ENCRYPT_EN BIT(7)
#define HDCP2X_ENCRYPT_EN_SHIFT (7)
#define HDCP2X_HPD_OVR BIT(10)
#define HDCP2X_HPD_SW BIT(11)
#define HDCP2X_POL_CTRL 0xC54
#define HDCP2X_RX_REAUTH_REQ_DDCM_INT_MASK (0)
#define HDCP2X_RX_REAUTH_REQ_DDCM_INT_UNMASK BIT(25)
#define HDCP_ENABLE (0)
#define HDCP_ENCRYPTING_ON BIT(26)
#define HDCP_TOP_CTRL 0xC00

#define HDMI2_OFF (0)
#define HDMI2_ON BIT(2)

#define HDMITX_SW_HPD BIT(29)
#define HDMITX_SW_HPD_SHIFT (29)
#define HDMITX_SW_RSTB BIT(31)
#define HDMITX_SW_RSTB_SHIFT (31)

#define HDMI_MODE_DVI (0)
#define HDMI_MODE_HDMI BIT(3)

#define HDMI_YUV420_MODE BIT(10)
#define HDMI_YUV420_MODE_SHIFT (10)

#define HPD_DDC_CTRL 0xC08
#define HPD_DDC_STATUS 0xC60

#define HPD_PIN_STA BIT(4)
#define HPD_STATE (0x3)
#define HPD_STATE_CONNECTED (2)
#define HPD_STATE_DISCONNECTED (0)
#define HPD_STATE_SHIFT (0)

#define HTPLG_F_INT_STA BIT(1)
#define HTPLG_R_INT_STA BIT(0)

#define I2S2DSD_EN BIT(30)
#define I2S_1ST_BIT_NOSHIFT BIT(8)
#define I2S_EN GENMASK(19, 16)
#define I2S_EN_SHIFT 16

#define JUSTIFY_RIGHT BIT(10)

#define LAYOUT BIT(18)
#define LAYOUT0 0
#define LAYOUT1 BIT(4)

#define LFE_CC_SWAP BIT(1)

#define MAP_SD0 0x0
#define MAP_SD1 0x1
#define MAP_SD2 0x2
#define MAP_SD3 0x3

#define MAX_1UI_WRITE GENMASK(15, 8)
#define MAX_1UI_WRITE_SHIFT 8
#define MAX_2UI_WRITE GENMASK(23, 16)
#define MAX_2UI_WRITE_SHIFT 16

#define MCLK_1152FS 0x6
#define MCLK_128FS 0x0
#define MCLK_192FS 0x7
#define MCLK_256FS 0x1
#define MCLK_384FS 0x2
#define MCLK_512FS 0x3
#define MCLK_768FS 0x4
#define MCLK_CTSGEN_SEL 0
#define MCLK_EN BIT(2)
#define NO_MCLK_CTSGEN_SEL BIT(3)

#define NULL_PKT_EN BIT(2)
#define NULL_PKT_VSYNC_HIGH_EN BIT(3)

#define OUTPUT_FORMAT_DEMUX_420_ENABLE BIT(10)

#define PORD_F_INT_STA BIT(3)
#define PORD_PIN_STA BIT(5)
#define PORD_R_INT_STA BIT(2)

#define REG_VMUTE_EN BIT(16)
#define RST4AUDIO BIT(0)
#define RST4AUDIO_ACR BIT(2)
#define RST4AUDIO_FIFO BIT(1)

#define SCDC_CTRL 0xC18

#define SCK_EDGE_RISE BIT(14)

#define SCR_OFF 0
#define SCR_ON BIT(4)

#define SEQ_READ_NO_ACK 0x2
#define SEQ_WRITE_REQ_ACK 0x7

#define SI2C_ADDR GENMASK(23, 16)
#define SI2C_ADDR_READ (0xF4)
#define SI2C_ADDR_SHIFT (16)
#define SI2C_CONFIRM_READ BIT(2)
#define SI2C_CTRL 0xCAC
#define SI2C_RD BIT(1)
#define SI2C_WDATA GENMASK(15, 8)
#define SI2C_WDATA_SHIFT (8)
#define SI2C_WR BIT(0)

#define SPDIF_EN BIT(13)
#define SPDIF_EN_SHIFT 13
#define SPDIF_HEADER GENMASK(23, 0)
#define SPDIF_INTERNAL_MODULE BIT(24)
#define SPDIF_PKT00 GENMASK(31, 0)
#define SPDIF_PKT01 GENMASK(23, 0)
#define SPDIF_PKT02 GENMASK(31, 0)
#define SPDIF_PKT03 GENMASK(23, 0)
#define SPDIF_PKT04 GENMASK(31, 0)
#define SPDIF_PKT05 GENMASK(23, 0)
#define SPDIF_PKT06 GENMASK(31, 0)
#define SPDIF_PKT07 GENMASK(23, 0)

#define SPD_DIS 0
#define SPD_DIS_WR 0
#define SPD_EN BIT(1)
#define SPD_EN_WR BIT(17)
#define SPD_RPT_DIS 0
#define SPD_RPT_EN BIT(1)

#define TOP_AIF_HEADER 0x040
#define TOP_AIF_PKT00 0x044
#define TOP_AIF_PKT01 0x048
#define TOP_AIF_PKT02 0x04C
#define TOP_AIF_PKT03 0x050
#define TOP_AUD_MAP 0x00C
#define TOP_AVI_HEADER 0x024
#define TOP_AVI_PKT00 0x028
#define TOP_AVI_PKT01 0x02C
#define TOP_AVI_PKT02 0x030
#define TOP_AVI_PKT03 0x034
#define TOP_AVI_PKT04 0x038
#define TOP_AVI_PKT05 0x03C
#define TOP_CFG00 0x000
#define TOP_CFG01 0x004
#define TOP_INFO_EN 0x01C
#define TOP_INFO_EN_EXPAND 0x368
#define TOP_INFO_RPT 0x020
#define TOP_INT_CLR00 0x1B8
#define TOP_INT_CLR01 0x1BC
#define TOP_INT_MASK00 0x1B0
#define TOP_INT_MASK01 0x1B4
#define TOP_INT_STA00 0x1A8
#define TOP_MISC_CTLR 0x1A4
#define TOP_SPDIF_HEADER 0x054
#define TOP_SPDIF_PKT00 0x058
#define TOP_SPDIF_PKT01 0x05C
#define TOP_SPDIF_PKT02 0x060
#define TOP_SPDIF_PKT03 0x064
#define TOP_SPDIF_PKT04 0x068
#define TOP_SPDIF_PKT05 0x06C
#define TOP_SPDIF_PKT06 0x070
#define TOP_SPDIF_PKT07 0x074
#define TOP_VMUTE_CFG1 0x1C8

#define TPI_AUDIO_LOOKUP_DIS 0
#define TPI_AUDIO_LOOKUP_EN BIT(2)

#define VBIT_COM BIT(12)
#define VBIT_PCM 0

#define VID_DOWNSAMPLE_CONFIG 0x8F0
#define VID_OUT_FORMAT 0x8FC

#define WR_1UI_LOCK BIT(0)
#define WR_1UI_UNLOCK 0
#define WR_2UI_LOCK BIT(2)
#define WR_2UI_UNLOCK 0
#define WS_HIGH BIT(11)

#define ABIST_ENABLE (1 << 31)
#define ABIST_VIDEO_FORMAT_MASKBIT (0x3F << 16)
#define ABIST_VIDEO_FORMAT_720x480P (0x2 << 16)
#define ABIST_VIDEO_FORMAT_720P50 (0xC << 16)
#define ABIST_VIDEO_FORMAT_1080P60 (0xA << 16)
#define ABIST_VIDEO_FORMAT_3840x2160P30 (0x19 << 16)

#endif /* _MTK_HDMI_REGS_H */
