#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>#pragma once
#include<string.h>
char* s_gets(char* str, int n)
{
	char* a;
	char* b;
	a=fgets(str, n, stdin);
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
