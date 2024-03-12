#include<stdio.h>

int main()
{
	char blood_type;
	

	printf("혈액형을 입력하세요:");
	scanf_s("%c", &blood_type,1);
	// AB형 제외
	printf("당신의 혈액형은 %c형입니다\n", blood_type);

	return 0;
}