#include<stdio.h>

int* add_ten(int); // �ּ� ��ȯ

int main()
{
	int a = 10;
	int* ap; // ������ ���� 

	ap = add_ten(a); // �ּ�=add_ten(��)
	printf("b:%d\n", *ap); // *ap=ap�� ����Ǿ��ִ� ��

	return 0;
}

int* add_ten(static int b) // a��.
{
	b = b + 1;

	return &b; // ap�� �ּ��̹Ƿ� �ּҷ� �Ѿ����.
}