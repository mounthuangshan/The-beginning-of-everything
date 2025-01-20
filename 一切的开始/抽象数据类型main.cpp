#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"源.h"
#include<string.h>

char* s_gets(char* str, int n)
{
	char* a;
	char* b;
	a = fgets(str, n, stdin);
	if (a)
	{
		b = strchr(a, '\n');
		*b = '\0';
	}
	else
	{
		while (getchar() != '\n')
			continue;
	}
	return a;
}
void showmovies(Item item)
{
	printf("Movies:%s Rating:%d\n", item.title, item.rating);
}

int main()
{
	//修改链表
	List movies=NULL;//头指针
	Node* pk= (Node*)malloc((sizeof(Node)));//建立一个表用于保存上一个表的地址
	Node** pl = &pk;
	Item temp;//项
	chushihua(&movies);
	if (yiman(movies))
	{
		fprintf(stderr, "No memory available");
		exit(1);
	}
	puts("输入第一部电影");
	while (s_gets(temp.title,TSIZE)!=NULL&&temp.title[0]!='\0')
	{
		puts("输入评分");
		scanf("%d", &temp.rating);
		while (getchar() != '\n')
			continue;
		if (tianjia(temp,&movies,pk,pl)==false)
		{
			fprintf(stderr, "problem allocating memory");
			break;
		}
		if (yiman(movies))
		{
			puts("The list is now full");
			break;
		}
		puts("输入下一部电影（空行停止输入）");
	}
	//显示链表
	if (kongjian(movies))
	{
		printf("No data entered");
	}
	else
	{
		printf("这是电影清单:\n");
		zuoyong(movies, showmovies);
	}
	printf("你输入了 %d 部电影.\n", xiangshu(movies));
	//释放空间
	shifang(&movies);
	printf("bye!\n");
	return 0;
}

