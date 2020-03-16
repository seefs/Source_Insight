
基础路径设置: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//目录[Num][Ca]:
Save:node\android\sys\Macro_Sys_Kernel.h 



/***********************************************************************/

源码编译完成后，如果需要修改内核配置，可参考如下方法
先配置
make kernel-menuconfig
后保存
make kernel-savedefconfig

具体定义
kernel/Android.mk
kernel-savedefconfig: $(TARGET_KERNEL_CONFIG)
        cp $(TARGET_KERNEL_CONFIG) $(KERNEL_CONFIG_FILE)
kernel-menuconfig:
        $(hide) mkdir -p $(KERNEL_OUT)
        $(MAKE) -C $(KERNEL_DIR) $(KERNEL_MAKE_OPTION) menuconfig
一般cpu的内核配置文件是
kernel/arch/xxxx/configs/xxx_defconfig
//kernel/arch/arm64/configs/sprd_sharkle_defconfig

编译生成后的配置文件
out/target/product/xxxxx/obj/KERNEL_OBJ/.config
//out/target/product/sp9820e_1h10/obj/u-boot15/.config
out/target/product/sp9820e_1h10/obj/KERNEL/.config


对比两份文件有较大的差异,原来还有一部分配置来自Kconfig文件，
内核会将Kconfig文件的配置加上上去,如config USELIB,配置成CONFIG_USELIB。
所以看代码的时候，看某个CONFIG_XXX_XXXX的值，要看最终的配置文件out/target/product/xxxxx/obj/KERNEL_OBJ/.config

在Andoird7.0上,使用make menuconfig会一直卡死，要先在终端敲入export USE_NINJA=false，然后再make menuconfig




/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








