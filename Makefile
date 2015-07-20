obj-m:=hello.o
KDIR:=/usr/src/linux-headers-3.16.0-30-generic
PWD:=$(shell pwd)
all:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
	@rm -rf *.mod.*
	@rm -rf .*.cmd
	@rm -rf *.o
	@rm -rf Module.*
clean:
	rm -rf *.ko
