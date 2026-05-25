#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[3];
	int b;
	int i;
	int menu;
	int count = 0;

	for (;;)
	{
		printf("1. 데이터 추가\n");
		printf("2. 전체 출력\n");
		printf("3. 종료 \n");
		printf("? ");

		scanf("%d", &menu);

		if (menu == 1)
		{
			if (count == 3)
			{
				printf("더 이상 데이터를 추가할 수 없습니다.\n");
			}
			else
			{
				printf("? ");
				scanf("%d", &b);

				for (i = 0; i < count; i++)
				{
					if (a[i] == b)
						break;
				}

				if (i == count)
				{
					a[i] = b;
					printf("데이터가 추가되었습니다 \n");
					count++;
				}
				else
				{
					printf("이미 데이터가 존재합니다\n");
				}
			}
		}
		else if (menu == 2)
		{
			for (i = 0; i < count; i++)
			{
				printf("%d ", a[i]);
			}
			printf("\n");
		}
		else if (menu == 3)
		{
			break;
		}
	}
	return 0;
}