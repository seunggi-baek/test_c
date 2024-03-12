#include<stdio.h>

int main()
{
	// 배열명은 첫 번째 배열요소를 가리키는 포인터를 기호화한 것이다.
	int ary[] = { 10,20,30,40,50 };
	int i;

	// 배열명을 포인터 처럼 사용하여 배열의 값을 출력
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *(ary+i));
	}
	return 0;
}