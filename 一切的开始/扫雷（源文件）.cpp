#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"sanziqi1.h"

int main()
{
	printf("欢迎来到扫雷游戏，，请选择>1.进入游戏；2.退出游戏\n");
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	do
	{
		scanf("%d", &a);
		switch (a)
		{
		case 1:printf("进入游戏\n");
			b = 2;
			break;
		case 0:printf("已退出");
			b = 1;
			break;
		default:printf("输入不合法请重新输入");
			b = 0;
			break;
		}
	} while (0==b);
	if (b==2)
	{
		char yuansaolei[L][R];
		char saolei[L][R];
		qipan(yuansaolei,'0');
		qipan(saolei, '*');
		printf("请输入您希望雷的数量");
		scanf("%d", &c);//这里本来因该有个限制范围的函数，但我实在是懒得写了，就默认这里有吧
		for (int i = 0; i <c ; i++)
		{
			buzhi(yuansaolei);
		}
		dayin(yuansaolei);
		printf("\n");
		dayin(saolei);
		printf("请输入您要排查的坐标>\n");
		do
		{
			scanf("%d%d", &d,&e);//这里也应该有个限制范围的函数的
			f = paicha(yuansaolei, saolei, d, e);
		} while (0==f);		
	}
	else
	{
		;
	}
	return 0;
}