#include<stdio.h>

int sum(int a, int b) // parameter 매개변수
{
	int res;
	res = a + b;

	return res;
}

int main()
{
	int a = 10;
	int b = 20;
	int res;

	res = sum(a,b); // argument, 인자값

	printf("결과:%d\n", res);

	return 0;
}
