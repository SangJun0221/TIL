#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int goods1, goods2, goods3;
	int total_amount;

	printf("상품 가격 입력: ");
	scanf("%d %d %d", &goods1, &goods2, &goods3);

	total_amount = goods1 + goods2 + goods3;
	printf("총 금액 : %d\n", total_amount);

	if (total_amount >= 10000) //불필요하게 else 문을 사용하지 않아도 된다.
	{
		total_amount = total_amount * 0.9;
	}
	if (total_amount < 15000)
	{
		total_amount = total_amount + 500;
	}

	printf("최종 결제 금액 : %d", total_amount); //똑같은 문장을 규칙 마다 넣는거 보다 효율적으로 한개만 배치.

	return 0;

}