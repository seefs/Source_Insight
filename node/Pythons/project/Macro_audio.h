
基础路径设置:
basePath = D:\project\python\audio\iflytek_sdk_python
base:\\
tmpPath = D:\project\python\audio\tmp
tmp:\\
	


//git下载:
//
cd:tmp: git clone https://github.com/ssky87/iflytek_sdk_python




// 导出项目文件
//   Android Studio
AsFile:base:




// 代码
README.md
stt.py          //语音->文字
tts.py          //文字->语音
tts_on.py       //csdn下载(可用)
x64\libmsc.so
x86\libmsc.so

#
tts_on.py  173
//, Text="..estrella."

#
tts_on.py  40
//
// star pound
// libra estrella
//
// 一，二，三，四，五，六，七，八，九，零 (然后裁成10个)
// Uno, dos, tres, cuatro, cinco, seis, siete, ocho, nueve, cero
// One, two, three, four, five, six, seven, eight, nine, zero

// 心号
// 景耗 ..A (然后裁剪掉A)
// 井号, 心号, 景号, 境号, 颈号, 憬号, #号, 仅号, --------(都不行)
// 紧号, 锦号, 谨号 , 锦浩, 谨浩 , 锦耗, 谨耗-------------(后面3个连读行,分开不行)

// --加音量：
// 零 二，三 十，
// --连读：
//啊，，两，，十，，点，，分，，整，，啊，，
//啊，，一，，二，，三，，四，，五，，啊，
//啊，，六，，七，，八，，九，，零，，啊，
//啊，，心号，，井号，，景耗，，加号，，啊，
//啊，，现在是，，北京时间，，晚上，，中午，，下午，，上午，，啊，
//啊，，谨，，井，，仅，，心，，加，，啊，，--------(音量--低--70)(用中文逗号比较好)
//啊，，0，，灵，，零，，啊-------------------------(这个零是正常的)

// 两 十 上午 点 凌晨 分 整 下午 现在时间是 北京时间 晚上 中午
// 现在时间是北京时间晚上12点23分俩点整

//
//	通话记录
//	相机
//	外部连接
//	文件管理
//	互连网
//	电话簿 电话本
//	多媒体
//	设置
//	信息 短信
//	工具箱
//	喜马拉雅

//  充电器已连接
//  充电器已移除
//  充电完成
//  USB已连接
//  USB已移除

// test
//python_w tts.py
python_w tts_on.py
// test 单个
python_w tts_on_bak_user1.py
python_w tts_on_bak_user2.py



// 1.user--api--可用的发音人
https://console.xfyun.cn/services/tts
//  菜单:语音合成--在线语音合成--特色发音人--添加--操作--参数name
//  测试:通话记录,相机,外部连接,文件管理
// 越南语--xiaoyun
// 越南语--x2_ViVn_ThuHien
// 英语----x2_engam_laura
//
// 1.user--发音测试--小果
https://www.xfyun.cn/services/online_tts
//, "vcn": "xiaoyan"
//, "vcn": "felisa"
//, "vcn": "katherine"
//
// 2.API
https://www.xfyun.cn/doc/tts/online_tts/API.html#%E6%8E%A5%E5%8F%A3%E8%B0%83%E7%94%A8%E6%B5%81%E7%A8%8B
//--语速/音量/音高，
//, "speed": 40
//, "volume": 100
//, "pitch": 50

// 3.APP ID
https://console.xfyun.cn/services/tts
//--user:15986825892
//--psw:s0f0s0
        self.APPID = '7ae36f20'
        self.APIKey = 'a18eaede4c03971e66af2d7e5fccc043'
        self.APISecret = 'YzI2YzM1NGFhYTI0ZDQ4ZjQzYjJlMDRi'
//
//--user:17279766205
//--psw:s0f0s0 (未认证无法选web平台)
        self.APPID = '6b7f7b14'
        self.APIKey = 'NmRhMGFkZjY2MDgxZjg3Yjg1MTA2MmE0'
        self.APISecret = '7a95d686cc8d8d5deafd02345859874c'


