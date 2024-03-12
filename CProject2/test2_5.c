#include<stdio.h>

int main()
{
	int a;
	int b;
	double c;

	printf("두 정수를 입력하세요:");
	scanf_s("%d%d",&a,&b);
	c = a / (double)b;

	printf("나눗셈 연산식은 \"%d/%d\"=%lf입니다.", a, b, c);

	return 0;
}