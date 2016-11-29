#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6011d471, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9cc7984f, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0x814f16f7, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5e6ecd24, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x748a9003, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x3b03b6a5, __VMLINUX_SYMBOL_STR(acpi_debug_print) },
	{ 0x1a2259a7, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x78b8b016, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xea7fa87b, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0xcde8a0ad, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x68c954a4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x39909adf, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2119f171, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xb3284531, __VMLINUX_SYMBOL_STR(acpi_dbg_layer) },
	{ 0xf543253b, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6c2e3320, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x7af4a2a, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xc0352d13, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x77456e0a, __VMLINUX_SYMBOL_STR(acpi_root_dir) },
	{ 0x5b473a7e, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xff6ee6b4, __VMLINUX_SYMBOL_STR(blocking_notifier_call_chain) },
	{ 0x516a3f96, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x7fa59834, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0x10763f56, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0xca8acc78, __VMLINUX_SYMBOL_STR(acpi_dbg_level) },
	{ 0xd9691a38, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x6b80a231, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x42bb13a3, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf8f049be, __VMLINUX_SYMBOL_STR(acpi_device_hid) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xfed4754b, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:PNP0C0D:*");
MODULE_ALIAS("acpi*:PNP0C0E:*");
MODULE_ALIAS("acpi*:LNXSLPBN:*");
MODULE_ALIAS("acpi*:PNP0C0C:*");
MODULE_ALIAS("acpi*:LNXPWRBN:*");
