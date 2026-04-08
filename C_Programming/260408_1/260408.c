#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, pay;
	int total_pay;

	scanf("%d %d", &pay, &time);

	total_pay = pay * time;

	if (time > 8) {
		total_pay = total_pay + ((pay * 5 / 10) * (time - 8));
	}

	if (total_pay >= 100000) {
		total_pay = total_pay + 5000;
	}

	printf("최종 급여 : %d", total_pay);

	return 0;
}