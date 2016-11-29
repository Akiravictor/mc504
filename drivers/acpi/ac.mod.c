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
	{ 0xea7fa87b, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x9cc7984f, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x973fa82e, __VMLINUX_SYMBOL_STR(register_acpi_notifier) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdee22ca6, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xc0352d13, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x814f16f7, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf41817ed, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7023bea8, __VMLINUX_SYMBOL_STR(unregister_acpi_notifier) },
	{ 0x5c19e8ed, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0xb19fac68, __VMLINUX_SYMBOL_STR(acpi_notifier_call_chain) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3b03b6a5, __VMLINUX_SYMBOL_STR(acpi_debug_print) },
	{ 0xb3284531, __VMLINUX_SYMBOL_STR(acpi_dbg_layer) },
	{ 0xca8acc78, __VMLINUX_SYMBOL_STR(acpi_dbg_level) },
	{ 0x43b60875, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x95395301, __VMLINUX_SYMBOL_STR(acpi_exception) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:ACPI0003:*");
