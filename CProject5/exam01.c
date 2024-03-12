#include<stdio.h>

// 함수란? 특별한 기능을 수행하는 독립된 코드,()가 존재
// 반복사용
// 함수는 호출을 해야 작동한다.
// 함수는 반환하는 값의 타입을 명시해야 한다. 
// 함수안에서 다른 함수를 호출할 수 있다.

int sum()
{
	int res;

	int a = 10;
	int b = 20;

	res = a + b;

	return res; // 30
}

int main()
{
	int res;
	res=sum(); // 30

	printf("결과 :%d\n",res);

	return 0;
}