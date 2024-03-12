#include<stdio.h>

int main()
{
	// 6세 이하의 어린이와 78세 이상의 어른들은 무료입장
	// 그 외에는 3,000원 입장료를 받는다.

	int age;

	printf("나이를 입력하세요:");
	scanf_s("%d", &age);

	if (age <= 6 || age >= 78)
	{
		puts("입장료는 무료 입니다.");
	}

	else
	{
		puts("입장료는 3,000원 입니다.");
	}
	return 0;
}