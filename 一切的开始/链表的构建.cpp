#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define TSIZE 45
#include"标头.h"

struct film//该结构体为表的模型
{
	char title[TSIZE];
	int rating;
	struct film* next;
};
int main(void)
{
	struct film* head=NULL;//储存头指针，由于头指针的存在我们可以找到所有的表
	struct film* prev=NULL;
	struct film*current;//当前编辑的表
	char input[TSIZE];
	puts("输入第一个电影名：");
	while (s_gets(input,TSIZE)!=NULL&&input[0]!='\0')
	{
		current = (struct film*)malloc(sizeof(struct film));//获取一块新储存空间，并创建一个新表
		if (head==NULL)
		{
			head = current;//第一轮
		}
		else
		{
			prev->next = current;//将新表的地址告诉prev
		}
		strcpy(current->title, input);
		current->next = NULL;
		puts("请输入对该电影的评分：");
		scanf("%d", &current->rating);
		while (getchar() != '\n')
			continue;
		prev = current;//将当前编辑的表的地址给prev//第二轮时将新表的地址给prev，此时将上一轮的表的地址覆盖，我们表面上失去了对上一轮表所在储存空间的控制（因为地址被覆盖，我们找不到上一轮表了）
		puts("输入下一部电影名");
	}
   
}