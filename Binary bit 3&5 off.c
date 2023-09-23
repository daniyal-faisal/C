#include<stdio.h>
int main()
{
	int num,bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8;
	printf("enter a 8 bit denary number:");
	scanf("%d",&num);
	bit1 = num % 2;
	num = num / 10;
	bit2 = num % 2;
	num = num / 10;
	bit3 = num % 2;
	num = num / 10;
	bit4 = num % 2;
	num = num / 10;
	bit5 = num % 2;
	num = num / 10;
	bit6 = num % 2;
	num = num / 10;
	bit7 = num % 2;
	num = num / 10;
	bit8 = num;

	printf("bit3:%d\n",bit6);
	printf("bit5:%d\n",bit4);
	//printf("bit3:%d\nbit5:%d\n",bit6,bit3);
	if(bit6 == 1)
	{
		bit6 = 0;
	}
	if(bit4 == 1)
	{
		bit4 = 0;
	}

	printf("%d%d%d%d%d%d%d%d",bit8,bit7,bit6,bit5,bit4,bit3,bit2,bit1);
}
