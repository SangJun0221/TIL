#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a1, a2, a3;
	int c1, c2, c3;
	int s, b, o;

	srand(time(NULL));

	for (;;) {
		a1 = rand() % 9 + 1;
		a2 = rand() % 9 + 1;
		a3 = rand() % 9 + 1;

		if (a1 != a2 && a1 != a3 && a2 != a3) {
			break;
		}
	}

	while (1) {
		s = 0;
		b = 0;
		o = 0;

		scanf("%d %d %d", &c1, &c2, &c3);

		if (c1 == a1) {
			s++;
		}
		else if (c1 == a2 || c1 == a3) {
			b++;
		}
		else {
			o++;
		}

		if (c2 == a2) {
			s++;
		}
		else if (c2 == a1 || c2 == a3) {
			b++;
		}
		else {
			o++;
		}

		if (c3 == a3) {
			s++;
		}
		else if (c3 == a1 || c3 == a2) {
			b++;
		}
		else {
			o++;
		}

		printf("%dS %dB %dO", s, b, o);

		if (s == 3) {
			break;
		}
	}


	return 0;
}