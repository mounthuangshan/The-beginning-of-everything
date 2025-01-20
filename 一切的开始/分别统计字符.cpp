#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#define PI 3.1415926
int main()
{
	char a[100];
	int zimu=0;
	int shuzi = 0;
	int kongge = 0;
	int qita = 0;
	scanf("%[^\n]", a);
	for (int i = 0; i < strlen(a); i++)
	{
		if((65<=a[i]&&a[i] <= 90) || (97 <= a[i] && a[i] <= 122))
		{
			zimu++;
		}
		else if(48<=a[i]&&a[i]<=57)
		{
			shuzi++;
		}
		else if(32==a[i])
		{
			kongge++;
		}
		else
		{
			qita++;
		}
	}
	printf("%d\n%d\n%d\n%d\n", zimu, shuzi, kongge, qita);
	return 0;
}