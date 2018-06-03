#include <linux/module.h>
#include <linux/init.h>

static char * dis_info = "hello driver";
module_param(dis_info,charp,S_IRUGO);

static int __init hello_init(void)
{
	printk("-- %s called INFO %s --\n", __FUNCTION__,dis_info);

	return 0;
}


static void __exit hello_exit (void)
{
	printk("-- %s called --\n", __FUNCTION__);

	return ;
}

MODULE_LICENSE("GPL");
module_init(hello_init);
module_exit(hello_exit);
