#include<stdio.h>

int main()
{
	char* name;
	name = "Hong gildong";

	printf("이름:%s\n", name);
	printf("여섯번째 문자:%c\n", name[5]); // 인덱스 5

	return 0;
}