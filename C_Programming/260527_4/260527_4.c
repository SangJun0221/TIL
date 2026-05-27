#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int upper_count(char str[])
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			count++;
		}
		i++;
	}

	return count;
}

int main()
{
	char str[100];
	int result;

	printf("? ");
	scanf("%s", str);

	result = upper_count(str);

	printf("%d", result);

	return 0;
}