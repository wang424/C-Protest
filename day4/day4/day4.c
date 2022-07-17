#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	printf("请输入第一个整数\n");
	scanf_s("%d",&a);
	printf("请输入第二个整数\n");
	scanf_s("%d",&b);
	c = a + b;
	printf("它们的和是%d\n", c);
	c = a - b;
	printf("它们的差是%d\n", c);
	c = a * b;
	printf("它们的积是%d\n", c);
	return 0;
}