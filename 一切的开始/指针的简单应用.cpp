#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char name[15];
	int age;
	char sex[5];

};
int main()
{
	struct stu s = {"张三",32,"男"};
printf("%s%d%s\n", s.name, s.age, s.sex);
struct stu* pa = &s;
	printf("%s%d\n", (*pa).name, (*pa).age);
	printf("%s", pa->name);
	return 0;
}