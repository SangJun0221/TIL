#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int sum;

	sum = 0;

	for (;;) {
		scanf("%d", &a);

		if (a == -1) {
			break;
		}

		if (a % 2 == 0) {
			sum = sum + a;
		}
	}

	printf("%d", sum);

	return 0;
}