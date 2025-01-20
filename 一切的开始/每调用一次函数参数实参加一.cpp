void add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	add(&num);
	printf("%d", num);//1
		
	
	add(&num);
	printf("%d", num);//2


	add(&num);
	printf("%d", num);//3
	return 0;
}