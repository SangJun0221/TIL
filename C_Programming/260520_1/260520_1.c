#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[5];
	int pass = 0;
	int fail = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		if (a[i] >= 60)
		{
			pass++;
		}
		else
		{
			fail++;
		}
	}

	printf("60이상 : %d\n", pass); //출력을 for문 밖에 쓰기.
	printf("60미만 : %d", fail);

	return 0;
}