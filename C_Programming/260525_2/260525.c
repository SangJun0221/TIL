#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[10];
	int i;
	int count = 0;

	scanf("%s", str);

	for (i = 0; i < 10; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}

		if (str[i] == 'A')
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}