saa716x_core-objs	:= saa716x_pci.o	\
			   saa716x_i2c.o	\
			   saa716x_cgu.o	\
			   saa716x_dma.o	\
			   saa716x_vip.o	\
			   saa716x_boot.o	\
			   saa716x_fgpi.o	\
			   saa716x_adap.o	\
			   saa716x_gpio.o

obj-$(CONFIG_VIDEO_SAA716X)  += saa716x_core.o saa716x_budget.o

EXTRA_CFLAGS = -Idrivers/media/dvb-core/ -Idrivers/media/dvb-frontends/ -Idrivers/media/tuners/ -Iinclude/media/
