#include<stdio.h>

int main()
{
	int a = 100;
	int* ap = &a; // ������ ������ �ּҰ��� �����Ͽ� �� �ּҰ��� ����Ų��.
	              // �ּҸ� ���� �����ϱ� ������ �� �⺻���� 4byte (double X)

	printf("ap�� ����� ��:%p\n",ap);
	printf("ap��ü�� �ּҰ�:%p\n", &ap);

	return 0;
}