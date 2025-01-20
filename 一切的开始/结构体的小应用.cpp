#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int zuidazhi(int brr[],int e)
{
	int x;
	int y;
	for ( x = 0; x < e; x++)
	{
		if (brr[x]>brr[x+1])
		{
			brr[x+1] = brr[x];
		}
		else
		{
			;
		}
	}
	y = brr[x];
	return y;
}
int main(void)
{
	int a;
	int b;
	int c;
	int max;
	printf("请输入想要比较的三个整数：");
	scanf("%d%d%d", &a, &b, &c);
	struct shuzu
	{
		int crr[3];
	}arr[]={a,b,c};
	int d = sizeof(arr) / sizeof(*arr);
	max = zuidazhi(arr,d);
	printf("%d", max);
}