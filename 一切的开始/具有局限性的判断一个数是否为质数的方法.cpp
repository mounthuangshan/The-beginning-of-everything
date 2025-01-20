int y = 0;

int judement(int a)
{
	float x = 1.0;
	
	float b[9] = { 1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0 };
		

        for (int z=0;z<10; z++)
		{
			float sum = a / x;

			for (int i = 0; i < 10; )
			{
				
				if ( b[i]==sum)
				{
					y++;
					
				}
				i++;
			}
			
			x++;
			
		}
		
		return y;

	//此函数通过遍历数组的方式判断一个数是否为质数，其局限性很大，只能判断商不大于十的数是否为质数

}
int main()
{
	int a = 2;
	judement(a);
	if (y < 3)
	{
		printf("是质数");
	}
	else
	{
		printf("不是质数");
	}
	return 0;
}