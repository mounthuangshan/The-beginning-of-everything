#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"sanziqi1.h"


void jinru()
{
	chushi(qipan,L,R);//棋盘初始化
	dayin(qipan, L, R);//打印棋盘格
}
int wanjia1()
{
	printf("请玩家1走棋");
	int x = 0;
	int y = 0;	
	int z = 0;
	do
	{
		scanf("%d%d", &x, &y);
		z = hefaxing(x, y);//走棋合法性判断
		if (1==z)
		{
			break;
		}
		else
		{
			printf("走棋不合法，请重新输入");
		}
	} while (0==z);
	zouqi(x,y);
	dayin(qipan, L, R);
	//dangqian();
	int p=panduan();
	return p;
}
int main()
{
	printf("开始游戏：\n");
	printf("退出游戏：\n");
	printf("开始游戏输入1，退出游戏输入0\n");
	int n = 0;
	scanf("%d",&n);
	if (1==n)
	{
		jinru();//游戏初始化函数
	}
	else if(0==n)
	{
		;
	}
	else
	{
		printf("输入不合法请重新输入\n");
		main();
	}
	int q=0;
	while (q==0)
	{
		q = wanjia1();
		if (q == 1)
		{
			printf("玩家1胜利");
		}
		else if (q == 2)
		{
			printf("平局");
		}
	}
	
	return 0;
}
