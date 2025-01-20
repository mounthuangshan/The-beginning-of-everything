#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int sum;
	int sum2;
	int c;
	printf("请输入第一分支运算数字\n");
	scanf("sum2=%d\n", sum2);
	c = test();
	sum = c + num1 + num2;
	printf("总计\n");
	printf("sum=%d\n", sum);
	return 0;
}
int test()
{
	int num3;
	int num4;
	int sum1;
	printf(“请输入第二分支运算数字\n”);
	scanf("%d%d,&num3,&num4");
	sum1 = num3 + num4;
	printf("分支2\n");
	printf("sum1=%d\n", sum1);
	return("sum1=%d\n", sum1);
}