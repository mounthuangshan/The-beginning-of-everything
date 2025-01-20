#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("请输入密码：");
		scanf("%s", password);
	printf("请确认密码：输入T or F");
	int trb = 0;
		while ((trb=getchar()) !='\n')
		{
			;
		}
		int word = getchar();
		if (word == 'T')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}