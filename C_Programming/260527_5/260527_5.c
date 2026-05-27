#define _CRT_SECUER_NO_WARNINGS
#include <stdio.h>

void toLower(char str[])
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] = str[count] + ('a' - 'A');
		}

		count++;
	}
}

int main()
{
	char str2[100];

	printf("? ");
	scanf("%s", str2);

	toLower(str2);

	printf("%s", str2);

	return 0;
}