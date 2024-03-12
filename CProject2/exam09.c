#include<stdio.h>

int main()
{
	int num1 = 3;
	int num2 = 4;
	double divResult; // 실수(8byte)

	//divResult = num1 / num2;
	divResult = (double)num1 / num2; // 강제 형변환 - 형변환을 해도 타입 자체는 변하지 않음.


	printf("나눗셈 결과:%lf\n", divResult);
	printf("num=%d\n", num1);
	printf("num1의 크기:%zd\n", sizeof(num1));
	printf("divResult의 크기:%zd\n", sizeof(divResult));

	return 0;
}