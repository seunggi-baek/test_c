#include<stdio.h>

int main()
{
	// ���� : �����Ͱ��� ������ �� �ִ� �޸� ����
	// ����� ���� ���� �� �ִ�

	int number1; // ���� ����
	number1 = 30;
	int number2 = 20; // ������ ���� ���� �� �ʱ�ȭ, = ���� ������

    printf("%d\n", number1 + number2);

	number2 = number1; // 20 (����) = 10 (��)

	printf("%d\n", number2);

	int a3 = 50;
	printf("%d\n", a3);

	return 0;
}