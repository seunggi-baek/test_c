#include<stdio.h>

// 지역 변수는 함수가 종료되거나 값을 리턴하고 나면 메모리에서 사라진다.
// 함수안에 선언된 변수
int main()
{
	int a = 10;
	int b = 20;
	int temp;

	printf("바꾸기 전 a:%d,b:%d\n", a, b);
	{
		temp = a;
		a = b;
		b = temp;
	}
	printf("바꾼 후 a:%d,b:%d\n", a, b);
	printf("temp:%d", temp);

	return 0;
}