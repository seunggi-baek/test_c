#include<stdio.h>

int main()
{
	int num1;
	int num2;

	printf("두개의 정수 입력:");
	scanf_s("%d%d", &num1, &num2);
	printf("%d와 %d중 절대값이 큰 정수:%d\n",num1,num2,AbsoCompare(num1,num2));

	// -20 > 10

	return 0;
}

int AbsoCompare(int num1, int num2) 
{
	// 함수는 다른 함수를 호출 할 수 있다.
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	if (num < 0)
		//return num * (-1);
		return num=num * (-1);
	else
	    return num;
}