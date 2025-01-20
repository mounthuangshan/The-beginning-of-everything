#define _CRT_SECURE_NO_WARNINGS
#ifndef _YUAN_H_
#define _YUAN_H_
#include<stdbool.h>
#define MAXSIZE 20
//结构体定义
typedef struct item
{
	char petname[45];
	char petkind[45];
}Item;
typedef struct node
{
	Item item;
	Node* left;
	Node* right;
}Node;
typedef struct tree
{
	Node* root;
	int size;
}Tree;
//接口定义
//初始化函数
void initialize(Tree* p);
//确定树是否为空
bool square(const Tree p);
//确定树是否已满
bool full(const Tree p);
//确定树的项数
int count(const Tree p);
//在树中添加一个项
bool add(Item* pa, Tree* p);
//在树中查找一个项
bool find(const Item* pa,const Tree* p);
//从树中删除一个项
bool cut(Item* pa, Tree* p);
//把函数应用于树中的每一项
void traverse(Tree* p, void(*pfun)(Item item));
//清空树
void empty(Tree* p);
#endif