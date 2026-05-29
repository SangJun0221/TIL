#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char id[50];
	char password[50];

	printf("ID? ");
	scanf("%s", id);

	printf("Password? ");
	scanf("%s", password);

	if((strcmp("admin",id)==0 && strcmp("1234", password)==0) 
		|| 
		(strcmp("student", id) == 0 && strcmp("2026", password) == 0))
	{
		printf("로그인 성공");
	}
	else
	{
		printf("로그인 실패");
	}

	return 0;
}
