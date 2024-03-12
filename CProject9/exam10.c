#include<stdio.h>
#include<string.h> // 헤더파일 포함

// 문자열 처리 함수
// string copy(strcpy) : 문자열 복사 함수
// string lenght(strlen) : 문자열 길이 함수
// string compare(strcmp) : 문자열 비교 함수 
// string concatenation(strcat) : 문자열 연결 함수
int main()
{
	char str1[20] = "apple";
	char str2[20] = "banana";
	char temp[20];

	strcpy_s(temp, sizeof(temp), str1);
	strcpy_s(str1, sizeof(str1), str2);
	strcpy_s(str2, sizeof(str2), temp);
	
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	return 0;
}