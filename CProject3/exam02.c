#include<stdio.h>

int main()
{
	int a = 30;
/*
	// 조건 연산자
	if (10 > 5)
	    printf("a는 10보다 크고 20보다 작습니다.\n");
	// if문에서 조건이 참이면 무조건 첫번째 명령문 실행
	printf("결과는?");
*/

	if (10 < 5 < 20) // 10<5 = 거짓=> 0, 0<20 = 참
		printf("a는 10보다 크고 20보다 작습니다.\n");


	if (7 < 13 < 1)
		printf("4는 13보다 크다.\n");

	return 0;
}