#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int max;
	int min;
	int first = 1;

	for (;;)
	{
		scanf("%d", &a);

		if (a == -1)
		{
			break;
		}

		if (first)
		{
			max = a;
			min = a;
			first = 0;
		}
		else
		{
			if (a > max)
			{
				max = a;
			}
			if (a < min)
			{
				min = a;
			}
		}
	}

	printf("MAX = %d\n", max);
	printf("MIN = %d", min);

	return 0;
}