
### ������Ӫ��delta nv
// --SIM(HPLMN)���NV��
// "����������д_��Ӫ������_S.nv"
//
// --PLMN(VPLMN)���NV��
// "����������д_��Ӫ������_P.nv"


### nv build
PS\nv\operator_delta\operator_config_all\
PS\nv\operator_delta\operator_config_all\_DeltaNV���˵��.txt

PS\nv\internal\ps\common\h\
PS\nv\internal\ps\common\h\COMMON_LIST.h
//
build\[project_name]_builddir\imgĿ¼����[projectname]_deltanv.bin

// delta
PS\nv\export\ps\common\

// �������пɶ�̬���ز�����Ĭ��ֵ
PS\nv\operator_delta\operator_config_all\Default_P.nv
PS\nv\operator_delta\operator_config_all\Default_S.nv


### 460
// CN_CMCC
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="460"
// CMNET
//        <Item mcc="460" mnc="0"/>
//        <Item mcc="460" mnc="2"/>
//        <Item mcc="460" mnc="4"/>
//        <Item mcc="460" mnc="7"/>
//        <Item mcc="460" mnc="8"/>
// �ֿ���û����ӻ�����
//        <Item mcc="460" mnc="1"/>
//        <Item mcc="460" mnc="6"/>
//        <Item mcc="460" mnc="9"/>
// CTWAP
//        <Item mcc="460" mnc="3"/>
//        <Item mcc="460" mnc="12"/>
// CTNET
//        <Item mcc="460" mnc="11"/>
// CMIOT/CMMTM
//        <Item mcc="460" mnc="13"/>

// 8910��5��15
PS\nv\operator_delta\operator_config_all\CN_CMCC_S.nv
PS\nv\operator_delta\operator_config_all\CN_CMCC_P.nv


### 466
// TW_TWM
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="466"
// ����ӳ����ļ�
PS\nv\operator_delta\operator_config_all\TW_TWM_S.nv
PS\nv\operator_delta\operator_config_all\TW_TWM_P.nv

//
��������������⣬ʵ������ǣ�浽volte��ims���������⡣
һ��ķ���ȥ�޸�ָ����Ӫ�̵�ims������nv��

//
S89TĿǰ�������췢���������⡣����һ��EVS�����ǲ�֧�֣�
����չѶҲ���˸Ķ�������Ҳ�Ǹ�nv��
�������ǿ��Ҫ�󣬿����Ȳ��ܣ�
��һ�� ������3G�����⣬����֮���ұ��˰汾��̨�巴��û��Ч�������cq��SPCSS01070420��
���Թ�ע��״̬�������Ҫ��ϵģ������Ūһ�¡������ҰѸĵ�nv�ύһ�� 
//
SPCSS01072982 ����XCAP����
SPCSS01072886 ����SMS over IMS����
���CQ��SPCSS01070420

###
//
F76T�ⵥ�ͻ����±���һ����Ӫ�̵������⣬������tmobile��
�е�ʱ�򿪻�ע�᲻��volte�����Դ�绰ʧ�ܡ�
�ͻ������ץ��log������չѶ�����С�cq����SPCSS01071425��
������Ƶ��logҲ���ϴ��ˡ�
�����������ͻ���Ⱥ�ˡ�����չ�����������Ⱥ��

 
### log--apn
// apn
mmipdp info MMIAPIPDP_Active: priority:3, app_handler:0x27, apn:Internet, dual_sys:0
mmipdp info MMIAPIPDP_Active: priority:3, app_handler:0x27, apn:hos, dual_sys:0
// mcc--mcc
roaming status: 0, net isroaming: 0, net mcc: 466, sim mcc: 466
// hostbyname
tcpip: sci_async_gethostbyname - url(xcap.ims.taiwanmobile.com), timeout(4000 ms), netid(81c8070c)


### 425 ��ɫ��/����˹̹
// IL_Partner
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="425"
// ����ӳ����ļ�
PS\nv\operator_delta\operator_config_all\
PS\nv\operator_delta\operator_config_all\IL_Cellcom_P.nv
PS\nv\operator_delta\operator_config_all\IL_Cellcom_S.nv
PS\nv\operator_delta\operator_config_all\IL_Partner_P.nv
PS\nv\operator_delta\operator_config_all\IL_Partner_S.nv


### ��ɫ��
// 
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="515"
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="260"
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="310"
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="222"

// cp
apnPath = PS\nv\operator_delta\operator_config_all\
apn:test\

cp apn:test\test_P.nv apn:test\IL_GolanTelecom_P.nv
cp apn:test\test_P.nv apn:test\IL_RamiLevi_P.nv
cp apn:test\test_P.nv apn:test\IL_Widely_P.nv
cp apn:test\test_P.nv apn:test\IL_019_P.nv
cp apn:test\test_P.nv apn:test\IL_K_SIM_P.nv
cp apn:test\test_S.nv apn:test\IL_GolanTelecom_S.nv
cp apn:test\test_S.nv apn:test\IL_RamiLevi_S.nv
cp apn:test\test_S.nv apn:test\IL_Widely_S.nv
cp apn:test\test_S.nv apn:test\IL_019_S.nv
cp apn:test\test_S.nv apn:test\IL_K_SIM_S.nv


### 259/15 Ħ������
//
PS\nv\operator_delta\operator_config_all\Index.xml  mcc="259"
// L4Ĭ���������������������
PS\nv\operator_delta\operator_config_all\
PS\nv\operator_delta\operator_config_all\MD_IDC_P.nv
PS\nv\operator_delta\operator_config_all\MD_IDC_S.nv

// precondition? 
// sip_PreconditionEnabledOnActive? 
// resourceAlwaysReady? 
// ConfPreconditionEnabled? 
// heldToneEnable? 
PS_NV_PARAMS\NV_PARAM_TYPE_PLMN_DELTA_NV\ims_plmn_nvinfo\sip_preconditionEnabled=0


###
https://www.cnblogs.com/neo-java/p/6830319.html

