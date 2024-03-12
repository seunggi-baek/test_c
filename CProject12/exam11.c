#include<stdio.h>

int sum(int, int);
int main()
{
	// 함수포인터 변수
	// 함수명은 함수의 정의가 있는 메모리의 위치값이며 함수를 가리킨다.
	// 함수포인터가 가리키는 자료형은 함수의 형태이다.
	// 함수포인터를 함수포인터 변수에 저장하여 호출할 수 있다.

	int (*fp)(int, int); // 함수포인터 변수 선언.
	int res;

	fp=sum;
	
	res=fp(10, 20);
	
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{

	return a + b;
}
/*
int sum의 
매개변수 int,int
반환하는 타입int
*/