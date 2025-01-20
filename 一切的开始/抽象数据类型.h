#define _CRT_SECURE_NO_WARNINGS
#ifndef biaotou
#define biaotou
#include<stdbool.h>
#define TSIZE 45
//结构体定义
struct film
{
	char title[TSIZE];
	int rating;
};
//一般类型定义
typedef struct film Item;
typedef struct node
{
	Item item;
	struct node* next;
}Node;
 typedef Node* List;
 //函数原型
 
 //初始化一个链表
 void chushihua(List* plist);
 //确定链表是否为空，如果为空返回true，否则返回false
 bool kongjian(const List plist);
 //确定链表是否已满，如果已满返回true，否则返回false
 bool yiman(const List plist);
 //确定链表中的项数并返回项数
 unsigned int xiangshu(const List plist);
 //在链表的末尾添加项，如果可以添加一个项并返回true，否则返回false
 bool tianjia(Item item, List* plist,Node*p,Node**d);
 //把函数作用于链表的每一项,pfun指向一个函数，该函数接受一个Item类型的参数，该函数作用于链表中的项每一项一次
 void zuoyong(const List plist, void(*pfun)(Item item));
 //释放已分配的内存
 void shifang(List* plist);
 

#endif
 