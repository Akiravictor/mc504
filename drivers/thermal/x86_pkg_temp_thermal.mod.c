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
	{ 0x6808b453, __VMLINUX_SYMBOL_STR(__unregister_cpu_notifier) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0x8a7cb9c4, __VMLINUX_SYMBOL_STR(platform_thermal_package_rate_control) },
	{ 0x90de0452, __VMLINUX_SYMBOL_STR(platform_thermal_package_notify) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0xfd792e2a, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x2c74a3db, __VMLINUX_SYMBOL_STR(thermal_zone_device_unregister) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x582a1d93, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdeea1dd1, __VMLINUX_SYMBOL_STR(thermal_zone_device_register) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xc0352d13, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x814f16f7, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x584738f9, __VMLINUX_SYMBOL_STR(rdmsr_safe_on_cpu) },
	{ 0xe997667b, __VMLINUX_SYMBOL_STR(wrmsr_on_cpu) },
	{ 0xb1cfad22, __VMLINUX_SYMBOL_STR(rdmsr_on_cpu) },
	{ 0x7773faf1, __VMLINUX_SYMBOL_STR(thermal_zone_device_update) },
	{ 0xca6692c9, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x56b51add, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x58d2273e, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x24df1cd1, __VMLINUX_SYMBOL_STR(ex_handler_wrmsr_unsafe) },
	{ 0xb141e865, __VMLINUX_SYMBOL_STR(ex_handler_rdmsr_unsafe) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x876c21c6, __VMLINUX_SYMBOL_STR(cpu_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven0000fam*mod*:feature:*01C6*");
