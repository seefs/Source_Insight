﻿
基础路径设置:
Save:node\android\project\Macro_file_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\apk_work\DNC_QB
base:\\





//
https://lanhuapp.com/web/#/user/register?inviteSign=1
//
seefs@163.com




@Route
//ARouter框架是分组管理




// 加密
Cipher cipher = Cipher.getInstance(transformation);



/**
 * content: 加密内容
 * slatKey: 加密的盐，16位字符串
 * vectorKey: 加密的向量，16位字符串
 */
public String encrypt(String content, String slatKey, String vectorKey) throws Exception {
    Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
    SecretKey secretKey = new SecretKeySpec(slatKey.getBytes(), "AES");
    IvParameterSpec iv = new IvParameterSpec(vectorKey.getBytes());
    cipher.init(Cipher.ENCRYPT_MODE, secretKey, iv);
    byte[] encrypted = cipher.doFinal(content.getBytes());
    return Base64.encodeBase64String(encrypted);
}


// sp+密码+iv -> 私钥
byte[] bytes = EncryptUtils.decryptHexStringAES(text, 
		EncryptUtils.encryptMD5ToString(key.getBytes()).getBytes(), 
		"AES/CBC/PKCS5Padding", 
		walletVM.hexString2Bytes(walletVM.iv));

// EOS->LOS, ->公钥
// 私钥+密码+iv -> sp


// 钱包地址
我暂时还不知道根据什么规则，明天查下
// 规则
a-z与1-5组合的12位字符；--由前端代码随机生成
DNC钱包地址规则： a-z和1-5组合，小写字母开头， 数字1-5 加上任何字母组合。
不能防暴力破解


//
如果创建钱包后，还未导出私钥，已经忘记了密码。是不是等于私钥已经丢失了

1.请好友创建后的具体界面，不明白。
2.请好友创建，需要不需要保存公私钥，否则可能丢失。
  登录界面判断一次。取服务器数据，成功则进入主界面。
  支付成功之前，钱包地址可能无效。
  创建时，只能同时创建一个。除非时间失效。
  失效前判断一次我已支付。
  启动logo可能会有延时--直到创建失效、有效。
3.实际操作，点我已支付，即保存公私钥，用于跳过登录进主界面。
4.导入功能，有新理解。
5.收款扫一扫，不明白。
6.收款分享地址，图片还是文字？用的钱包地址？


// 新问题
1.在主界面更新App


// 细节
未加滚动--注册页
没有判断密码的复杂度。




