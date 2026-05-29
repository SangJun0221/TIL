#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char id[50];
	char domain[50];
	char email[102];

	printf("ID? ");
	scanf("%s", id);

	printf("Domain? ");
	scanf("%s", domain);

	strcpy(email, id);
	strcat(email, "@");
	strcat(email, domain);

	printf("%s", email);

	return 0;
}