#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入第一个整数\n");
	scanf_s("%d",&a);
	printf("请输入第二个整数\n");
	scanf_s("%d",&b);
	c = a;
	a = b;
	b = c;
	printf("%d  %d",a,b);
	return 0;

}