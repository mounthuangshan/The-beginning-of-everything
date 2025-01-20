#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num=1;
	int sum;	
		while (num<=100)
		{
			sum = num % 2;
			if (1==sum)
			{
				printf("%d", num);
			}
			num++;
		}
	return 0;
}