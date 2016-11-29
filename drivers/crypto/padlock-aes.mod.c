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
	{ 0x7d252da6, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x7f804af9, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x942eb0b7, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0x8a045daa, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x876c21c6, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x582a1d93, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x24aac4d9, __VMLINUX_SYMBOL_STR(crypto_aes_expand_key) },
	{ 0x86819bc6, __VMLINUX_SYMBOL_STR(irq_ts_restore) },
	{ 0x4b0df156, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x441fa356, __VMLINUX_SYMBOL_STR(irq_ts_save) },
	{ 0x859be4ba, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00A6*");
