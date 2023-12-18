#include<linux/kernel.h>
#include <linux/module.h> /* Needed by all modules */
#include <linux/printk.h> /* Needed for pr_info() */
#include<linux/proc_fs.h>
#include<linux/uaccess.h>
#include <linux/version.h>

MODULE_LICENSE("GPL");

static int __init procfs1_init(void) {
    pr_info("Welcome to the Tomsk State University\n");
    return 0;
}
static void __exit procfs1_exit(void) {
    pr_info("Tomsk State University forever!\n");
}
module_init(procfs1_init);
module_exit(procfs1_exit);
