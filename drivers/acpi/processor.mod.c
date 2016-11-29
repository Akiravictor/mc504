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
	{ 0xd81edb06, __VMLINUX_SYMBOL_STR(acpi_processor_power_init_bm_check) },
	{ 0x9416e1d8, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x814f16f7, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xabb19c0, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x95a2ada7, __VMLINUX_SYMBOL_STR(cpu_subsys) },
	{ 0xbfe5616d, __VMLINUX_SYMBOL_STR(tick_broadcast_oneshot_control) },
	{ 0x139b504, __VMLINUX_SYMBOL_STR(cpu_current_top_of_stack) },
	{ 0x2bb55d6e, __VMLINUX_SYMBOL_STR(acpi_remove_notify_handler) },
	{ 0x664555d3, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0xd9091363, __VMLINUX_SYMBOL_STR(acpi_install_notify_handler) },
	{ 0xce392170, __VMLINUX_SYMBOL_STR(thermal_cooling_device_unregister) },
	{ 0x2366a2c0, __VMLINUX_SYMBOL_STR(errata) },
	{ 0x8a045daa, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x3b03b6a5, __VMLINUX_SYMBOL_STR(acpi_debug_print) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x1e0effe, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0xf8050fac, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0x92fc4b3b, __VMLINUX_SYMBOL_STR(cpuidle_get_driver) },
	{ 0x876c21c6, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0xe6fd9ef9, __VMLINUX_SYMBOL_STR(cpuidle_unregister_driver) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x5c0442fd, __VMLINUX_SYMBOL_STR(acpi_gbl_FADT) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x56398615, __VMLINUX_SYMBOL_STR(mark_tsc_unstable) },
	{ 0x1848a8e, __VMLINUX_SYMBOL_STR(local_apic_timer_c2_ok) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xcabe04de, __VMLINUX_SYMBOL_STR(cpuidle_resume_and_unlock) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xf82f3657, __VMLINUX_SYMBOL_STR(work_on_cpu) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xc02c0b2a, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xb3284531, __VMLINUX_SYMBOL_STR(acpi_dbg_layer) },
	{ 0x44468156, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x7d94f746, __VMLINUX_SYMBOL_STR(acpi_os_write_port) },
	{ 0xbdaf5b07, __VMLINUX_SYMBOL_STR(acpi_os_read_port) },
	{ 0x88e4da39, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x879e49d5, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x582a1d93, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x2d77d4a3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2c597e99, __VMLINUX_SYMBOL_STR(set_cpus_allowed_ptr) },
	{ 0x36bda7b0, __VMLINUX_SYMBOL_STR(cpuidle_unregister_device) },
	{ 0x99a9ff9a, __VMLINUX_SYMBOL_STR(cpuidle_register_device) },
	{ 0xab29ad96, __VMLINUX_SYMBOL_STR(cpuidle_disable_device) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0xd4694812, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x3e757637, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0x202f4e92, __VMLINUX_SYMBOL_STR(acpi_extract_package) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0x9d9964e8, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x16516798, __VMLINUX_SYMBOL_STR(osc_pc_lpi_support_confirmed) },
	{ 0xc0352d13, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x59bc9609, __VMLINUX_SYMBOL_STR(acpi_write_bit_register) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x543c5997, __VMLINUX_SYMBOL_STR(cpuidle_register_driver) },
	{ 0xfb64b230, __VMLINUX_SYMBOL_STR(acpi_processor_ffh_cstate_probe) },
	{ 0x8e888ec3, __VMLINUX_SYMBOL_STR(cpumask_next_and) },
	{ 0xa466de38, __VMLINUX_SYMBOL_STR(acpi_processor_ffh_cstate_enter) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xca8acc78, __VMLINUX_SYMBOL_STR(acpi_dbg_level) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xef9aedfc, __VMLINUX_SYMBOL_STR(boot_option_idle_override) },
	{ 0x19fcc1d7, __VMLINUX_SYMBOL_STR(ex_handler_default) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x223a81f2, __VMLINUX_SYMBOL_STR(thermal_cooling_device_register) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd969b2c7, __VMLINUX_SYMBOL_STR(amd_e400_c1e_detected) },
	{ 0x7d5deac6, __VMLINUX_SYMBOL_STR(processors) },
	{ 0x7521afb6, __VMLINUX_SYMBOL_STR(leave_mm) },
	{ 0x20aa6f51, __VMLINUX_SYMBOL_STR(cpuidle_enable_device) },
	{ 0x4097fa45, __VMLINUX_SYMBOL_STR(acpi_read_bit_register) },
	{ 0xfb0443fb, __VMLINUX_SYMBOL_STR(acpi_get_parent) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x735a0bd5, __VMLINUX_SYMBOL_STR(native_io_delay) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5c5a1b16, __VMLINUX_SYMBOL_STR(tick_broadcast_control) },
	{ 0x95395301, __VMLINUX_SYMBOL_STR(acpi_exception) },
	{ 0x171f5b2, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x509b64ea, __VMLINUX_SYMBOL_STR(acpi_has_method) },
	{ 0xf8f049be, __VMLINUX_SYMBOL_STR(acpi_device_hid) },
	{ 0xf553318d, __VMLINUX_SYMBOL_STR(cpuidle_pause_and_lock) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:LNXCPU:*");
MODULE_ALIAS("acpi*:ACPI0007:*");
