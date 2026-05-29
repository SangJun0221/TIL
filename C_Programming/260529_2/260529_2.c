#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char id[50];
	char birth[9];
	char password[8] = "";

	printf("ID? ");
	scanf("%s", id);

	printf("Birthdate? ");
	scanf("%s", birth);

	strncat(password, id, 2);
	strcat(password, "_");
	strncat(password, birth, 4);

	printf("%s", password);

	return 0;
}