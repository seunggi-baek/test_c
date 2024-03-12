#include<stdio.h>

int main()
{
	char str[80];

	printf("문자열을 입력하세요:");
	gets_s(str); // 마지막에 널문자 자동으로 추가
	printf("입력된 문자열:%s\n", str);

	return 0;
}