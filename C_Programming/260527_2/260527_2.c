#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b)
{
	int s = 0;
	int i;

	for (i = a; i <= b; i++)
	{
		s += i;
	}

	return s;
}

void sum_proc(int a, int b)
{
	int r;

	r = sum(a, b);
	printf("%d~%d 합 : %d\n", a, b, r);

	r = sum(1, a);
	printf("1~%d 합 : %d\n", a, r);

	r = sum(b, 100);
	printf("%d~100 합 : %d\n", b, r);
		
}

int main()
{
	int a, b;

	printf("? ");
	scanf("%d %d", &a, &b);

	sum_proc(a, b);

	return 0;
}