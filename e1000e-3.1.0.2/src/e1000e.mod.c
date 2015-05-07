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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59caa4c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x954586c3, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xdab9e674, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7b1ac9f6, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe207f172, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc4dc87, __VMLINUX_SYMBOL_STR(timecounter_init) },
	{ 0xbc94def9, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd69b4263, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0xace1a41b, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x4da8c5b6, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xeb8dd8f8, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x8847af12, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x5a84632f, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x23787eb, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0xfe595e9e, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x6df8f4cd, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0x6d2785b5, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xff560223, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x890ba884, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x9f14c292, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x50885fdf, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa1db7223, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x623b7232, __VMLINUX_SYMBOL_STR(pci_disable_link_state_locked) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb4baa021, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc48063a3, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xb4c7c730, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x5b3a8e4a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0x49bf462c, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xa4df7eaf, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xc7df9a38, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd0f8c248, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x8da84edd, __VMLINUX_SYMBOL_STR(pci_enable_msix) },
	{ 0xe18b8447, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xb2af0207, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x36b7da1e, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x6fe1f286, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xa8806e07, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xde474c84, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0xaaa3b254, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x99eabae9, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x9b72099, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x35dcf570, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3390f479, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0xd4657932, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xdf202dc5, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0x425db2fe, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x74954462, __VMLINUX_SYMBOL_STR(timecounter_read) },
	{ 0x4650d402, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x3dab12cf, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x8f4c10ab, __VMLINUX_SYMBOL_STR(dev_kfree_skb_irq) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x724e6d22, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xc0bf6ead, __VMLINUX_SYMBOL_STR(timecounter_cyc2time) },
	{ 0x1962ad19, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xacb249ec, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xe62d69d4, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x50f17020, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x909eba43, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x1172c8f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf3f751e1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x559059c1, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x393bd17e, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe050fa68, __VMLINUX_SYMBOL_STR(pm_schedule_suspend) },
	{ 0x6f957436, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xba28f934, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1562c20b, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xb21fb61d, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x61fb248a, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xd81dcc3c, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x27ce85c, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x6ad11209, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x878eba8f, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x8ee635d2, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0x2d144e5f, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x361cf348, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa4f2e4b, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0x29c21a3b, __VMLINUX_SYMBOL_STR(pci_dev_run_wake) },
	{ 0x7a065f4a, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x3310bf11, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0x7fe750bc, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x28444ce3, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x423a11c9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9e0c711d, __VMLINUX_SYMBOL_STR(vzalloc_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xffb48f6b, __VMLINUX_SYMBOL_STR(pci_enable_msi_block) },
	{ 0x86dd282b, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x74ed7fcb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1a079ea7, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x74139b9b, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x76806fef, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4dbf45ac, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xdc0accc3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf3246f35, __VMLINUX_SYMBOL_STR(pcie_capability_write_word) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x40665b55, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x7c9142b2, __VMLINUX_SYMBOL_STR(pci_request_selected_regions_exclusive) },
	{ 0x34e1db21, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x899100e9, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xc0c5fd20, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xb01a6210, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptp";

MODULE_ALIAS("pci:v00008086d0000105Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000105Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000107Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000108Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000109Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000104Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000294Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001503sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000153Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000155Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001559sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015A3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CCB550C5DB7A4C6D8AC77DB");
