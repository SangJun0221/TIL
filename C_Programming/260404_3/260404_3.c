#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	int a, b;
	int result; //c는 1바이트(8비트)로 표현 되기에 범위가 초과하면 오버플로우가 발생할 수 있기에 정수 변수를 추가.

	printf("입력 (현재대수 수치 연산자): ");
	scanf("%d %d %c", &a, &b, &c);

	if (c == '+')
	{
		result = a + b;
		printf("%d", result);
	}
	else if (c == '-')
	{
		if (a - b < 1) // 현재 식을 더하기나 나눗셈때 오류가 생기지 않게 개별 수식에 추가 / 결과 값이 0이나 음수가 되면 에러가 떠야 하는데 현재는 0이 포함 그렇기에 0을 1로 수정.
		{
			printf("Error: 서버는 최소 1대 이상이어야 합니다.");
			return 0; //에러를 띄우고 다음줄에 /가 실행하도록 방치를 했다 오류 가 발생할 수 있기에 강제 브레이크를 달았다.
		}
		result = a - b;
		printf("%d", result);
	}
	else if (c == '/')
	{
		if (b == 0) // a == 0 &&이라는 불필요한 식을 제거 및 c = a/b보다 상위권에 위치.
		{
			printf("Error: 0으로 나눌 수 없습니다.");
			return 0; //위에와 동일한 오류가 발생 할 수 있기에 브레이크 추가.
		}
		result = a / b;
		printf("%d", result);

	}
	else if (c == '*')
	{
		result = a * b;
		printf("%d", result);
	}

	//printf("%d", result); 같은 경우 에러를 띄우고 출력 되는 오류가 발생 가능 그렇기에 삭제 후 위에 식들에 결합

	return 0;
}