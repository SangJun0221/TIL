#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[5];
	int i;
	int avg = 0;
	int sum = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);

		sum += a[i];
	}

	avg = sum / 5;

	for (i = 0; i < 5; i++)
	{
		if (a[i] <= avg)
		{
			printf("%d ", a[i]);
		}
	}

	return 0;

}