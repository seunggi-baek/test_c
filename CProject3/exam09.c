#include<stdio.h>

int main()
{
	int a, b;
	int min;

	// ���� ������
	// ����? �� : ����

	printf("�� ������ �Է��ϼ���:");
	scanf_s("%d%d", &a, &b);
	min = a < b ? a : b;

	printf("���� ����:%d�Դϴ�.\n", min);


	return 0;
}