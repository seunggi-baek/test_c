#include<stdio.h>

int sum(int, int);
int main()
{
	// �Լ������� ����
	// �Լ����� �Լ��� ���ǰ� �ִ� �޸��� ��ġ���̸� �Լ��� ����Ų��.
	// �Լ������Ͱ� ����Ű�� �ڷ����� �Լ��� �����̴�.
	// �Լ������͸� �Լ������� ������ �����Ͽ� ȣ���� �� �ִ�.

	int (*fp)(int, int); // �Լ������� ���� ����.
	int res;

	fp=sum;
	
	res=fp(10, 20);
	
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{

	return a + b;
}
/*
int sum�� 
�Ű����� int,int
��ȯ�ϴ� Ÿ��int
*/