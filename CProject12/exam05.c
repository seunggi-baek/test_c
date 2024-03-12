#include<stdio.h>

// 배열 포인터는 배열 전체를 가리키는 포인터이다.
// 2차원 배열을 처리하는 함수의 매개변수로는 배열포인터를 쓴다.
int main()
{
	int ary[5];

	printf("ary의 주소:%p\n", ary);
	printf("ary의 주소:%p\n", &ary);

	printf("ary+1의 주소:%p\n", ary+1); // 배열 요소 +1 (4byte)
	printf("ary+1의 주소:%p\n", &ary+1); // 배열 전체 +1 (20byte)

	return 0;
}