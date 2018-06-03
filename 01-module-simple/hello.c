#include <linux/module.h>
#include <linux/init.h>

/* 许可证声明 */
MODULE_LICENSE("GPL");

static int __init hello_init(void)
{
	printk("-- %s called --\n", __FUNCTION__);

	return 0;
}


static void __exit hello_exit (void)
{
	printk("-- %s called --\n", __FUNCTION__);

	return ;
}

module_init(hello_init);
module_exit(hello_exit);
