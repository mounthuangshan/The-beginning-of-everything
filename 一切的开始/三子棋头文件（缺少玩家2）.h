#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#pragma once
#define L 3
#define R 3
char qipan[L][R];
//棋盘内容初始化
void chushi(char q[L][R], int l, int r)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < L; i++)
	{
		for ( j = 0; j < R; j++)
		{
			q[i][j] = ' ';
		}
	}
}
//打印棋盘
void dayin(char d[L][R], int l, int r)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < L; i++)
	{
		printf(" %c | %c | %c \n", d[i][0], d[i][1], d[i][2]);
		if (j<L-1)
		{
			printf(" - - - - -  \n");
			j++;
		}
	}
	
}
//判断走棋合法性
int hefaxing(int m, int n)
{
	int i = m;
	int j = n;
	int p = 0;		
	if (i >= 1 && i <= L && j >= 1 && j <= R)
	{
		int zhanyong(int, int);
	    p=zhanyong(i, j);//判断棋盘坐标是否被占用

	}
	else
	{		
		p = 0;
	}
	return p;
}

//判断棋盘坐标是否被占用
int zhanyong( int m, int n)
{
	int i = m;
	int j = n;
	int g = 0;
	if (qipan[i - 1][j - 1] == ' ')
	{
	    g = 1;
	}
	else
	{
		g = 0;
	}
	return g;
}

//走棋
void zouqi(int m, int n)
{
	int i = m;
	int j = n;
	qipan[i-1][j-1]= '*';
}

//判断玩家1的棋盘状态
int panduan()
{
	int i = 0;
	int j = 0;
	int g = 0;
	for (i = 0; i < L; i++)
	{
		if (qipan[i][0] == qipan[i][1] && qipan[i][1] == qipan[i][2] && qipan[i][0] == '*')
		{
			return 1;
		}
		else if (qipan[0][i] == qipan[1][i] && qipan[1][i] == qipan[2][i] && qipan[0][i] == '*')
		{
			return 1;
			break;
		}
		else if (qipan[0][0] == qipan[1][1] && qipan[1][1] == qipan[2][2] && qipan[0][0] == '*')
		{
			return 1;
			break;
		}
		else if (qipan[2][0] == qipan[1][1] && qipan[1][1] == qipan[0][2] && qipan[2][0] == '*')
		{
			return 1;
			break;
		}
		else
		{
			for ( j = 0; j < R; j++)
			{
				if (qipan[0][j]!=' '&&qipan[1][j]!=' '&&qipan[2][j]!=' ')
				{
					g++;
				}
				else
				{
					return 0;
					break;
				}
				if (3==g)
				{
					return 2;//当g值累计到3，说明棋盘没有位置了，即为平局
					break;
				}
			}
			break;
		}
	}
}


//打印当前棋盘(另一种打印方式，可以不受三子的限制，但仍有缺陷，待改进）
//void dangqian()
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < L; i++)
//	{
//		for ( j = 0; j <R; j++)
//		{
//			if (j<R-1)
//			{
//				printf(" %c |", qipan[i][j], L * R, L * R);
//			}
//			else if (j=R-1)
//			{
//				printf(" %c \n", qipan[i][j], L * R, L * R);
//				printf(" - - - - -  \n");
//			}
//			
//		}
//	}
//
//}




