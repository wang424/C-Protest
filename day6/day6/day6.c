#include<stdio.h>
int main()
{
	int a, b, c;
	printf("�������һ������\n");
	scanf_s("%d",&a);
	printf("������ڶ�������\n");
	scanf_s("%d",&b);
	c = a;
	a = b;
	b = c;
	printf("%d  %d",a,b);
	return 0;

}