#include <linux/init.h>
#include <linux/module.h>
#include <asm/current.h>
#include <linux/sched.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
    printk(KERN_ALERT "hello, world!!\n");

    struct task_struct *currents;// here it can't be current, cause it will conflict
    currents = get_current();
    printk(KERN_ALERT "The process is %s pid %i\n",currents->comm, currents->pid);
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT "GoodBye , CRUEL WORLD\n");
}
	

module_init(hello_init);
module_eixt(hello_exit);
