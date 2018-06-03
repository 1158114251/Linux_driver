
MODNAME = hello
KERDIR = /lib/modules/`uname -r`/build/

modules:
	$(MAKE) -C $(KERDIR) M=$(shell pwd) 

clean:
	rm -rf *.o *.ko *mod*  *Mod*

obj-m = $(MODNAME).o 
