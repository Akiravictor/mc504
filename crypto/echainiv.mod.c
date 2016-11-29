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
	{ 0xeaf299f2, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x6593641d, __VMLINUX_SYMBOL_STR(aead_exit_geniv) },
	{ 0xcf5b6066, __VMLINUX_SYMBOL_STR(aead_init_geniv) },
	{ 0xe54ab237, __VMLINUX_SYMBOL_STR(aead_geniv_alloc) },
	{ 0x13354608, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xbc13f69e, __VMLINUX_SYMBOL_STR(aead_geniv_free) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

