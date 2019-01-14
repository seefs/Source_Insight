/***********************************************************************/
/****************************** base  **********************************/
/***********************************************************************/

[1.0] ----------------------------------

[1.1] ��װjdk
C:\Program Files\Java\jdk1.8.0_05\lib

//env:
JAVA_HOME = C:\Program Files\Java\jdk1.8.0_05
path	 += %JAVA_HOME%\bin;%JAVA_HOME%\jre\bin;
CLASSPATH = .;%JAVA_HOME%\lib;%JAVA_HOME%\lib\tools.jar
//ver:
java -version


[1.2] ��װ gradle
//��1���Զ�����, ����·��:
C:\Users\Administrator\.gradle\wrapper\dists\gradle-4.6-all\bcst21l2brirad8k2ben1letg
	
//���û����������½� GRADLE_HOME Ϊ
C:\Users\Administrator\.gradle\wrapper\dists\gradle-4.6-all\bcst21l2brirad8k2ben1letg\gradle-4.6
//Ȼ����ϵͳ������Path������
%GRADLE_HOME%\bin
//������ɺ�����������⣬����AS

//�鿴�汾��:
gradlew -v
//	Gradle 4.6

	
[1.3] Terminal ·��:
//Ĭ�ϲ��ø�
Setting��->Tools���C>Terminal���C>Shell Path:cmd.exe


[1.4] ADB ·��:
//ϵͳ������Path������
E:\save\android\sdk\platform-tools


[1.5] Git ·��:
//ϵͳ������Path������
D:\Program Files\Git\bin
//�鿴�汾��:
git - -version


[1.6] //groovy ·��:
//ϵͳ������Path������
D:\groovy-2.4.12\bin
//�鿴�汾��:
groovy -version


[1.7] gradlew����:

1) ���������������,��ʹ������˶��������,��Ȼ����,�����������е� apk��(���� release �� dubug)
gradlew build

2) ���벢��ӡ��־
gradlew build --info

3) clean
gradlew clean

4) ���벢��� debug ��
gradlew installDebug

5) �鿴�����İ汾
gradlew -v

6) �鿴����������
gradlew -q app:dependencies

7) �鿴��ϸ��������Ϣ
gradlew dependencies --info








/***********************************************************************/
/*************************** source code *******************************/
/***********************************************************************/

[2.0] ----------------------------------

[2.1] �޸�AS�����ļ�
//��AS��binĿ¼�£���studio64.vmoptions�ļ����޸ĳ�������ֵ��
//C:\Program^Files\Android\Android^Studio\bin\studio64.exe
C:\Program^Files\Android\Android^Studio\bin\studio64.exe.vmoptions
//	-Xms256m
//	-Xmx1280m
//	-XX:ReservedCodeCacheSize=240m
//	-XX:+UseConcMarkSweepGC
�޸ĳ�
//	-Xms1024m
//	-Xmx2048m


[2.2] ����AS��Ŀ�����ļ�
//1������ȫ�ֱ���һ�Ρ� 
//2���鿴out/host/linux-x86/framework/idegen.jar�Ƿ���ڣ� 
out/host/linux-x86/framework/idegen.jar
//���Ѳ����ڣ���ִ��������������������
source build/envsetup.sh
lunch [ѡ���ȫ�ֱ���ʱ�Ĳ���]
mmm development/tools/idegen/
//3��ִ�������������������������ļ���
development/tools/idegen/idegen.sh
development/tools/idegen/templates/android.ipr


[2.3] ����ϵͳԴ������AS
//1����ʱ�ڸ�Ŀ¼�£����Ѿ�������android.ipr��android.iml�����Խ�����Դ���뵼��AS�� 
./android.ipr
./android.iml
//2������ѡ������ģ����� 
./android.iml excludeFolder
//��Щ���뵼��AS��ģ�飬����ͨ����android.iml�м���excludeFolder���ﵽ����Ч����

//	<excludeFolder url="file://$MODULE_DIR$/.repo"/>
//	<excludeFolder url="file://$MODULE_DIR$/abi"/>
//	<excludeFolder url="file://$MODULE_DIR$/frameworks/base/docs"/>
//	<excludeFolder url="file://$MODULE_DIR$/art"/>
//	<excludeFolder url="file://$MODULE_DIR$/bionic"/>
//	<excludeFolder url="file://$MODULE_DIR$/bootable"/>
//	<excludeFolder url="file://$MODULE_DIR$/out"/>
//	<excludeFolder url="file://$MODULE_DIR$/pdk"/>
//	<excludeFolder url="file://$MODULE_DIR$/prebuilts"/>
//	<excludeFolder url="file://$MODULE_DIR$/sdk"/>
//	<excludeFolder url="file://$MODULE_DIR$/system"/>
//	<excludeFolder url="file://$MODULE_DIR$/tools"/>
//	<excludeFolder url="file://$MODULE_DIR$/trusty"/>
//	<excludeFolder url="file://$MODULE_DIR$/vendor"/>
//	...
//3����һ�ε���ʱ���е㳤�����ĵȴ�
��Android Studio �д� android.ipr�ļ�


[2.4] ����AS��JDK��SDK
//�������Щ��������Ϊ�����ڿ������ʱ���ܹ����ɡ���ȷ����ʾ����ת����Ӧ�ĵط��� 
//����һ������֮��ĵȴ��ڼ�պ�������������һ��JDK��SDK�� 
//��AS�в�����ͼProject Structure���ã���SDKs�����м�������JDK��SDK�� 
//����һ���µ�JDK,����ȡ��Ϊ1.7(No Libraries)��Ȼ��ɾ��classpath��ǩҳ�����jar�ļ��� ��������ȷ��ʹ��AndroidԴ����Ŀ��ļ��� 

//https://blog.csdn.net/asahinokawa/article/details/79115381
...
	
//https://www.cnblogs.com/l2rf/p/6433773.html
setting->modules->android->del ...
setting->sdks->del ...
���ŵ���Ӻŵ�JARs or directories
����Դ���frameworks��external�����õ���������תĿ¼���ӵ������У�Ȼ��apply���ɡ�




/***********************************************************************/
/****************************** config *********************************/
/***********************************************************************/

[3.0] ----------------------------------

[3.1] as������
//as��������
https://github.com/pingfangx/TranslatorX/wiki
C:\Program^Files\Android\Android^Studio\lib\resources_zh_CN_AndroidStudio_3.2.1_r1.jar


[3.2] ����SDK
Tools �C>SDK Manager->sdk19->apply 


[3.3] android studio�ı���ɫ����
//1)������android studio�µ�ǰ����ΪDarcula��
//	��File->settings ->Appearance -> theme ��������Ϊ Darcula��

//2)������ɫ��ص�jar����
//	���ص�ַ��github���ص�ַ
//	https://github.com/OtaK/jetbrains-monokai-sublime
//
//3)��Android Studio��file->import setting ѡ���ѹĿ¼�µ�Monokai-Sublime.jar��
//	��������ε��� Monokai-sublime.jar ��ͼ
//
//	��jetbrains-monokai-sublime-master����ѡ���Ӧ��jar."OK"
//	��ѡEditorColors ,"OK"��
//	����Android studio.
//	�������� settings��ѡ�� editor  ,ѡ�� colors& Fonts,  "theme"�ұ߲˵�ѡ�� Monkai-Sublime
//	���Apply �� ��ok,���Կ����޸�֮���Ч���ˡ�


[3.4] ���������ӳ��ð�ť
//��ʾ toolbar:
view->toolbar

//1.File --> Settings--> Appearance & Behavior --> Menus and Toolbars,
//���Ҳ��ѡ����ѡ�� Main Toolbar 
D:\SVN\app\CS_Home_JXJ1\app\src\main\res\drawable-hdpi\mediaplay_loop.png.png


[3.5] �ļ���������
//1��IDE����
File > Settings > Appearance & Behavior > Appearance��
//	��default fonts��ΪMicrosoft YaHei���ĳ�����SimHei,SimSunҲ�У������˾����źںÿ�Щ����
//2���������������ģ����������TextView֮��Ŀؼ��Ͼ���ʾΪ���룬�磺xxx.setText("����")��
//	�����ڼ���������Ŀ����ԭ��Eclipse�����ģ�һ�����������⣬ͬ�¾�˵��Properties��ı���ĳ�GBK�Ϳ����ˡ�
//	�Ȳ������ĶԴ���������ôһ��ȷʵ�Ͳ��������ˣ����������õ���Android Studio�����Ҹ���ô���أ�
File > Settings > Editor > File Encodings 
//	Project Encoding��ΪUTF-8��
//	Ϊ��ͳһ�淶����Ҳ������Encoding��Ҳ����ΪUTF-8�ˡ�
ѡ��Apply��Ӧ�øղŵĸ��ģ�Ȼ������Android Studio
//3��Gradle ����
//	����������������Gradle��ʾ������������⣬���Բο�http://blog.csdn.net/sljjyy/article/details/11976099����Ŀǰû����������






/***********************************************************************/
/******************************* Demo  *********************************/
/***********************************************************************/

[5.0] ----------------------------------

[5.1] AppTest ǩ��
D:\SVN\app\APPTest1

//gradle�汾: gradle-4.6-all
D:\SVN\app\APPTest1\gradle\wrapper\gradle-wrapper.properties
//	distributionPath=wrapper/dists
//	distributionUrl=https\://services.gradle.org/distributions/gradle-4.6-all.zip
//	zipStoreBase=GRADLE_USER_HOME

//����jar��: 
D:\SVN\app\APPTest1\app\build.gradle
//	dependencies {
//		testImplementation 'junit:junit:4.12'
//		androidTestImplementation 'com.android.support.test:runner:1.0.2'
//		androidTestImplementation 'com.android.support.test.espresso:espresso-core:3.0.2'
//		implementation 'com.google.code.gson:gson:2.8.5'
//	}

//ǩ��jks:
//1����ʽ1��ͨ��Android Studio����ǩ����
E:\save\android\ApkSigned\test.jks
//2����ʽ2��ͨ�������еķ�ʽ����ǩ����
gradlew assembleRelease


//����apk:
D:\SVN\app\APPTest1\app\release\app-release.apk


[5.2] ��θ�����Ŀ����
�Ҽ�->�ع�->rename
//	1. �ر�Android Studio 
//	2. �޸�project����·�����ļ�������Ϊ[NewName]
//	3. ��Android Stuido��import�µ�[NewName]·������(����Ҫ,����import���̣�Android Studio���Զ��޸Ĳ�����ص�project��������)
//	4. �޸ĸ�Ŀ¼�µ�.iml�ļ���Ϊ[NewName].iml�������ļ��е�external.linked.project.id=[NewName]
//	5. �޸�.idea/modules.xml�����
//	<module fileurl="file://$PROJECT_DIR$/[NewName].iml" filepath="$PROJECT_DIR$/[NewName].iml" />


[5.3] ���� eclipse project
//File----new---import��ѡ��һ��eclipseproject�����������project�����ļ��У�
//Ȼ��ᱨ����
//"There are unrecoverable errors which must be corrected first"
//Ȼ����ô�ģ���eclipse��project�����the?project.properties
D:\SVN\app\CS_Home_JXJ\project.properties
//	target=android-21
//	android.library=false
//	android.library.reference.1=../library_new
ɾ�� android.library.reference.1=../appcompat_v7

Ȼ�����뵽Android Studio����
֮�����仰���뵽app/build.gradle:
D:\SVN\app\CS_Home_JXJ1\cS_Home\build.gradle
//	dependencies{
//		compile project(':library_new')
//		compile files('libs/juhe_sdk_v_2_7.jar')
//		compile files('libs/org.json.jar')
//		compile files('libs/sun.misc.BASE64Decoder.jar')
//		compile files('libs/zxing.jar')
//		compile fileTree(include: ['*.jar'], dir: 'libs')

//	}

�п��ܵ���֮��˵SDK��֧����İ汾�����ʱ������԰�װ��Ӧ��ƽ̨��
Ҳ�����޸�app/build.gradle�ļ�����Ķ�targetSDK�汾���޸�dependicies�İ汾


D:\SVN\app\CS_Home_JXJ1\cS_Home\build.gradle
//    compileSdkVersion 28
//    minSdkVersion 19
//    targetSdkVersion 28


//�Ա�������Ŀ�޸�:
D:\SVN\app\CS_Home_JXJ1\.idea\gradle.xml
//	<option name="modules">
//	  <set>
//		<option value="$PROJECT_DIR$" />
//		<option value="$PROJECT_DIR$/cS_Home" />
//	  </set>
//	</option>
�޸ģ�"$PROJECT_DIR$/cS_Home"

D:\SVN\app\CS_Home_JXJ1\.idea\modules.xml
//    <modules>
//      <module fileurl="file://$PROJECT_DIR$/CS_Home_JXJ1.iml" filepath="$PROJECT_DIR$/CS_Home_JXJ1.iml" />
//    </modules>

//�Ա�������Ŀ�޸�:



/***********************************************************************/
/******************************** App  *********************************/
/***********************************************************************/

[6.0] ----------------------------------

[6.1] һ��app������APK
//һ��app������APK
Save:SI\node\ToolsMsg\as\Macro_android_studio_app.h \[1.1\]


[6.2] Android-Studio�����Ŀ��������ͬһ��ģ��
//Android-Studio�����Ŀ��������ͬһ��ģ��
Save:SI\node\ToolsMsg\as\Macro_android_studio_app.h \[2.1\]



/***********************************************************************/
/***************************** as other  *******************************/
/***********************************************************************/





