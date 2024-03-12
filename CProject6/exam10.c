#include<stdio.h>

int main()
{
	char str[] = "Good morning";

	printf("배열 str의 크기:%zd\n",sizeof(str)); // 13 : null문자가 포함된 크기
	printf("null 문자 문자형 출력:%c\n", str[12]);

	str[12] = '?'; // null 문자를 ?로 바꿈
	printf("문자열 출력:%s\n",str); // null 문자가 사라지면서 쓰레기값이 나옴

    str[12] = '\0';
	printf("문자열 출력:%s\n", str);

	return 0;
}