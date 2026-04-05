#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int az_a, az_b; //AZ_A나 AZ_B를 az_a az_b로 수정 대문자는 암묵적으로 상수를 칭할때만 사용하기 때문이다.
	int health_score; //위에와 동일.

	printf("서버 상태 점수 입력 (A B): ");
	scanf("%d %d", &az_a, &az_b);

	health_score = az_a + az_b;
	printf("총합 가용성 점수 : %d\n", health_score);

	if(az_a < 40 || az_b < 40)
	{
		printf("알림: 긴급 셧다운 및 점검");
	}
	else if (health_score >= 150)
	{
		printf("상태: 안정(Stable)");
	}
	else
	{
		printf("상태: 로드밸런싱 필요(Warning)");
	}

	return 0;
}