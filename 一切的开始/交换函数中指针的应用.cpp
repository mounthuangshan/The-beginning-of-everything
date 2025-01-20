#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a=10;
//	int* pa = &a;
//	printf("%d",*pa);
//		
//	return 0;
//}
void swap(int* pa, int* pb)
{
	int* x = pa;
	int* y = pb;
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}
int main()
{
	int a=10;
	int b=20;
	swap(&a, &b);
	printf("%d\n%d", a, b);
	return 0;
}