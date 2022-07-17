#include<stdio.h>
int main()
{
	int a, s, d;
	a = 1;
	s = 2;
	d = a + s;
	printf("%d+%d=%d\n", a, s, d);
	d = a - s;
	printf("%d\n", d);
	d = a * s;
	printf("%d", d);
	return 0;
}