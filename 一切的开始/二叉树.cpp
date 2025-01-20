#include"yuan.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//局部变量
typedef struct pair
{
	Node* parent;
	Node* child;
};
//局部函数
static bool toleft(const Item* ia, const Item* ib)
{
	int c;
	if (c = strcmp(ia->petname, ib->petname) < 0)
	{
		return true;
	}
	else if (c == 0 && strcmp(ia->petkind, ib->petkind) < 0)
	{
		return true;
	}
	else
		return false;
}
static bool toright(const Item* ia, const Item* ib)
{
	int c;
	if (c = strcmp(ia->petname, ib->petname) > 0)
	{
		return true;
	}
	else if (c == 0 && strcmp(ia->petkind, ib->petkind) > 0)
	{
		return true;
	}
	else
		return false;
}
static pair seekitem(const Item*pa,const Tree*p)
{
	pair look;
	look.parent = NULL;
	look.child = p->root;
	if (look.child == NULL)
	{
		return look; 
	}
	while (look.child!=NULL)
	{
		if (toleft(pa, &(look.child)->item))
		{
			look.parent = look.child;
			look.child = look.child->left;
		}
		else if (toright(pa, &(look.child)->item))
		{
			look.parent = look.child;
			look.child = look.child->right;
		}
		else
			break;
	}
	return look;
}
static node* makenode(const Item* pa)
{
	Node* c;
	c = (Node*)malloc(sizeof(node));
	if (c != NULL)
	{
		c->item = *pa;
		c->left = NULL;
		c->right = NULL;
	}
	return c;
}static void addnode(Node* pa, Node* p)
{
	if (toleft(&pa->item,&p->item))
	{
		if (p->left == NULL)
			p->left = pa;
		else
			addnode(pa, p->left);
	}
	else if (toright(&pa->item, &p->item))
	{
		if (p->right == NULL)
			p->right = pa;
		else
			addnode(pa, p->right);
	}
	else
	{
		fprintf(stderr, "location error in addnode()");
		exit(1);
	}
}
static void cutnode(Node** ptr)
{
	Node* c;
	if ((*ptr)->left == NULL)
	{
		c = *ptr;
		*ptr = (*ptr)->right;
		free(c);
	}
	else if ((*ptr)->right == NULL)
	{
		c = *ptr;
		*ptr = (*ptr)->left;
		free(c);
	}
	else
	{
		for (c = (*ptr)->left; c->right != NULL; c = c->right)
			continue;
		c->right = (*ptr)->right;
		c = *ptr;
		*ptr = (*ptr)->left;
		free(c);
	}
}
static void inorder(const Node* root, void(*pfun)(Item item))
{
	if (root != NULL)
	{
		inorder(root->left, pfun);
		(*pfun)(root->item);
		inorder(root->right, pfun);
	}
}
static void cutallnodes(Node* root)
{
	Node* p;
	if (root != NULL)
	{
		p = root->right;
		cutallnodes(root->left);
		free(root);
		cutallnodes(p);
	}
}
//接口函数
void initialize(Tree* p)
{
	p->root = NULL;
	p->size = 0;
}
bool square(const Tree p)
{
	if (p.root==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool full(const Tree p)
{
	if (p.size==MAXSIZE)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int count(const Tree p)
{
	return p.size;
}
bool add(Item* pa, Tree* p)
{
	Node* a;
	if (full(*p))
	{
		fprintf(stderr, "Tree is full");
		return false;
	}
	if (seekitem(pa,p).child!=NULL)
	{
		fprintf(stderr, "Attempted to add duplicate item\n");
	}
	a = makenode(pa);
	if (a == NULL)
	{
		fprintf(stderr, "Couldn't create node");
		return false;
	}
	p->size++;
	if (p->root == NULL)
	{
		p->root = a;
	}
	else
		addnode(a, p->root);
	return true;
}
bool find(const Item* pa,const Tree* p)
{
	return (seekitem(pa, p).child == NULL) ? false:true;
}
bool cut(Item* pa, Tree* p)
{
	pair look;
	look = seekitem(pa, p);
	if (look.child == NULL)
		return false;
	if (look.parent == NULL)
		cutnode(&p->root);
	else if (look.parent->left == look.child)
		cutnode(&look.parent->left);
	else
		cutnode(&look.parent->right);
	p->size--;
	return true;
}
void traverse(const Tree* p, void(*pfun)(Item item))
{
	if (p != NULL)
		inorder(p->root, pfun);
}
void empty(Tree* p)
{
	if (p != NULL)
		cutallnodes(p->root);
	p->root = NULL;
	p->size = 0;
}