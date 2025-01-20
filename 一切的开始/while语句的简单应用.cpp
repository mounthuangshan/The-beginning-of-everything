#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 1;
	while (num<30000)
	{
		printf("写代码:%d\n",num);
		num++;
	}
	if (num==30000)
	{
		printf("迎娶白富美\n");
	}

	return 0;
}