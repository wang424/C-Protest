//判断是否为正数
#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数\n");
	scanf_s("%d", &a);
	if (a>0)
	{
		printf("这个整数是正数");
	}
	if (a<=0)
	{
		printf("这个整数不是正数");
	}
	return 0;
}