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
	
	P0=0x2c;			//数码管显示H
	N4=0;				//第四个数码管
	delay(1000);	
	N4=1;				//转移至第三个数码管
	N3=0;
	delay(1000);
	N3=1;				//转移至第二个数码管
	N2=0;
	delay(1000);
	N2=1;				//转移至第一个数码管
	N1=0;
	delay(1000);
	
	for(m=500;m>0;m--)	//第一个数码管显示H最后一个显示E
		{
			N1=0;
			P0=0x2c;		//第一个数码管显示H
			delay(1);
			N1=1;			//关闭第一个数码管
			N4=0;			//打开第四个数码管
			P0=0x86;		//第四个数码管显示E
			delay(1);
			N4=1;			//关闭第四个数码管
		}
	
	for(m=500;m>0;m--)	//第一个数码管显示H第三个显示E
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
		
	for(m=500;m>0;m--)	//第一个数码管显示H第二个显示E
		{
			N1=0;				//此时HE完成
			P0=0x2c;
			delay(1);
			N1=1;
			N2=0;
			P0=0x86;
			delay(1);
			N2=1;
		}
		
	for(m=350;m>0;m--)	//第一、二个数码管显示HE第四个右边显示l
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
	for(m=350;m>0;m--)	//第一、二个数码管显示HE第四个左边显示l
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
	for(m=350;m>0;m--)	//第一、二个数码管显示HE第三个右边显示l
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
	for(m=350;m>0;m--)	//第一、二个数码管显示HE第三个左边显示l
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
	for(m=300;m>0;m--)	//第一二三个数码管显示HEl第四个右边显示l
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
	for(m=250;m>0;m--)	//第一二三个数码管显示HEl第四个左边显示l
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
	for(m=250;m>0;m--)	//第一二三个数码管显示HEll第四个不显示
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