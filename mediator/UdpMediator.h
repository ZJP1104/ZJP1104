#pragma  once
#include"INetMediator.h"

class UdpMediator : public INetMediator
{
public:
	UdpMediator();
	 ~UdpMediator();//ʹ��ʱ������ָ��ָ�����࣬ʹ������������
	//��ʼ������
	bool  OpenNet();
	//�ر�����
	void  CloseNet();
	//��������
	bool  SendData(long lSendIp,char  *buf,int  nLen);
protected:
	void  DealData(long lSendIp,char  *buf,int  nLen);
};