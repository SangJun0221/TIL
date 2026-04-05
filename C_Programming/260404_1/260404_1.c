#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char f = 'F'; //f를 이미 F로 확정했기에 초기에 짠코드는 길이가 너무 방대함 그걸 절반으로 수정.
	int a, b, c;

	printf("점수 입력 (언어 독해 청해): ");
	scanf("%d %d %d", &a, &b, &c);

	int d = a + b + c;

	if (d >= 95 && a >= 19 && b >= 19 && c >= 19) //19점 이상은 과락이 아니나 19점 까지 과락으로 처리함 그부분을 수정.
	{
		f = 'P';
	}
	/*else
	{
		f = 'F';
	}
	*/ //else또한 맨 위에 f를 이미 F로 확정지어났기때문에 필요하지 않은 코드다 그렇기에 삭제.

	printf("%c", f);

	return 0;
}