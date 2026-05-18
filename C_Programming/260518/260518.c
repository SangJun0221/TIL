#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]); //scanf할때 & 잊지 말기.
	}

	for (int i = 0; i < 5; i++)
	{
		if (a[i] >= 60)
		{
			printf("%d ", a[i]); //%d를 쓸 경우 %d이후 한번 띄워 공백을 주지 않으면 7090이런씩으로 붙어서 나올 수 있기에 한칸 띄워주기.
		}
	}

	return 0;
}