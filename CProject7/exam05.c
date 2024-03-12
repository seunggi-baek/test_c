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

	// ������ ������ ����Ű�� ���� num1�� ���� 30�� ���Ͻÿ�.

	*pnum = *pnum + 30; // ������ ����(pnum)�� ����Ű�� ���� (&num1=100)�� ���� 30�� ���Ͻÿ�.

	// ������ ������ ����Ű�� ���� num2�� ���� 30�� ���ÿ�.

	pnum = &num2;
	
	*pnum = *pnum - 30;

	printf("num1:%d,num2:%d\n", num1, num2);

	return 0;
}