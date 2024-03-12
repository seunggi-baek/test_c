#include<stdio.h>

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* ap;

	printf("%p\n", &ary); // 배열 시작 주소값
	printf("%p\n", ary); // 배열 자체가 시작 주소값
	printf("%p\n", &ary[0]); // ary[0]은 배열의 첫번째 값이므로 결국 시작 주소값과 같다.

	ap = &ary[0];

	printf("%p\n", ap); //ary[0]의 시작 주소값과 같다.
	printf("%d\n", *ap); // 시작 주소값에 있는 정수. 10
	printf("%p,%p\n", ap + 1, &ap[1]); // 둘 모두 ary[1]의 주소값.
	printf("%d,%d\n", *(ap + 1), *&ap[1]); // 20
	printf("%d,%d\n", ary[3], ap[3]);  // 40


	return 0;
}