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
	{ 0xe2ba3aed, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0xbb921e0b, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x8a045daa, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x876c21c6, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0xf0f6f5e, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0xfd76e451, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44688871, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x8d3ca7a6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x86819bc6, __VMLINUX_SYMBOL_STR(irq_ts_restore) },
	{ 0x441fa356, __VMLINUX_SYMBOL_STR(irq_ts_save) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00AA*");
