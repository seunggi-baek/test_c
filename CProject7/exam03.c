#include<stdio.h>

int main()
{
	int a = 10;
	int* ap = &a; // ������

	printf("%d\n", a);  // 10
	printf("%p\n", &a); // a�� ���� �ּ�
	printf("%p\n", ap); // ap = &a, a�� ���� �ּ�
	printf("%p\n", &ap); // ap�� ���� �ּ�
	printf("%d\n", *ap); // *ap = &a = 10
	
	return 0;
}