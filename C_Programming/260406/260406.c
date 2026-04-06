#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int storage1, storage2;
	int total_storage;
	char grade; //변수 네이밍을 a가 아닌 등급 grade로 변경.

	printf("입력 : ");
	scanf("%d %d %c", &storage1, &storage2, &grade);

	if (storage2 < 0) {
		printf("Error: 잘못된 용량입니다.");

		return 0;
	}
	else if (storage1 + storage2 > 1000) {
		printf("Error: 할당 한도 초과입니다.");

		return 0;
	}

	total_storage = (storage1 + storage2) * 10;

	if (grade == 'V') {
		total_storage = (int)(total_storage * 0.8f); //total_storage = total_storage * 0.8f;은 암시적 형변환이기에 명시적 형변환으로 수정.
	}

	if (total_storage < 5000) {
		total_storage = total_storage + 1000;
	}

	printf("최종 청구 요금 : %d", total_storage);

	return 0;
}