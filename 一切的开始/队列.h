#define _CRT_SECURE_NO_WARNINGS
#ifndef _YUAN_H_
#define _YUAN_H_
#include<stdbool.h>
//结构体定义
typedef struct queue
{
	int a;
}Item;
//一般类型定义
typedef struct node
{
	Item item;
	struct node* next;
}Node;
typedef struct queues
{
	Node* front;
	Node* rear;
	int b;
}Pointer;
//初始化队列为空
void initialize(Pointer* pa);
//确定队列为空,为空返回true，否则返回false
bool space(const Pointer pa);
//确定队列已满，已满返回true，否则返回false
bool full(const Pointer pa);
//确定队列中的项数，返回队列中的项数
int count(const Pointer pa);
//在队列的末尾添加下项，成功添加返回true，否则返回false
bool add(Item item,Pointer* pa);
//在队列的开头删除项，其中首端的item被拷贝到新的区域并被删除，函数返回false，如果该操作使队列为空，则重置队列为空，如果队列在操作前为空，则返回false
bool cut(Item* p, Pointer* pa);
//清空队列，队列被清空
void empty(Pointer* pa);
#endif