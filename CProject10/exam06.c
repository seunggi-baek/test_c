#include<stdio.h>

int* add_ten(int); // 주소 반환

int main()
{
	int a = 10;
	int* ap; // 포인터 변수 

	ap = add_ten(a); // 주소=add_ten(값)
	printf("b:%d\n", *ap); // *ap=ap에 저장되어있는 값

	return 0;
}

int* add_ten(static int b) // a값.
{
	b = b + 1;

	return &b; // ap가 주소이므로 주소로 넘어가야함.
}