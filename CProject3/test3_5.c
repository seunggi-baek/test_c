#include<stdio.h>

int main()
{
	double a, b, res = 0;
	char op; // 연산자

	printf("수식을 입력하세요:");
	scanf_s("%lf%c%lf",&a,&op,1,&b);  // 10/5

	
	switch (op)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case'*':
		res = a * b;
		break;
	case'/':
		res = a / b;
	default:
		puts("해당하는 연산자가 없습니다.\n");
	}

	printf("연산 결과는 %.2lf입니다.\n", res);
	return 0;
}