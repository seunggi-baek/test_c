#include<stdio.h>

int main()
{
	// 변수 : 데이터값을 저장할 수 있는 메모리 공간
	// 저장된 값은 변할 수 있다

	int number1; // 변수 선언
	number1 = 30;
	int number2 = 20; // 정수형 변수 선언 및 초기화, = 대입 연산자

    printf("%d\n", number1 + number2);

	number2 = number1; // 20 (변수) = 10 (값)

	printf("%d\n", number2);

	int a3 = 50;
	printf("%d\n", a3);

	return 0;
}