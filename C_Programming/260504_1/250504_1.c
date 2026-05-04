#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;
	int count = 0;
	int sum = 0;

	for (;;) 
	{
		scanf("%d", &score);

		if (score == -1)
		{
			break;
		}
		else if (score >= 60)
		{
			count++;
			sum += score;
		}
	}

	printf("합계 : %d\n", sum);
	printf("개수 : %d", count);

	return 0;
}
