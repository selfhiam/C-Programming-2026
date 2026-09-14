// 아래 define은 scanf 취약점 때문에 발생하는 오류를 무시.
#define _CRT_SECURE_NO_WARNINGS
//pragmawaring(disable:4996) - 이것도 최신버전의 4996오류를 무시하는 코드.
#include <stdio.h>

//1번째 시간 사용한 코드.
//
//int main(void)
//{
//	//int korean;
//	int korean = 90;
//	int math = 83;
//	double avg;
//
//	avg = (korean + math) / 2;
//	printf("Avg: %10.1f\n", avg);
//
//	return 0;
//}

// 2번째 실습
//int main(void)
//{
//	int math;
//	int korean;
//	double avg;
//
//	scanf("%d", &korean);
//	scanf("%d", &math);
//
//	avg = (korean + math) / 2.0;
//	printf("Avg: %.1f\n", avg);
//
//	return 0;
//}

//3번째 실습-scanf에 0으로 초기화를 주고, 출력을 하니까 에러 발생.
int main(void)
{
	int korean = 0;
	scanf("%d", korean);
	return 0;
}