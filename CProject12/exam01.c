#include<stdio.h>

int main()
{
	int val = 10;
	int* ip;
	int** ipp;// 2�� ������ ����
	
	ip = &val;
	ipp = &ip;

	printf("%d\n", *ip); // 10
	printf("%d\n", **ipp); // 10
	printf("%p\n", *ipp);

	return 0;
}