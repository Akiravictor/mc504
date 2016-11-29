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
	{ 0x664555d3, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xea7fa87b, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9cc7984f, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x77ff2f08, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe6f83837, __VMLINUX_SYMBOL_STR(acpi_bus_attach_private_data) },
	{ 0x9d9964e8, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xdeea1dd1, __VMLINUX_SYMBOL_STR(thermal_zone_device_register) },
	{ 0x1de74f72, __VMLINUX_SYMBOL_STR(acpi_execute_simple_method) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xc0352d13, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x814f16f7, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe8d7295a, __VMLINUX_SYMBOL_STR(thermal_zone_unbind_cooling_device) },
	{ 0xe59d5c2, __VMLINUX_SYMBOL_STR(thermal_zone_bind_cooling_device) },
	{ 0x1e0effe, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a420d09, __VMLINUX_SYMBOL_STR(acpi_bus_detach_private_data) },
	{ 0x2c74a3db, __VMLINUX_SYMBOL_STR(thermal_zone_device_unregister) },
	{ 0xd4694812, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x7773faf1, __VMLINUX_SYMBOL_STR(thermal_zone_device_update) },
	{ 0x509b64ea, __VMLINUX_SYMBOL_STR(acpi_has_method) },
	{ 0x95395301, __VMLINUX_SYMBOL_STR(acpi_exception) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd94322e7, __VMLINUX_SYMBOL_STR(acpi_evaluate_reference) },
	{ 0x3b03b6a5, __VMLINUX_SYMBOL_STR(acpi_debug_print) },
	{ 0xb3284531, __VMLINUX_SYMBOL_STR(acpi_dbg_layer) },
	{ 0xca8acc78, __VMLINUX_SYMBOL_STR(acpi_dbg_level) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xfc3b4246, __VMLINUX_SYMBOL_STR(acpi_bus_update_power) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:LNXTHERM:*");
