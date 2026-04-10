#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score1, score2, score3;
	int count;

	scanf("%d %d %d", &score1, &score2, &score3);
	count = 0;

	if (score1 >= 80) {
		count++;
	}

	if (score2 >= 80) {
		count++;
	}

	if (score3 >= 80) {
		count++;
	}

	if (count == 3) {
		printf("최우수");
	}
	else if (count == 2) {
		printf("우수");
	}
	else if (count == 1) {
		printf("보통");
	}
	else {
		printf("노력 필요");
	}

	return 0;
}