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
Note that it is tested with Debian only, Ubuntu 16.04 LTS seems to work too.
Do: ./configure --help to review the options

N.B.: my personal configure script has default settings for my personal situation.
Most other users should run it with at least the "--drivers=no" and probably the
"--headers=yes" switches. Again: make sure you understand the consequences of running
this script by first running "./configure --help"

Just running "./configure" without any switches (on Debian or Ubuntu 16.04 LTS) will recompile
your stock kernel with the dvbloopback kernel module intree, with an updated ABI num from 900 up to 909.
It also pulls and compiles the sources needed to install the ffdecsawrapper binary.

Note for Debian users: In order to recompile your stock kernel with the dvbloopback kernel intree, you have to temporary comment out the "backports" source in /etc/apt/sources.list and do apt-get update. If you neglect this, the script will recompile the kernel from "backports" and that is probably not what you want. This is due to a bug/feature in apt-get source. That command will allways get the newest source, even if it resides in "backports".

However, if you don't mind running a backports kernel, make sure you have both lines beginning with "deb" and "deb-src" enabled for your backports repo. By doing so, you'll risk trashing your system seriously though. You have been warned!
