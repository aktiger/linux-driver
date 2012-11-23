#include <linux/module.h>
#include <linux/slab.h>
#include<linux/vmalloc.h>

unsigned char* pagemem;
unsigned char* kmallocmem;
unsigned char* vmallocmem;

int init_module(void)
{
  pagemem = (int)__get_free_page(0);
  printk(KERN_ALERT"<111111111> pagemem=%s\n", pagemem);
  kmallocmem = kmalloc(100,0);
  printk(KERN_ALERT"<222222222> kmallocmem=%s\n", kmallocmem);
  vmallocmem = vmalloc(1000000);
  printk(KERN_ALERT"<333333333>vmallocmem=%s\n", vmallocmem); 

}
void cleanup_module(void)
{
free_page(pagemem);
free_page(kmallocmem);
vfree(vmallocmem);
}
