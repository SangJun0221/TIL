#pragma execution_character_set("utf-8")
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	int total_sales;
	int manner_score;

	printf("총 판매 금액: ");
	scanf("%d", &total_sales);

	if (total_sales < 100000)
	{
		printf("수당 없음 : 판매 실적이 부족합니다.\n");
	}
	else // else if (total_sales >= 100000) 없이 e
	{
		printf("매너 점수: ");
		scanf("%d", &manner_score);

		if (manner_score >= 80)
		{
			printf("우수 알바: 야간 수당 20,000원 지급!\n");
		}
		else // else if (manner_score < 80) 없이 else로 충분
		{
			printf("일반 알바: 야간 수당 10,000원 지급.\n");
		}

		if (total_sales > 200000) 
		{
			printf("대박 실적: 보너스 5,000원 추가!\n");
		}
	}
	/*
	else if (total_sales > 200000)
	{
		printf("매너 점수: ");
		scanf("%d", &manner_score);

		if (manner_score < 80)
		{
			printf("일반 알바: 야간 수당 10,000원 지급.\n");
		}
		else if (manner_score >= 80)
		{
			printf("우수 알바: 야간 수당 20,000원 지급!\n");
		}

		printf("대박 실적: 보너스 5,000원 추가!\n");
	}
	*/ //따로 이렇게 만들 필요 없음.

	printf("오늘 하루도 고생 많으셨습니다");

	return 0;
}
/*
int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	int age;

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	
	if (age < 19)
	{
		printf("미성년자에게는 판매 할 수 없습니다\n");
	}
	else if (age >= 19) // 처음에 위에 if에 else 말고 새로운 if를 만들어 넣어서 원하는대로 출력이 안됐다.
	{
		int idcard;
		printf("신분증이 있습니까? (있음 1, 없음 0) : ");
		scanf("%d", &idcard);

		if (idcard == 1)
		{
			printf("결제를 진행합니다.\n"); //결제에 제를 재로 적음
		}
		else if (idcard == 0) // else 안넣음
		{
			printf("신분증이 없으면 판매할 수 없습니다\n");
		}
		else
		{
			printf("오류\n");
		}
	}
	printf("방문해주셔서 감사합니다\n");
	
	return 0;
}

int main() //main 앞에 int 안붙힘 주의 할것.
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	int time, money;
	
	printf("누적 접속 시간(시간) : ");
	scanf("%d", &time);
	printf("누적 과금액(원) : ");
	scanf("%d", &money);

	if (time >= 100 && money >= 100000) //문제는 100시간인데 50으로 적음.
	{
		printf("VVIP 등급: 전설 무기 지급\n");
	}
	else if (time >= 50 && money >= 50000)
	{
		printf("VIP 등급: 영웅 방어구 지급\n");
	}
	else if (money >= 30000)
	{
		printf("골드 등급: 경험치 포션 지급\n");
	}
	else if (time >= 30)
	{
		printf("실버 등급: 체력 포션 지급\n"); //지급을 지금으로 오타 침
	}
	else
	{
		printf("일반 등급: 보상 없음\n");
	}
	return 0;
}
*/