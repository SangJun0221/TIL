#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[100];
	int i;
	int count = 0;

	for (i = 0; i < 100; i++)
	{
		a[i] = -1;
	}

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &a[i]);

		if (a[i] == -1)
		{
			break;
		}
	}

	for (i = 0; i < 100; i++)
	{
		if (a[i] != -1 && a[i] >= 60)
		{
				count++;
		}
	}

	printf("60 이상 개수 : %d", count);

	return 0;
}