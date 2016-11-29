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
	{ 0x1469b635, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x1539be77, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x88e4da39, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2762517e, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x942eb0b7, __VMLINUX_SYMBOL_STR(crypto_register_alg) },
	{ 0x4e247ff2, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xb66e0a57, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xfbd069bc, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4b0df156, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x859be4ba, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeb9f7ace, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x8d3ca7a6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xcccf36dd, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x6781e76c, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xea2f5687, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x7f804af9, __VMLINUX_SYMBOL_STR(crypto_unregister_alg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d00002082sv*sd*bc*sc*i*");
