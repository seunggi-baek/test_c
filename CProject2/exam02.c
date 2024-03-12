#include<stdio.h>

int main()
{
	char ch= 'A';// 변수 선언과 동시에 저장 A 65,a 97
	// character(char) 1byte 문자타입 문자 0은 48

	printf("%d\n", ch); // 65
	printf("%c\n", ch); // A

	// 함수 = 기능, ()존재
	printf("literal int size:%zd\n",sizeof(7));
	printf("literal int size:%zd\n", sizeof(7.0));
	printf("literal int size:%zd\n", sizeof('A'));
	printf("literal int size:%zd\n", sizeof(ch));



	return 0;
}