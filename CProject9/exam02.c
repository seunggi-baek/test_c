#include<stdio.h>

int main()
{
	printf("dream의 (시작) 주소값:%p\n","dream"); // 시작주소

	printf("첫번째 문자를 출력:%c\n", "dream"[0]); //d
	printf("두번째 문자를 출력:%c\n", "dream"[1]); //r
	printf("세번째 문자를 출력:%c\n", "dream"[2]); //e
	printf("세번째 문자를 출력:%c\n", *("dream"+3)); //e
	return 0;
}