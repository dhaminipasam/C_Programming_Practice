#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/ioport.h>
#include <linux/delay.h>
#include </usr/src/linux-headers-5.11.0-27-generic/arch/x86/include/asm/io.h>

MODULE_LICENSE("GPL");

static int mod_init(void)
{
	pr_info("Enabling speaker\n");
	outb(0x03, 0x0061); //Enabling speaker
	ssleep(5);
	pr_info("Disabling speaker\n");
	outb(0x00, 0x0061); //Disabling Speaker
	return 0;
}

static void mod_exit(void)
{
	pr_info("removing speaker module\n");
}

module_init(mod_init);
module_exit(mod_exit);

