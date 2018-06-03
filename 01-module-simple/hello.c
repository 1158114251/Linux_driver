#include <linux/module.h>
#include <linux/init.h>

/* 许可证声明 */
MODULE_LICENSE("GPL");

/* 模块加载函数，当向内核中插入这个模块的时候会被调用 */
int init_module(void)
{
	//做初始化的动作
	printk("-- %s called --\n", __FUNCTION__);

	return 0;
}

module_init()

/* 模块的卸载函数，当从内核中把本模块删除的时候被调用 */
void cleanup_module(void)
{
	//做和init_module相反的动作
	printk("-- %s called --\n", __FUNCTION__);

	return ;
}
