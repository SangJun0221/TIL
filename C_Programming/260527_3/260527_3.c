#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c)
{
	int result = a;

	if (b > result)
	{
		result = b;
	}

	if (c > result)
	{
		result = c;
	}

	return result;
}

int main()
{
	int a, b, c;
	int r;

	printf("? ");
	scanf("%d %d %d", &a, &b, &c);

	r = max(a, b, c);

	printf("%d", r);

	return 0;
}