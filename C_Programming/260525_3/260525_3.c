#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score[3][3];
	int i;
	int count = 0;
	int menu;

	for (;;)
	{
		printf("1. 학생 추가\n");
		printf("2. 전체 출력\n");
		printf("3. END\n");
		printf("? ");


		scanf("%d", &menu);

		if (menu == 1)
		{
			if (count == 3)
			{
				printf("더 이상 추가할 수 없습니다.\n");
			}
			else 
			{
				printf("국어 영어 수학 입력 : ");
				scanf("%d %d %d",
					&score[count][0],
					&score[count][1],
					&score[count][2]);

				count++;
			}
		}
		else if (menu == 2)
		{
			for (i = 0; i < count; i++)
			{
				printf("[%d]국어 : %d 영어 : %d 수학 :%d\n",
					i, score[i][0], score[i][1], score[i][2]);
			}
		}
		else if (menu == 3)
		{
			break;
		}
	}

	return 0;
}