Loopback kernel driver for DVB devices on Linux.

Use:

NB: minimum supported kernel series is 3.10.x

copy the dvbloopback dir into the drivers/media/pci dir of the kernel or v4l source tree

Add
source "drivers/media/pci/dvbloopback/Kconfig"
to drivers/media/pci/Kconfig

Add
obj-$(CONFIG_DVB_LOOPBACK_ADAPTER) += dvbloopback/
to drivers/media/pci/Makefile

Patch drivers/media/dvb-core/dvbdev.c the usual way,
example patches are in this repo.

Having done this, proceed with make oldconfig, make allyesconfig or something like that.


Alternative use:

If you like it, you could use my personal configure script.
Note that it is tested with Debian only, Ubuntu might work too.
Do: ./configure --help to review the options

Notice, EOL:

I've been moving to a Tvheadend/Kodi setup. Such a setup lacks the need of 'dvbloopback + descrambler',
resulting in a dev stop for the dvbloopback and descrambler repo's.
