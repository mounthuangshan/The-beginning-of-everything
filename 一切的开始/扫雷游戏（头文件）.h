#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#pragma once
#define L 11
#define R 11
//char yuansaolei[L][R];
//char saolei[L][R];

//初始化棋盘
void qipan(char a[L][R],char b)
{
	for (int i = 0; i < L; i++)
	{
		for (int j = 0; j < R; j++)
		{
			a[i][j] = b;
		}
	}
}
//打印棋盘
void dayin(char a[L][R])
{
	for (int i = 1; i < L-1; i++)
	{
		for (int j = 1; j < R-1; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
//布置雷
void buzhi(char a[L][R])
{
	int m = rand() % 10+1;
	if (10==m)
	{
		m = m - 1;
	}
	else
	{
		;
	}
	int n = rand() % 10+1;
	if (10==n)
	{
		n = n - 1;
	}
	else
	{
		;
	}
	a[m][n] = '1';
}
//排查雷
int paicha(char a[L][R], char d[L][R], int b, int c)
{

	if ('1'==a[b][c])
	{
		printf("您被雷了，游戏失败\n");
		dayin(a);
		return 1;
	}
	else
	{
		printf("请继续输入您要排查的坐标>\n");
		d[b][c] = '0';
		dayin(d);
		return 0;
	}
}