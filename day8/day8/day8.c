#include<stdio.h>
int main()
{
	int a;
	printf("������һ������\n");
	scanf_s("%d", &a);
	if ((a-7) % 10 == 0)
	{
		printf("�������7�ı�����");
	}
	else
	{
		printf("���������7�ı�����");
	}
	return 0;
}