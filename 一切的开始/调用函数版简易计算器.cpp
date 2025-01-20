#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int add(int a, int b)
{
	int z = 0;
	z = a + b;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1,&num2);
	int sum1 = add(num1, num2);
	printf("%d\n", sum1);
	int num3 = 0;
	int num4 = 0;
	scanf("%d%d", &num3, &num4);
	int sum2 = add(num3, num4);
	printf("%d", sum2);
    
		

    
	return 0;
}