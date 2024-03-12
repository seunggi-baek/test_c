#include<stdio.h>

int main()
{
	char str[80];
	printf("문자열을 입력하세요:");

 // scanf_s("%s", str, 80);
	gets_s(str, 80); // 빈 칸이 포함된 문자열 입력 가능
	
 // printf("입력된 문자열:%s\n", str);
	puts(str); // \n 포함



	return 0;
}