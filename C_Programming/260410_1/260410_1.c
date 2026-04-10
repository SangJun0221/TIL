#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money, change;
	int balance;

	scanf("%d %d", &money, &change);

	balance = money - change;

	if (balance < 1000) {
		balance = balance - 500;
	}

	if (balance < 0) {
		printf("잔액 부족");

		return 0;
	}
	else {
		printf("출금 성공, ");
	}

	printf("잔액 : %d", balance);

	return 0;
}