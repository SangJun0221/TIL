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
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			printf("%c", str[i]);
	}

	return 0;
}