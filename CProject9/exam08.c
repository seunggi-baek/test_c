#include<stdio.h>

int main()
{
	char* friut = "strawberry"; // fruit�� ���ڿ� "strawberry"�� ù��° ���ڸ� ����Ű���� �ʱ�ȭ.

	while (*friut != '\0') // �����Ͱ� �ι��ڸ� ���������� �ݺ�.(���ڿ��� ������ �ݺ�)
	{
		printf("%s\n", friut); //���� �����Ͱ� ����Ű�� �ּ��� ���ڸ� ���.
		friut++; // �����͸� ���� ���ڷ� �̵�
	}
	return 0;
}
/*
strawberry
trawberry
rawberry
awberry
wberry
berry
erry
rry
ry
y
*/