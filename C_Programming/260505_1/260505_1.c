#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int count = 0;
	int sum = 0;

	for (;;)
	{
		scanf("%d", &a);
		if (a == -1)
		{
			break;
		}
		else if (a % 2 == 0)
		{
			count++;
			sum += a;
		}
	}
	printf("합계 : %d\n", sum);
	printf("개수 : %d", count);

	return 0;
}