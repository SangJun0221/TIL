#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 4; i >= 0; i--)
	{
		if (a[i] >= 60)
		{
			printf("%d ", a[i]);
		}
	}

	return 0;
}