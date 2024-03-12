#include<stdio.h>

int main()
{
	int num1 = 100;
	int num2 = 100;
	int* pnum;

	printf("%d\n", sizeof(num1)); //4
	printf("%d\n", sizeof(pnum)); //8

	printf("%p\n", &num1);
	// printf("%p\n", pnum); // error
	// printf("%p\n", *pnum);

	pnum = &num1;

	printf("%p\n", pnum);

	// 포인터 변수가 가리키는 변수 num1의 값에 30을 더하시오.

	*pnum = *pnum + 30; // 포인터 변수(pnum)가 가리키는 변수 (&num1=100)의 값에 30을 더하시오.

	// 포인터 변수가 가리키는 변수 num2의 값에 30을 빼시오.

	pnum = &num2;
	
	*pnum = *pnum - 30;

	printf("num1:%d,num2:%d\n", num1, num2);

	return 0;
}