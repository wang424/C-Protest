#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数\n");
	scanf_s("%d", &a);
	if ((a-7) % 10 == 0)
	{
		printf("这个数是7的倍数！");
	}
	else
	{
		printf("这个数不是7的倍数！");
	}
	return 0;
}