/* SPDX-License-Identifier: GPL-2.0+ */

#ifndef __SAA716x_MSI_REG_H
#define __SAA716x_MSI_REG_H

/* -------------- MSI Registers -------------- */

#define MSI_DELAY_TIMER			0x000
#define MSI_DELAY_1CLK			(0x00000001 <<  0)
#define MSI_DELAY_2CLK			(0x00000002 <<  0)

#define MSI_INTA_POLARITY		0x004
#define MSI_INTA_POLARITY_HIGH		(0x00000001 <<  0)

#define MSI_CONFIG0			0x008
#define MSI_CONFIG1			0x00c
#define MSI_CONFIG2			0x010
#define MSI_CONFIG3			0x014
#define MSI_CONFIG4			0x018
#define MSI_CONFIG5			0x01c
#define MSI_CONFIG6			0x020
#define MSI_CONFIG7			0x024
#define MSI_CONFIG8			0x028
#define MSI_CONFIG9			0x02c
#define MSI_CONFIG10			0x030
#define MSI_CONFIG11			0x034
#define MSI_CONFIG12			0x038
#define MSI_CONFIG13			0x03c
#define MSI_CONFIG14			0x040
#define MSI_CONFIG15			0x044
#define MSI_CONFIG16			0x048
#define MSI_CONFIG17			0x04c
#define MSI_CONFIG18			0x050
#define MSI_CONFIG19			0x054
#define MSI_CONFIG20			0x058
#define MSI_CONFIG21			0x05c
#define MSI_CONFIG22			0x060
#define MSI_CONFIG23			0x064
#define MSI_CONFIG24			0x068
#define MSI_CONFIG25			0x06c
#define MSI_CONFIG26			0x070
#define MSI_CONFIG27			0x074
#define MSI_CONFIG28			0x078
#define MSI_CONFIG29			0x07c
#define MSI_CONFIG30			0x080
#define MSI_CONFIG31			0x084
#define MSI_CONFIG32			0x088
#define MSI_CONFIG33			0x08c
#define MSI_CONFIG34			0x090
#define MSI_CONFIG35			0x094
#define MSI_CONFIG36			0x098
#define MSI_CONFIG37			0x09c
#define MSI_CONFIG38			0x0a0
#define MSI_CONFIG39			0x0a4
#define MSI_CONFIG40			0x0a8
#define MSI_CONFIG41			0x0ac
#define MSI_CONFIG42			0x0b0
#define MSI_CONFIG43			0x0b4
#define MSI_CONFIG44			0x0b8
#define MSI_CONFIG45			0x0bc
#define MSI_CONFIG46			0x0c0
#define MSI_CONFIG47			0x0c4
#define MSI_CONFIG48			0x0c8
#define MSI_CONFIG49			0x0cc
#define MSI_CONFIG50			0x0d0

#define MSI_INT_POL_EDGE_RISE		(0x00000001 << 24)
#define MSI_INT_POL_EDGE_FALL		(0x00000002 << 24)
#define MSI_INT_POL_EDGE_ANY		(0x00000003 << 24)
#define MSI_TC				(0x00000007 << 16)
#define MSI_ID				(0x0000000f <<  0)

#define MSI_INT_STATUS_L		0xfc0
#define MSI_INT_TAGACK_VI0_0		(0x00000001 <<  0)
#define MSI_INT_TAGACK_VI0_1		(0x00000001 <<  1)
#define MSI_INT_TAGACK_VI0_2		(0x00000001 <<  2)
#define MSI_INT_TAGACK_VI1_0		(0x00000001 <<  3)
#define MSI_INT_TAGACK_VI1_1		(0x00000001 <<  4)
#define MSI_INT_TAGACK_VI1_2		(0x00000001 <<  5)
#define MSI_INT_TAGACK_FGPI_0		(0x00000001 <<  6)
#define MSI_INT_TAGACK_FGPI_1		(0x00000001 <<  7)
#define MSI_INT_TAGACK_FGPI_2		(0x00000001 <<  8)
#define MSI_INT_TAGACK_FGPI_3		(0x00000001 <<  9)
#define MSI_INT_TAGACK_AI_0		(0x00000001 << 10)
#define MSI_INT_TAGACK_AI_1		(0x00000001 << 11)
#define MSI_INT_OVRFLW_VI0_0		(0x00000001 << 12)
#define MSI_INT_OVRFLW_VI0_1		(0x00000001 << 13)
#define MSI_INT_OVRFLW_VI0_2		(0x00000001 << 14)
#define MSI_INT_OVRFLW_VI1_0		(0x00000001 << 15)
#define MSI_INT_OVRFLW_VI1_1		(0x00000001 << 16)
#define MSI_INT_OVRFLW_VI1_2		(0x00000001 << 17)
#define MSI_INT_OVRFLW_FGPI_0		(0x00000001 << 18)
#define MSI_INT_OVRFLW_FGPI_1		(0x00000001 << 19)
#define MSI_INT_OVRFLW_FGPI_2		(0x00000001 << 20)
#define MSI_INT_OVRFLW_FGPI_3		(0x00000001 << 21)
#define MSI_INT_OVRFLW_AI_0		(0x00000001 << 22)
#define MSI_INT_OVRFLW_AI_1		(0x00000001 << 23)
#define MSI_INT_AVINT_VI0		(0x00000001 << 24)
#define MSI_INT_AVINT_VI1		(0x00000001 << 25)
#define MSI_INT_AVINT_FGPI_0		(0x00000001 << 26)
#define MSI_INT_AVINT_FGPI_1		(0x00000001 << 27)
#define MSI_INT_AVINT_FGPI_2		(0x00000001 << 28)
#define MSI_INT_AVINT_FGPI_3		(0x00000001 << 29)
#define MSI_INT_AVINT_AI_0		(0x00000001 << 30)
#define MSI_INT_AVINT_AI_1		(0x00000001 << 31)

#define MSI_INT_STATUS_H		0xfc4
#define MSI_INT_UNMAPD_TC_INT		(0x00000001 <<  0)
#define MSI_INT_EXTINT_0		(0x00000001 <<  1)
#define MSI_INT_EXTINT_1		(0x00000001 <<  2)
#define MSI_INT_EXTINT_2		(0x00000001 <<  3)
#define MSI_INT_EXTINT_3		(0x00000001 <<  4)
#define MSI_INT_EXTINT_4		(0x00000001 <<  5)
#define MSI_INT_EXTINT_5		(0x00000001 <<  6)
#define MSI_INT_EXTINT_6		(0x00000001 <<  7)
#define MSI_INT_EXTINT_7		(0x00000001 <<  8)
#define MSI_INT_EXTINT_8		(0x00000001 <<  9)
#define MSI_INT_EXTINT_9		(0x00000001 << 10)
#define MSI_INT_EXTINT_10		(0x00000001 << 11)
#define MSI_INT_EXTINT_11		(0x00000001 << 12)
#define MSI_INT_EXTINT_12		(0x00000001 << 13)
#define MSI_INT_EXTINT_13		(0x00000001 << 14)
#define MSI_INT_EXTINT_14		(0x00000001 << 15)
#define MSI_INT_EXTINT_15		(0x00000001 << 16)
#define MSI_INT_I2CINT_0		(0x00000001 << 17)
#define MSI_INT_I2CINT_1		(0x00000001 << 18)

#define MSI_INT_STATUS_CLR_L		0xfc8
#define MSI_INT_STATUS_CLR_H		0xfcc
#define MSI_INT_STATUS_SET_L		0xfd0
#define MSI_INT_STATUS_SET_H		0xfd4
#define MSI_INT_ENA_L			0xfd8
#define MSI_INT_ENA_H			0xfdc
#define MSI_INT_ENA_CLR_L		0xfe0
#define MSI_INT_ENA_CLR_H		0xfe4
#define MSI_INT_ENA_SET_L		0xfe8
#define MSI_INT_ENA_SET_H		0xfec

#define MSI_SW_RST			0xff0
#define MSI_SW_RESET			(0x0001 <<  0)

#define MSI_MODULE_ID			0xffc


#endif /* __SAA716x_MSI_REG_H */
