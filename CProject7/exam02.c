#include<stdio.h>

int main()
{
	int a = 100;
	int* ap = &a; // 포인터 변수는 주소값을 저장하여 그 주소값을 가리킨다.
	              // 주소만 저장 가능하기 때문에 그 기본값인 4byte (double X)

	printf("ap에 저장된 값:%p\n",ap);
	printf("ap자체의 주소값:%p\n", &ap);

	return 0;
}