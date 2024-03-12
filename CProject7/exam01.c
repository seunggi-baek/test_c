#include<stdio.h>

int main()
{
	char ch = 0;
	int num = 0;
	int adr = 0;

	// &:주소 연산자 (메모리 시작 주소값)

	printf("ch의 포인터:%p\n", &ch);
	printf("num의 포인터:%p\n", &num);
	printf("adr의 포인터:%p\n", &adr);

	adr = &num;

	printf("adr=%x\n", adr);
	return 0;
}