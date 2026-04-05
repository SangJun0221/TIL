#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int cpu1, cpu2, cpu3; // 단순 알파벳이 아닌 직관적인 변수로 변경
	float avg_cpu; //위에 a1 a2 a3와 동일 문제.
	
	printf("CPU 사용량 입력 (3대): ");
	scanf("%d %d %d", &cpu1, &cpu2, &cpu3);

	avg_cpu = (cpu1 + cpu2 + cpu3) / 3.0f;
	printf("평균 : %.2f\n", avg_cpu);

	if (avg_cpu >= 75.0f) //똑똑한 컴파일러 경우 자동으로 실수 75.0으로 변환해주겠지만 주력으로 다룰려는 Java는 엄격하게 표시해야하기에 그에 대해 수정.
	{
		printf("Warning: Scale-Out Required");
	}
	else if (avg_cpu < 30.0f) //앞선 75와 동일 문제.
	{
		printf("Warning: Scale-In Required");
	}
	else
	{
		printf("Status: Normal");
	}

	return 0;
}