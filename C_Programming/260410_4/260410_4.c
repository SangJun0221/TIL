#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int max, min;
	int first = 1;

	for (;;) {
		scanf("%d", &a);

		// 1. Guard Clause (종료 신호 차단)
		if (a == -1) break;

		// 2. 초기화 파이프라인
		if (first == 1) {
			max = a;
			min = a;
			first = 0; // 초기화 완료 상태로 변경
		}
		// 3. 갱신 파이프라인
		else {
			if (max < a) max = a;
			if (min > a) min = a;
		}
	}

	// 4. 안전한 출력 (Edge Case 방어 로직)
	if (first == 1) {
		// 유효한 데이터가 단 하나도 들어오지 않은 경우
		printf("Error: 입력된 정상 데이터가 없습니다.\n");
	}
	else {
		// 정상적으로 데이터가 1개 이상 들어온 경우
		printf("차이 = %d\n", max - min);
	}

	return 0;
}