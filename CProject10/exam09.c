#include<stdio.h>

void exchange();
int a, b;
int main()
{

	printf("정수값 두개를 입력하세요 :");
	scanf_s("%d%d", &a, &b);
	exchange();
	printf("a:%d,b:%d\n", a, b);
	return 0;
}

void exchange()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}