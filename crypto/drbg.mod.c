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
	{ 0x9e2a8c36, __VMLINUX_SYMBOL_STR(crypto_unregister_rngs) },
	{ 0x458a65ec, __VMLINUX_SYMBOL_STR(crypto_register_rngs) },
	{ 0xf22f9f20, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xf0f6f5e, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x9cec22b4, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x66e25d7e, __VMLINUX_SYMBOL_STR(crypto_alloc_rng) },
	{ 0xe6f9834e, __VMLINUX_SYMBOL_STR(add_random_ready_callback) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xcd1b2cd4, __VMLINUX_SYMBOL_STR(del_random_ready_callback) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44688871, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x5d656cef, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x8d3ca7a6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xca6692c9, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x56b51add, __VMLINUX_SYMBOL_STR(mutex_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

