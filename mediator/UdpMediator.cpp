#include"UdpMediator.h"
#include"UdpNet.h"
#include"iostream"
using  namespace std;

UdpMediator::UdpMediator()
{
	m_pNet=new UdpNet(this);
}
UdpMediator::~UdpMediator()//ʹ��ʱ������ָ��ָ�����࣬ʹ������������
{
	delete m_pNet;
	m_pNet=NULL;
}
//��ʼ������
bool  UdpMediator::OpenNet()
{
	if(!m_pNet->InitNet())
	{
		return false;
	}
	return  true;
}
//�ر�����
void  UdpMediator::CloseNet()
{
	m_pNet->UnInitNet();
}
//��������
bool  UdpMediator::SendData(long lSendIp,char  *buf,int  nLen)
{
	if(!m_pNet->SendData(lSendIp,buf,nLen))
	{
		return false;
	}
	return  true;
}

void  UdpMediator::DealData(long lSendIp,char  *buf,int  nLen)
{
	//TODO:ͨ���ź���QT���͸�������
	cout<<buf<<endl;
}