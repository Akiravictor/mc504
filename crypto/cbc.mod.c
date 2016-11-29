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
	{ 0x85d2b19f, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xb5daac39, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x4b0df156, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x859be4ba, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x2ddb3f51, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x7d252da6, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xacb93437, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0x94179386, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x14b272d9, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x8d3ca7a6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3dcb644f, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

