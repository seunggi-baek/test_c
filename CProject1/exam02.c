#include<stdio.h>

int main()
{
	// 주석 : 프로그램 실행과 관련 없다
	printf("10"); // 문자열
	printf("\n"); // 특수문자(줄바꿈), 문자열
	printf("     20\n");
	printf("%d\n",10); // 콘솔창에 숫자로 출력, 특수 문자
	printf("%d\n",10+20);
	printf("%d     %d\n", 10, 20); // 순서대로 대응
	// printf("%d\n", 10, 20);
	// printf("%d%d", 10);



	return 0;
}