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
	{ 0x171f5b2, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xea7fa87b, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x15892417, __VMLINUX_SYMBOL_STR(async_synchronize_cookie) },
	{ 0xcc85fcb6, __VMLINUX_SYMBOL_STR(async_schedule) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0x10895d36, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0xb19fac68, __VMLINUX_SYMBOL_STR(acpi_notifier_call_chain) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9cec22b4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xc0352d13, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x814f16f7, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7fa59834, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0x56947347, __VMLINUX_SYMBOL_STR(dmi_walk) },
	{ 0x81e6b37f, __VMLINUX_SYMBOL_STR(dmi_get_system_info) },
	{ 0xe13cd8a7, __VMLINUX_SYMBOL_STR(dmi_name_in_vendors) },
	{ 0x57d198e1, __VMLINUX_SYMBOL_STR(acpi_bus_get_status) },
	{ 0x509b64ea, __VMLINUX_SYMBOL_STR(acpi_has_method) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3b03b6a5, __VMLINUX_SYMBOL_STR(acpi_debug_print) },
	{ 0xb3284531, __VMLINUX_SYMBOL_STR(acpi_dbg_layer) },
	{ 0xca8acc78, __VMLINUX_SYMBOL_STR(acpi_dbg_level) },
	{ 0x1de74f72, __VMLINUX_SYMBOL_STR(acpi_execute_simple_method) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0x7f9f717d, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdea366bd, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xa75e1887, __VMLINUX_SYMBOL_STR(power_supply_register_no_ws) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x95395301, __VMLINUX_SYMBOL_STR(acpi_exception) },
	{ 0xf8050fac, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0xb6ed1e53, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf41817ed, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0xca6692c9, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5c19e8ed, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0xe6349e96, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x56b51add, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9cc7984f, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:PNP0C0A:*");
