#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int i, j;

	scanf("%d", &a);

	for (i = a; i >= 1; i-= 2) {
		for (j = 0; j < (a - i)/2; j++) {
			printf(" ");
		}

		for (j = 0; j < i; j++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}