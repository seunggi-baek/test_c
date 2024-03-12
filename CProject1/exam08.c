#include<stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	
	printf("정수값 하나를 입력하세요:");
	scanf_s("%d",&num1); // 키보드로부터 데이터 입력
	printf("입력 받은 정수값은 %d입니다.\n", num1);

	//scanf_s("정수값 하나를 입력하세요:%d",&num2); // scanf_s는 무조건 입력받고자 하는 특수문자만
	//printf("입력 받은 정수값은 %d입니다.\n", num2);

	printf("정수값 두개를 입력하세요.:");
	scanf_s("%d%d", &num3,&num4);	
	printf("입력받은 정수값은 %d %d입니다.\n", num3, num4);

	return 0;
}