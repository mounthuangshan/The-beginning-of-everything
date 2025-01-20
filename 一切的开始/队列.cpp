#define _CRT_SECURE_NO_WARNINGS
#include"yuan.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void copytonode(Item item, Node* p)
{
	p->item = item;
}
void copytoitem(Item* item, Node* p)
{
	*item = p->item;
}
void initialize(Pointer* pa)
{
	pa->front = pa->rear = NULL;
	pa->b = 0;
}
bool space(const Pointer pa)
{
	bool a;
	if (pa.front == pa.rear)
	{
		a = true;
	}
	else
	{
		a = false;
	}
	return a;
}
bool full(const Pointer pa)
{
	bool a;
	if (pa.front==(pa.rear+1))
	{
		a = true;
	}
	else
	{
		a = false;
	}
	return a;
}
int count(const Pointer pa)
{
	return pa.b;
}
bool add(Item item, Pointer* pa)
{
	Node*pb = (Node*)malloc(sizeof(Node));
	if (pb==NULL)
	{
		return false;
	}
	copytonode(item, pb);
	if (pa->front == NULL)
	{
		pa->front = pb;
		pa->rear = pb;
		pa->b++;
		pa->front->next = NULL;
	}
	else
	{
		pa->rear->next = pb;
		pa->rear = pb;
		pa->b++;
		pb->next = NULL;
	}
		return true;
}
bool cut(Item* p, Pointer* pa)
{
	Node* pb;
	if (space(*pa))
	{
		return false;
	}
	copytoitem(p, pa->front);
	pb = pa->front;
	pa->front = pa->front->next;
	free(pb);
	pa->b--;
	if (pa->b==0)
	{
		pa->rear = NULL;
	}
	return 0;
}
void empty(Pointer* pa)
{
	Node* pb;
	while (pa->front->next!=NULL)
	{
		pb = pa->front;
		pa->front = pa->front->next;
		free(pb);
	}
	free(pa);
}