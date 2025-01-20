int ment(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k < a[mid])
		{
			int right = mid-1;
		}
		else if (k > a[mid])
		{
			int lift = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int siz = sizeof(arr) / sizeof(arr[0]);
	int ret = ment(arr, key, siz);
	if (-1==ret)
	{
		printf("没找到");
	}
	else
	{
		printf("找到了，下标是：%d", ret);
	}
	return 0;
}