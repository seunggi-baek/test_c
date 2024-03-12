#include<stdio.h>

int main()
{
	double num1 = 245; // 245.00000
	int num2 = 3.1415; // 4byte : -2147483647~2147483647
	int num3 = 129;
	// char ch = num3; // char 0~255 -128~127
	unsigned char ch = num3;

	printf("정수 245를 실수로:%lf\n",num1);
	printf("실수 3.1415를 정수로:%d\n", num2);
	printf("ch의 값:%d\n", ch);

	//printf("%d\n", 2147483647 + 1);


	return 0;
}