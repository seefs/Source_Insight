

### VoLTE
//VoLTE ��������Ӧ�ļ�
app:phone\h\ims_toggle_mnc_table.h   242  // mcc 460
app:phone\h\ims_toggle_mnc_table.h   250  // mcc 466
app:phone\h\ims_toggle_mnc_table.h   222  // mcc 425
app:phone\h\ims_toggle_mnc_table.h   95   // mcc 310
app:phone\h\ims_toggle_mnc_table.h   76   // mcc 259
app:phone\h\ims_toggle_mnc_table.h   33   // mcc 222
app:phone\h\ims_toggle_mnc_table.h   xxx  // 
app:phone\h\ims_toggle_mnc_table.h   xxx  // 
app:phone\h\ims_toggle_mnc_table.h   xxx  // 
app:phone\h\ims_toggle_mnc_table.h   xxx  // 










// --SPCSS01115780
// VoLTE���������÷�����
//   ����֧��ĳһ��Ӫ�̵�VoLTE���ܣ�
//   ��Ҫmodem�����ø���Ӫ�̵������Ӫ�̲�����------------------P/S NV
//   ������MMI��VoLTE����������Ӹ���Ӫ�̶�Ӧ��MCC��MNC---------table
//   �Լ�����Ӫ�̶�Ӧ��ims����Ԥ��APN��-------------------------APN


// VoLTE������
//T117ƽ̨Ĭ�Ͽ���VoLTE���������ܣ��û���ͨ�����·�ʽ�԰��������ܽ��п�����رգ�
//    #*8378#1# -> Telephony -> IMS White List Set -> Close/Open
//�����������ܹرգ���Ĭ��������Ӫ��֧��VoLTE���ܲ�����ʾVoLTEͼ�꼰�˵���
//
//	�û��ɸ�����Ӫ�̵Ķ�ӦMCC��MNC��ims_toggle_mnc_table.h�Զ�������������Ϣ��
//	1. �Ƿ�Ĭ�Ͽ���VoLTE
//	2. ״̬���Ƿ���ʾVoLTEͼ��
//	3. UI�����Ƿ���ʾVoLTE�˵�


// �磺
//     460,3   ,0,1,1,0,

//	���ֶν���˵�����£�
//	typedef struct
//	{
//	    uint16 mcc;             //ָ����Ӫ�̶�Ӧ�� MCC
//	    uint16 mnc;             //ָ����Ӫ�̶�Ӧ�� MCC
//	    char ims_call_icon;     /*
//	                              ״̬��VoLTEͼ����ʾ����:
//	                              0: VoLTE ͼ��
//	                  1: HD ͼ��
//	                            */
//	    char ims_icon_status;   //״̬���Ƿ���ʾ VoLTE ͼ��
//	    char ims_toggle_status; /*
//	                              �Ƿ���ʾ VoLTE �˵��Լ��Ƿ�Ĭ�Ͽ���VoLTE����
//	                              0: Ĭ�� VoLTE ���ܹرգ�VoLTE �˵�����ʾ
//	                             -1: Ĭ�� VoLTE ���ܿ�����VoLTE �˵���ʾ
//	                              2: Ĭ�� VoLTE ���ܿ�����VoLTE �˵�����ʾ
//	                              3: Ĭ�� VoLTE ���ܹرգ�VoLTE �˵���ʾ
//	                            */
//	    char reserved;          //����λ
//	}MMI_IMS_TOGGLE_MNC_T;














