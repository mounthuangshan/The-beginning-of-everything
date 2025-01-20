#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"Դ.h"

void chushihua(List* plist)
{
	*plist = NULL;
}
bool kongjian(const List plist)
{
	if (plist==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool yiman(const List plist)
{
	Node* pt;
	bool full;
	pt = (Node*)malloc(sizeof(Node));
	if (pt==NULL)
	{
		full=true;
	}
	else
	{
		full=false;
	}
	return full;
}
unsigned int xiangshu(const List plist)
{
	unsigned int count = 0;
	Node* pnode = plist;
	while (pnode!=NULL)
	{
		count++;
		pnode = pnode->next;
	}
	return count;
}
bool tianjia(Item item, List* plist,Node* pd,Node**pc)
{
		Node*pt = (Node*)malloc((sizeof(Node)));
	if (pt==NULL)
	{
		return false;
	}
	if (*plist==NULL)
	{
		pd = *plist;
		pt->item = item;
		pt->next = NULL;
		pd = pt;
		*pc = pt;//使实参与形参保持一致
		*plist = pt;
		return true;
	}
	else
	{
		pd->next = pt;//将新地址告知上一个节点
		pt->item = item;
		pt->next = NULL;
		pd = pt;
		*pc = pt;
	}
	return true;
}
/*else
  {
	  while(pd->next!=NULL);
	     pd=pd->next;
	  pd->next=pt; 
  }*/
  //该种方法是通过头指针找到链表末尾
void zuoyong(const List plist, void(*pfun)(Item item))
{
	Node* pt = plist;
	pfun(pt->item);
	Node* pd = pt->next;
	while (pt->next!=NULL&&pd!=NULL)
	{
		pfun(pd->item);
		pd = pd->next;
	}
}
void shifang(List* plist)
{
	Node* pd;
	Node* pt = *plist;
		while (pt != NULL)
	{
		Node* pd = pt->next;
		free(pt);
		pt = pd;
	}
}