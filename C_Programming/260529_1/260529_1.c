#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void calc(int a, int b, int* sum, int* sub)
{
	*sum = a + b;
	*sub = a - b;
}

int main()
{
	int a, b;
	int sum, sub;

	printf("? ");
	scanf("%d %d", &a, &b);

	calc(a, b, &sum, &sub);

	printf("합 : %d 차 : %d", sum, sub);

	return 0;
}