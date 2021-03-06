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
	{ 0x9e2a8c36, __VMLINUX_SYMBOL_STR(crypto_unregister_rngs) },
	{ 0x458a65ec, __VMLINUX_SYMBOL_STR(crypto_register_rngs) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xeb9f7ace, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8d3ca7a6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

