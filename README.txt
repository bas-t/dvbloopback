Loopback kernel driver for DVB devices

Use:

copy the dvbloopback dir into the drivers/media/pci dir of the kernel/v4l tree

Add
source "drivers/media/pci/dvbloopback/Kconfig"
to drivers/media/pci/Kconfig

Add
obj-$(CONFIG_DVB_LOOPBACK_ADAPTER) += dvbloopback/
to drivers/media/pci/Makefile

Patch drivers/media/dvb-core/dvbdev.c the usual way,
example patches are in this repo.

For v4l tree or linux-4.1 or higher,
in drivers/media/Kconfig comment out:

config MEDIA_CONTROLLER_DVB
	bool "Enable Media controller for DVB"
	depends on MEDIA_CONTROLLER
	depends on BROKEN
	---help---
	  Enable the media controller API support for DVB.

 This is currently experimental.

Having done this, proceed with make oldconfig, make allyesconfig or something like that.


Alternative use:

If you like it, you could use my personal configure script.
Do: ./configure --help to review the options
