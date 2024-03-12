#include<stdio.h>

int main()
{
	// 배열 선언
	char subway[80];

	printf("역 이름을 입력하세요:");
	scanf_s("%s",subway,10);  // 공백을 입력데이터 끝으로 인식
	// 중앙 역
	printf("이번에 정차할 역은 %s역입니다,\n", subway);

	return 0;
}