#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{   
	int num;
	int sum;
	scanf("%d",&num);
	sum = num % 2;
	if (1 == sum)
	{
		printf("是奇数");
	}
	else
	{
		printf("不是奇数");
	}
	return 0;
}