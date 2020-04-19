/* SPDX-License-Identifier: GPL-2.0+ */

#ifndef __SAA716x_PRIV_H
#define __SAA716x_PRIV_H

#include <linux/pci.h>
#include "saa716x_i2c.h"
#include "saa716x_cgu.h"
#include "saa716x_dma.h"
#include "saa716x_fgpi.h"
#include "saa716x_vip.h"

#include <media/dvbdev.h>
#include <media/dvb_demux.h>
#include <media/dmxdev.h>
#include <media/dvb_frontend.h>
#include <media/dvb_net.h>

#define SAA716x_MAX_ADAPTERS	4

#define NXP_SEMICONDUCTOR	0x1131
#define SAA7160			0x7160
#define SAA7161			0x7161
#define SAA7162			0x7162

#define NXP_REFERENCE_BOARD	0x1131

#define MAKE_ENTRY(__subven, __subdev, __chip, __configptr) {		\
		.vendor		= NXP_SEMICONDUCTOR,			\
		.device		= (__chip),				\
		.subvendor	= (__subven),				\
		.subdevice	= (__subdev),				\
		.driver_data	= (unsigned long) (__configptr)		\
}

#define SAA716x_EPWR(__offst, __addr, __data)	\
	writel((__data), (saa716x->mmio + (__offst + __addr)))
#define SAA716x_EPRD(__offst, __addr)		\
	readl((saa716x->mmio + (__offst + __addr)))

struct saa716x_dev;
struct saa716x_adapter;

struct saa716x_adap_config {
	u32				ts_vp;
	u32				ts_fgpi;
};

struct saa716x_config {
	char				*model_name;
	char				*dev_type;

	int				adapters;

	int (*frontend_attach)(struct saa716x_adapter *adapter, int count);
	irqreturn_t (*irq_handler)(int irq, void *dev_id);

	struct saa716x_adap_config	adap_config[SAA716x_MAX_ADAPTERS];
	enum saa716x_i2c_rate		i2c_rate;
	enum saa716x_i2c_mode		i2c_mode;
};

struct saa716x_adapter {
	struct dvb_adapter		dvb_adapter;
	struct dvb_frontend		*fe;
	struct dvb_demux		demux;
	struct dmxdev			dmxdev;
	struct dmx_frontend		fe_hw;
	struct dmx_frontend		fe_mem;
	struct dvb_net			dvb_net;

	struct saa716x_dev		*saa716x;

	u8				feeds;
	u8				count;

	struct i2c_client		*i2c_client_demod;
	struct i2c_client		*i2c_client_tuner;
};

struct saa716x_dev {
	struct saa716x_config		*config;
	struct pci_dev			*pdev;
	struct module			*module;

	u8				revision;

	/* PCI */
	void __iomem			*mmio;

	/* I2C */
	struct saa716x_i2c		i2c[2];
	u32				I2C_DEV[2];

	struct saa716x_adapter		saa716x_adap[SAA716x_MAX_ADAPTERS];
	struct saa716x_cgu		cgu;

	spinlock_t			gpio_lock;
	/* DMA */

	struct saa716x_fgpi_stream_port	fgpi[4];
	struct saa716x_vip_stream_port	vip[2];
};

#endif /* __SAA716x_PRIV_H */
