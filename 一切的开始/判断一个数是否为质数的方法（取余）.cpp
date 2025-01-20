int ment(int x)
{
	int y=0;
	for ( y = 2; y < x; y++)
	{
		if (0==x%y)
		{
			return 0;
		}
		return 1;
	}
}

int main()
{
	int a=8;
	ment(a);
		if (1==ment(a))
		{
			printf("是质数");

		}
		else
		{
			printf("不是质数");
		}
	return 0;
}