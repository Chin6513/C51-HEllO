#include<reg52.h>
#define uint unsigned int

sbit N1=P2^3;
sbit N2=P2^4;
sbit N3=P2^5;
sbit N4=P2^6;
uint xms,i,j,m,n;

void main()
{
	void delay(uint xms);
	
	P0=0x2c;			//�������ʾH
	N4=0;				//���ĸ������
	delay(1000);	
	N4=1;				//ת���������������
	N3=0;
	delay(1000);
	N3=1;				//ת�����ڶ��������
	N2=0;
	delay(1000);
	N2=1;				//ת������һ�������
	N1=0;
	delay(1000);
	
	for(m=500;m>0;m--)	//��һ���������ʾH���һ����ʾE
		{
			N1=0;
			P0=0x2c;		//��һ���������ʾH
			delay(1);
			N1=1;			//�رյ�һ�������
			N4=0;			//�򿪵��ĸ������
			P0=0x86;		//���ĸ��������ʾE
			delay(1);
			N4=1;			//�رյ��ĸ������
		}
	
	for(m=500;m>0;m--)	//��һ���������ʾH��������ʾE
		{
			N1=0;
			P0=0x2c;
			delay(1);
			N1=1;
			N3=0;
			P0=0x86;
			delay(1);
			N3=1;
		}
		
	for(m=500;m>0;m--)	//��һ���������ʾH�ڶ�����ʾE
		{
			N1=0;				//��ʱHE���
			P0=0x2c;
			delay(1);
			N1=1;
			N2=0;
			P0=0x86;
			delay(1);
			N2=1;
		}
		
	for(m=350;m>0;m--)	//��һ�������������ʾHE���ĸ��ұ���ʾl
		{
			N1=0;
			P0=0x2c;
			delay(1);
			N1=1;
			N2=0;
			P0=0x86;
			delay(1);
			N2=1;
			N4=0;
			P0=0x7d;
			delay(1);
			N4=1;
		}
	for(m=350;m>0;m--)	//��һ�������������ʾHE���ĸ������ʾl
		{
			N1=0;
			P0=0x2c;
			delay(1);
			N1=1;
			N2=0;
			P0=0x86;
			delay(1);
			N2=1;
			N4=0;
			P0=0xaf;
			delay(1);
			N4=1;
		}
	for(m=350;m>0;m--)	//��һ�������������ʾHE�������ұ���ʾl
		{
			N1=0;
			P0=0x2c;
			delay(1);
			N1=1;
			N2=0;
			P0=0x86;
			delay(1);
			N2=1;
			N3=0;
			P0=0x7d;
			delay(1);
			N3=1;
		}
	for(m=350;m>0;m--)	//��һ�������������ʾHE�����������ʾl
		{
			N1=0;
			P0=0x2c;
			delay(1);
			N1=1;
			N2=0;
			P0=0x86;
			delay(1);
			N2=1;
			N3=0;
			P0=0xaf;
			delay(1);
			N3=1;
		}
	for(m=300;m>0;m--)	//��һ�������������ʾHEl���ĸ��ұ���ʾl
		{
			N1=0;
			P0=0x2c;
			delay(1);
			N1=1;
			N2=0;
			P0=0x86;
			delay(1);
			N2=1;
			N3=0;
			P0=0xaf;
			delay(1);
			N3=1;
			N4=0;
			P0=0x7d;
			delay(1);
			N4=1;
		}
	for(m=250;m>0;m--)	//��һ�������������ʾHEl���ĸ������ʾl
		{
			N1=0;
			P0=0x2c;
			delay(1);
			N1=1;
			N2=0;
			P0=0x86;
			delay(1);
			N2=1;
			N3=0;
			P0=0xaf;
			delay(1);
			N3=1;
			N4=0;
			P0=0xaf;
			delay(1);
			N4=1;
		}
	for(m=250;m>0;m--)	//��һ�������������ʾHEll���ĸ�����ʾ
		{
			N1=0;
			P0=0x2c;
			delay(1);
			N1=1;
			N2=0;
			P0=0x86;
			delay(1);
			N2=1;
			N3=0;
			P0=0x2d;
			delay(1);
			N3=1;
		}
	while(1)
	{
		P2=0xf7;    //h
		P0=0x2c;
		delay(1);
		P2=0xef;    //e
		P0=0x86;
		delay(1);
		P2=0xdf;		//ll
		P0=0x2d;
		delay(1);
		P2=0xbf;		//o
		P0=0x05;
		delay(1);	
	}
}

void delay(uint xms)
{
	for(;xms>0;xms--)
	for(j=110;j>0;j--);
}