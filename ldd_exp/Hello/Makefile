
#KERNELDIR = /home/tekkaman/working/SBC2440/linux-2.6.22.2
KERNELDIR = /home/zhangchao/linux-3.4.6
    # The current directory is passed to sub-makes as argument
PWD := $(shell pwd)
INSTALLDIR = /home/zhangchao/lib/modules

#CROSS_COMPILE	=/home/tekkaman/working/crosstool-gcc410-k26222/gcc-4.1.0-glibc-2.3.2/arm-9tdmi-linux-gnu/bin/arm-9tdmi-linux-gnu-
#CC	= $(CROSS_COMPILE)gcc

obj-m := hello_world.o 

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

modules_install:
	cp -r hello_world.ko $(INSTALLDIR)
clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions

.PHONY: modules modules_install clean
