﻿
基础路径设置:
Backward = 60
\\
basePath = App:seefs
base:\\

##################################################


### code 设置
code\node\Macro_Set.h

### code 功能测试
code\Set\phone\Macro_test.h


### 个人设置
private\
private\set\
private\set\Macro_Set_Info.h                                // 自动创建比较好 (能创建不下载)


### 测试项
public\test\
public\test\Macro_Info.h                                    // 总测试
public\test\contents\
public\test\contents\Macro_test_contents.h                  // ---文本
public\test\down\
public\test\down\Macro_test_down.h                          // ---下载
public\test\down\Macro_down_command.h                       // ------
public\test\down\Macro_down_curDown.h                       // ------正在下载
public\test\input\
public\test\input\Macro_test_input.h                        // ---输入
public\test\input\Macro_input_name.h                        // ------ +++
public\test\input\Macro_delete_set.h                        // ------
public\test\input\Macro_delete_restore.h                    // ------


### 
base:\\                                                     // 根目录 seefs, 避免重名
                                                            //   注意刷新频率；数据合并:
                                                            //   独占方式: 上传1，下载2，修改，删除1；上锁
### 配置
config                                                      //
config\Macro_ID.h                                           //
config\Macro_Banner.h                                       // 4张图片与信息
config\Image\                                               //
config\Image\banner_1.png                                   //


### 文本目录 源码
code\                                                       // 主NAV
code\node                                                   //
code\node\Simple_CTRL_B.h                                   //
code\README.txt


### 刷新，点击导航后下载
public\
public\Macro_Dav.h                                          // 账号-- image.png未处理----------------------------
public\life\__Init__.h                                      //------下载标记
public\life                                                 // 
public\life\Macro_Info.h                                    //----预测
public\life\
public\life\Macro_Predict_Job.h                             //--------职业分析
public\life\job\Macro_Job_Translator.h                      //------------1职业--外语
public\life\job\Macro_Job_Nurse.h                           //------------4职业--护士长
public\life\job\Macro_Job_National.h                        //------------5职业--国家领导
public\life\job\Macro_Job_Provincial.h                      //------------6职业--省级领导
public\life\job\Macro_Job_Teacher.h                         //------------7职业--中学教师
public\life\job\Macro_Job_Athlete.h                         //------------8职业--田径运动员
public\life\job\Macro_Job_Soccer.h                          //------------9职业--足球运动员
public\life\job\Macro_Job_SWAT.h                            //------------10职业--特警
public\life\
public\life\Macro_Predict_Virus.h                           //--------恶人预警
public\life\virus\Macro_Virus_Example.h                     //------------恶人--预测示例
public\life\virus\Macro_Virus_Killer.h                      //------------恶人--杀人犯
public\life\virus\Macro_Virus_Blacklist.h                   //------------恶人--黑名单
public\life\
public\life\Macro_Predict_Me.h                              //--------个人预测 ++
public\life\me\Macro_Me_Info.h                              //------------个人信息
public\life\me\Macro_Me_Group.h                             //-----------组信息 ++
public\life\
public\life\Macro_Predict_Celebrity.h                       //--------名人预测 **
public\life\csv\
public\novel                                                //
public\novel\Macro_Info.h                                   //----小说


### 存储--小说，可删，长期不用
cache\novel\
cache\novel\xiyou_dir.txt                                    // 小说
cache\novel\xiyou.txt                                        // 小说


### 源码
Produce                                                     // 项目


Share                                                       // 话题----提出话题；反对，支持，完善，补充

Model                                                       //--用于个人NAV模板，只下载一次
Model                                                       //--可能未上传，未发表

### 本地创建
private                                                     // 私有/被动下载, 不显示在主界面
private\                                                    // 用户设置==>设置如下Login+User

private\Login                                               //==>共享变量
private\Login                                               //------------(保存在Local, 内容不上传)
private\Login                                               //------------暂时不能改变主账号
private\Login                                               //------当前序号==>123
private\Login                                               //------主要账号+密码+Name==>有则替换默认账号==>seefs==>Macro_Dav.h
private\Login                                               //------默认账号+密码+Name==>存在APP中==>No
private\Login                                               //------扩展账号+密码+Name==>存在Local==>ceadx==>(未扩展)
private\Login                                               //------个人账号+密码+Name==>存在Local==>ceadx，限一个，绑定model(未绑定)
private\Login                                               //------* Secret: 用于文件加密
private\Login                                               //------* Verify: 用于私有文件验证, 隐藏在主界面

private\Config                                              //==>共享变量==>与NAV比较
private\Config                                              //------Model==>Disk2
private\Config                                              //------* Version
private\Config                                              //------* 总ID，删除ID数==>用于统计
private\Config                                              //------* 测试版==>不更新总ID

private\APP                                                 //下载

private\User                                                //-User + Name
private\User                                                //-------UserID:  初始化ID(私)，权限ID，高级ID
private\User                                                //-------GroupID: 小学生、初中生、自定义组，暂时不判别限制。可直接设置

private\Menu                                                //







