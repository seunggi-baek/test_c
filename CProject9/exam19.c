#include<stdio.h>
#include<string.h>

// 문자열 처리 함수
// string copy(strcpy) : 문자열 복사 함수
// string lenght(strlen) : 문자열 길이 함수
// string compare(strcmp) : 문자열 비교 함수 
// string concatenation(ctrcat) : 문자열 연결 함수
int main()
{
	char name[10] = { 0 };
	char tel[20]= { 0 };
	char address[50]= { 0 };
	char str[80]= { 0 };

	printf("이름을 입력하세요:");
	gets_s(name,sizeof(name));
	strcpy_s(str,sizeof(str), name);
	strcat_s(str, sizeof(str), ",");

	printf("전화번호를 입력하세요:");
	gets_s(tel, sizeof(tel));
	strcat_s(str, sizeof(str), tel);
	strcat_s(str, sizeof(str), ",");
	
	printf("주소를 입력하세요:");
	gets_s(address, sizeof(address));
	strcat_s(str, sizeof(str), address);
	
	puts(str);
	return 0;
}