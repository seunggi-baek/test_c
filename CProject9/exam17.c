#include<stdio.h>

int main()
{
	char str[80];

	printf("���ڿ��� �Է��ϼ���:");
	gets_s(str); // �������� �ι��� �ڵ����� �߰�
	printf("�Էµ� ���ڿ�:%s\n", str);

	return 0;
}