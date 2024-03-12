#include<stdio.h>

int main()
{
	int num1;
	int num2;
	int res;

	printf("두 정수값을 입력하세요:");
	scanf_s("%d%d", &num1, &num2);
	
	res = num1 + num2;

	printf("두 정수의 합은 %d입니다\n",res);


	return 0;
}
