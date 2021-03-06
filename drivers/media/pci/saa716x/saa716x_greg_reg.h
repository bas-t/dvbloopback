/* SPDX-License-Identifier: GPL-2.0+ */

#ifndef __SAA716x_GREG_REG_H
#define __SAA716x_GREG_REG_H

/* -------------- GREG Registers -------------- */

#define GREG_SUBSYS_CONFIG		0x000
#define GREG_SUBSYS_ID			(0x0000ffff << 16)
#define GREG_SUBSYS_VID			(0x0000ffff <<  0)

#define GREG_MSI_BAR_PMCSR		0x004
#define GREG_PMCSR_SCALE_7		(0x00000003 << 30)
#define GREG_PMCSR_SCALE_6		(0x00000003 << 28)
#define GREG_PMCSR_SCALE_5		(0x00000003 << 26)
#define GREG_PMCSR_SCALE_4		(0x00000003 << 24)
#define GREG_PMCSR_SCALE_3		(0x00000003 << 22)
#define GREG_PMCSR_SCALE_2		(0x00000003 << 20)
#define GREG_PMCSR_SCALE_1		(0x00000003 << 18)
#define GREG_PMCSR_SCALE_0		(0x00000003 << 16)

#define GREG_BAR_WIDTH_17		(0x0000001e <<  8)
#define GREG_BAR_WIDTH_18		(0x0000001c <<  8)
#define GREG_BAR_WIDTH_19		(0x00000018 <<  8)
#define GREG_BAR_WIDTH_20		(0x00000010 <<  8)

#define GREG_BAR_PREFETCH		(0x00000001 <<  3)
#define GREG_MSI_MM_CAP1		(0x00000000 <<  0) // FIXME !
#define GREG_MSI_MM_CAP2		(0x00000001 <<  0)
#define GREG_MSI_MM_CAP4		(0x00000002 <<  0)
#define GREG_MSI_MM_CAP8		(0x00000003 <<  0)
#define GREG_MSI_MM_CAP16		(0x00000004 <<  0)
#define GREG_MSI_MM_CAP32		(0x00000005 <<  0)

#define GREG_PMCSR_DATA_1		0x008
#define GREG_PMCSR_DATA_2		0x00c
#define GREG_VI_CTRL			0x010
#define GREG_FGPI_CTRL			0x014
#define GREG_FGPI_CTRL_SEL(vp)		(((vp) == 2 || (vp) == 4) ? 1 : \
					 ((vp) == 1 || (vp) == 5) ? 2 : \
					 ((vp) == 3 || (vp) == 6) ? 4 : 0)

#define GREG_RSTU_CTRL			0x018
#define GREG_BOOT_READY			(0x00000001 << 13)
#define GREG_RESET_REQ			(0x00000001 << 12)
#define GREG_IP_RST_RELEASE		(0x00000001 << 11)
#define GREG_ADAPTER_RST_RELEASE	(0x00000001 << 10)
#define GREG_PCIE_CORE_RST_RELEASE	(0x00000001 <<  9)
#define GREG_BOOT_IP_RST_RELEASE	(0x00000001 <<  8)
#define GREG_BOOT_RST_RELEASE		(0x00000001 <<  7)
#define GREG_CGU_RST_RELEASE		(0x00000001 <<  6)
#define GREG_IP_RST_ASSERT		(0x00000001 <<  5)
#define GREG_ADAPTER_RST_ASSERT		(0x00000001 <<  4)
#define GREG_RST_ASSERT			(0x00000001 <<  3)
#define GREG_BOOT_IP_RST_ASSERT		(0x00000001 <<  2)
#define GREG_BOOT_RST_ASSERT		(0x00000001 <<  1)
#define GREG_CGU_RST_ASSERT		(0x00000001 <<  0)

#define GREG_I2C_CTRL			0x01c
#define GREG_I2C_SLAVE_ADDR		(0x0000007f <<  0)

#define GREG_OVFLW_CTRL			0x020
#define GREG_OVERFLOW_ENABLE		(0x00001fff <<  0)

#define GREG_TAG_ACK_FLEN		0x024
#define GREG_TAG_ACK_FLEN_1B		(0x00000000 <<  0)
#define GREG_TAG_ACK_FLEN_2B		(0x00000001 <<  0)
#define GREG_TAG_ACK_FLEN_4B		(0x00000002 <<  0)
#define GREG_TAG_ACK_FLEN_8B		(0x00000003 <<  0)

#define GREG_VIDEO_IN_CTRL		0x028

#define GREG_SPARE_1			0x02c
#define GREG_SPARE_2			0x030
#define GREG_SPARE_3			0x034
#define GREG_SPARE_4			0x038
#define GREG_SPARE_5			0x03c
#define GREG_SPARE_6			0x040
#define GREG_SPARE_7			0x044
#define GREG_SPARE_8			0x048
#define GREG_SPARE_9			0x04c
#define GREG_SPARE_10			0x050
#define GREG_SPARE_11			0x054
#define GREG_SPARE_12			0x058
#define GREG_SPARE_13			0x05c
#define GREG_SPARE_14			0x060
#define GREG_SPARE_15			0x064

#define GREG_FAIL_DISABLE		0x068
#define GREG_BOOT_FAIL_DISABLE		(0x00000001 <<  0)

#define GREG_SW_RST			0xff0
#define GREG_SW_RESET			(0x00000001 <<  0)


#endif /* __SAA716x_GREG_REG_H */
