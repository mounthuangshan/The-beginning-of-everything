#define _CRT_SECURE_NO_WARNINGS
#include"yuan.h"
#include<stdio.h>
#include<string.h>
int main()
{
	Pointer q;
	Item item;
	char ch;
	initialize(&q);
	puts("测试队列接口，输入一个a来添加一个值");
	puts("输入d可以删除一个值，输入q可以退出");
	while ((ch = getchar()) != 'q')
	{
		if (ch!='a'&&ch!='d')
		{
			continue;
		}
		if (ch == 'a')
		{
			printf("添加整数：");
			scanf("%d", &item);
			if (!full(q))
			{
				printf("把%d放入队列\n", item);
				add(item, &q);
			}
			else
			{
				puts("队列已经满了");
			}
		}
		else
		{
			if (space(q))
			{
				puts("没有可以删除的东西");
			}
			else
			{
				cut(&item, &q);
				printf("从队列中删除%d\n",item);
			}
		}
		printf("%d 个项目在队列中\n", count(q));
		puts("输入a添加，d删除，q退出");
	}
	empty(&q);
	puts("bye!");
	return 0;
	
}
