#include<stdio.h>
#include<string.h>

int main()
{
	char fruit[80] = "apple";
	char* strp = "banana";
	int len;
	int len2;

	len2 = strlen(fruit);

	printf("sizeof:%zd\n", sizeof(fruit)); // 배열 전체의 크기
	printf("strlen:%d\n", len2); // 배열에 저장된 문자열의 길이 

	len = strlen(strp);
	printf("문자열의 길이:%d\n", len);

	return 0;
}