#include"yuan.h"
#include<stdio.h>
#include<string.h>
#include"yuan.h"
#include<stdlib.h>
#include<ctype.h>
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
void uppercase(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}
void printitem(Item item)
{
	printf("宠物:%-19s 种类:%-19s\n", item.petname, item.petkind);
}
char menu(void)
{
	int ch;
	puts("宠物俱乐部会员计划");
	puts("输入字母获得相应的选择");
	puts("输入a添加一个宠物");
	puts("输入l展示宠物名单");
	puts("输入n显示宠物的数量");
	puts("输入f寻找宠物");
	puts("输入d删除一个宠物");
	puts("输入q退出");
	while ((ch=getchar()) != EOF)
	{
		while (getchar()!='\n')
		{
			continue;
		}
		ch = tolower(ch);
		if (strchr("alrfndq", ch) == NULL)
		{
			puts("pleasenenter an a,l,f,n,d,or q"); 
		}
		else
		{
			break;
		}
	}
		if (ch == EOF)
		{
			ch = 'q';
		}
		return ch;
}
void addpets( Tree* p)
{
	Item temp;
	if (full(*p))
		puts("No room in club");
	else
	{
		puts("请输入宠物的名字");
		s_gets(temp.petname, 45);
		puts("请输入宠物的种类");
		s_gets(temp.petkind, 45);
		uppercase(temp.petname);
		uppercase(temp.petkind);
		add(&temp, p);
	}
}
void showpets( Tree* p)
{
	if (square(*p))
		puts("No entries");
	else
		traverse(p, printitem);
}
void findpet(Tree* p)
{
	Item temp;
	if (square(*p))
	{
		puts("No entries");
		return;
	}
	puts("请输入你需要去找的宠物的名字");
	s_gets(temp.petname, 45);
	puts("请输入你的宠物的种类");
	s_gets(temp.petkind, 45);
	uppercase(temp.petname);
	uppercase(temp.petkind);
	printf("%sthe%s", temp.petname, temp.petkind);
	if (find(&temp, p))
		printf("有这个成员.\n");
	else
		printf("没有这个成员");
}
void droppet(Tree* p)
{
	Item temp;
	if (square(*p))
	{
		puts("No entries");
		return;
	}
	puts("请输入你想要删除的宠物名字");
	s_gets(temp.petname, 45);
	puts("请输入你想要删除的宠物的种类");
	s_gets(temp.petkind, 45);
	uppercase(temp.petname);
	uppercase(temp.petkind);
	printf("%sthe%s", temp.petname, temp.petkind);
	if (cut(&temp, p))
		printf("已从俱乐部中删除");
	else
		printf("没有这个成员");
}

int main()
{
	Tree p;
	char choice;
	initialize(&p);
	while ((choice = menu()) != 'q')
	{
		switch (choice)
		{
		case'a':addpets(&p);
			break;
		case'l':showpets(&p);
			break;
		case'f':findpet(&p);
			break;
		case'n':printf("%d pets in club\n", count(p));
			break;
		case'd':droppet(&p);
		default:
			break;
		}
	}
}