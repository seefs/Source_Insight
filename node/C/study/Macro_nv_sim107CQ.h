
//Ŀ¼:
Save:node\C\study\Macro_nv_sim107CQ.h \[1.1\] Volte
Save:node\C\study\Macro_nv_sim107CQ.h \[1.2\] Call
Save:node\C\study\Macro_nv_sim107CQ.h \[1.3\] DTMF
Save:node\C\study\Macro_nv_sim107CQ.h \[1.4\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.5\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.6\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.7\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.8\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.9\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.10\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.11\] 
Save:node\C\study\Macro_nv_sim107CQ.h \[1.12\] 




[1.1] __Volte__

### [FAQ124077] Ϊʲô�ն���һ���µ�������פ����VoLTE��
//	��һ���µ������£��ն˿���VoLTE���ܺ�ֻ��פ��4G��פ����VoLTE������������ԭ��
//
//	1. ���粻֧��VoLTE
//	����Ӫ�����绹��֧��VoLTE����ʹ����ͬSIM������ԱȻ������Ų顣
//
//	2. SIM��û�п�ͨVoLTEҵ��
//	���SIM��û�п�ͨVoLTEҵ���ն�פ��VoLTE��ʧ�ܣ���ʹ����ͬSIM������ԱȻ������Ų顣
//
//	3. ��Ӫ������û�м����ն�VoLTE������
//	�����Ӫ������û�м����ն�VoLTE�����������ն˲��ᷢ��VoLTEע�ᡣ����Ŀǰ������������Ӫ�̵�VoLTEҵ��֧�ֶ������ơ�
//	Ϊ�����û���VOLTE���ܲ����Ƶ�������ʹ��VOLTE�������⣬��İ�������������֪VOLTE֧�ֲ����Ƶ������У��ն�Ĭ�Ϲر�VOLTE���ܡ�
//	ֻ�ж��������Ѿ����Թ�����֪����֧��VOLTE�����Ѿ������Ƶ����磨���й��ƶ�����VOLTE����Ĭ�ϴ򿪡��ɲο�FAQ119972�����VoLTE�����������������
//	���ų����ϼ�����ն����޷�פ��VoLTE����Ӧ���ն��ڸ���������Ҫ���������VoLTE�������á����ṩ�������Ի��ͶԱȻ�פ�����̵�log�Խ��о��������
//	���и���Ӫ�̵�VoLTE���������ļ���Ҳ��һ���ṩ�����ο���


### [FAQ111795] �ͻ�����NV����ע��VOLTE�Բ鷽����
//	NV��汾��ƥ���������
//	CP Log���ն˷��������IMSע����ϢREGISTER��Security-Clientͷ��Ķ˿�port-c��port-s����0��������ʾ��
//	[IMS]:msg -> REGISTER
//	[IMS]:Security-Client: ...;port-c=0;port-s=0,...


### [FAQ202173044] ��δ�log��ȷ��VoLTEͼ���Ƿ���ʾ��
//  1. ȷ��һ�µ�ǰVoLTE�����������Ƿ�رգ�ȷ�Ϸ������£�
//      #*8378#1# -> Telephony -> IMS White List Set -> Close/Open
//  2. ���VoLTE�����ǿ�����״̬�������ڽӿ�MMIAPIPHONE_volte_icon_display_set�����Ӵ�ӡ��Ϣ��ӡs_volte_icon_display_set[dual_sys]��ֵ�鿴�Ƿ���ȷ��
//	3. ˢ��VoLTEͼ��Ľӿڣ�StatusAreaSetVolteInfo 


### [FAQ115342] ������˫Volte��ע����ƣ�
// So, two SIM cards support the VOLTE function should show two "Volte" icons.


### [FAQ123107]�ն˲���VoLTE�绰��ʲô�����ͨ���������ʾHDͼ�ꣿ
//	�ն�ͨ�������HDͼ���ʶ�����ն�ͨ������ʹ�õ��������뷽ʽ�ǿ�����롣
//
//	�ն˲���VoLTE�绰ʱ���绰����INVITE��Ϣһ���Ĭ��Я��AMR-WB��AMR���ֱ��뷽ʽ��֧��EVS���ն˻���Я��EVS���뷽ʽ��
//
//	��VoLTE�绰���������У��ն�������Э�̾���VoLTE�绰������ʹ�õ��������뷽ʽ�����Э�̽��ΪAMR-WB��EVS����ͨ������ʹ�ÿ�����룬
//ͨ��������ʾHDͼ�ꣻ���Э�̽��Ϊ��֧��AMR����ͨ������ʹ��խ�����룬ͨ�����治��ʾHDͼ�꣨�����ʾ4G����VoLTE�������Ƿ�VoLTE����
//
//	��ˣ��ն˲���VoLTE�绰ʱ��ͨ�������Ƿ���ʾHDͼ�꣬ȡ�����ն˺������ý��Э�̽������Զ��ֻ��Ƿ�֧��VoLTEû��ֱ�ӹ�ϵ��










[1.2] __Call__

### ����ʧ�����⣬��ο�[FAQ202172533] �ṩlog




[1.3] __DTMF__


### [FAQ119642] չ���ն�Volte�绰DTMF��������ʽ
//	ĿǰչѶ�ն�Volte�绰�����е�DTMF��������ʽ��
//	1. �绰���������о���telephone-eventЭ�̣��绰������ͨ���ض���RTP���ݷ��ͣ���ӦNV:support_named_televt����Ϊ1
//	2. ������Э�̣��绰�����󽫶�Ӧ��Tone���������������з��ͣ�ͬCS�绰������ӦNV:support_named_televt����Ϊ0


### [FAQ202173392]ͨ��Ӧ��UI���ƺ���ν��DTMFʧЧ
//	ʲô������Է���DTMF
//	��Ҫ��ע��������������Բ飺
//	1. ͨ����ʲô������Է���DTMF���жϽӿ�ʹ��MMICC_IsAllowSendDtmf����ѭЭ�鲻�����޸ġ�
//
//	2. ����DTMF��Ӧ�ýӿ���SendDtmfByChar
//
//	  �˽ӿ���Ҫʵ�֣�
//	  - ����tone������
//	  - ���ݵ�ǰͨ��״̬����START/STOP�ɶ�ָ����ͼ���ɸ��ݱ��� is_stop_immediately ���ƻ���
//
//	3. �����������ɹ�עMMIAPICC_SendDtmf�жԵ�ǰ������жϣ����½�UI��������ӣ���֤���Ե��õ�MMICC_SendSingleDtmf��








[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 





