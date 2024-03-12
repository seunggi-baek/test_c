#include<stdio.h>

int main()
{
	int a = 10;
	int* ap = &a; // 포인터

	printf("%d\n", a);  // 10
	printf("%p\n", &a); // a의 시작 주소
	printf("%p\n", ap); // ap = &a, a의 시작 주소
	printf("%p\n", &ap); // ap의 시작 주소
	printf("%d\n", *ap); // *ap = &a = 10
	
	return 0;
}