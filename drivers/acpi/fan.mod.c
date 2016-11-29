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
	{ 0x95782077, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x77de4b2d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9d9964e8, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x223a81f2, __VMLINUX_SYMBOL_STR(thermal_cooling_device_register) },
	{ 0x6c2e3320, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x202f4e92, __VMLINUX_SYMBOL_STR(acpi_extract_package) },
	{ 0x509b64ea, __VMLINUX_SYMBOL_STR(acpi_has_method) },
	{ 0x91b676d9, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcc67d9ab, __VMLINUX_SYMBOL_STR(acpi_device_update_power) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x88e4da39, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf8050fac, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0x30136899, __VMLINUX_SYMBOL_STR(acpi_device_set_power) },
	{ 0x1de74f72, __VMLINUX_SYMBOL_STR(acpi_execute_simple_method) },
	{ 0xce392170, __VMLINUX_SYMBOL_STR(thermal_cooling_device_unregister) },
	{ 0xd4694812, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:PNP0C0B:*");
MODULE_ALIAS("acpi*:INT3404:*");
