#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	printf("�������һ������\n");
	scanf_s("%d",&a);
	printf("������ڶ�������\n");
	scanf_s("%d",&b);
	c = a + b;
	printf("���ǵĺ���%d\n", c);
	c = a - b;
	printf("���ǵĲ���%d\n", c);
	c = a * b;
	printf("���ǵĻ���%d\n", c);
	return 0;
}