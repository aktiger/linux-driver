#include <linux/init.h>
#include <linux/module.h>
#include <asm/current.h>
#include <linux/sched.h>
MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
printk(KERN_ALERT "Hello, World!!\n");

return 0;

}


static void hello_exit(void)
{
struct task_struct *currents;
currents = get_current();

printk(KERN_ALERT "GoodBye, CRUEL WORLD\n");
printk(KERN_ALERT "The process is \"%s\" (pid %i)\n",currents->comm, currents->pid);
}

module_init(hello_init);
module_exit(hello_exit);
