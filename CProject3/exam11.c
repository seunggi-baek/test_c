#include<stdio.h>

int main()
{
	// 6�� ������ ��̿� 78�� �̻��� ����� ��������
	// �� �ܿ��� 3,000�� ����Ḧ �޴´�.

	int age;

	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);

	if (age <= 6 || age >= 78)
	{
		puts("������ ���� �Դϴ�.");
	}

	else
	{
		puts("������ 3,000�� �Դϴ�.");
	}
	return 0;
}