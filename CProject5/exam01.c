#include<stdio.h>

// �Լ���? Ư���� ����� �����ϴ� ������ �ڵ�,()�� ����
// �ݺ����
// �Լ��� ȣ���� �ؾ� �۵��Ѵ�.
// �Լ��� ��ȯ�ϴ� ���� Ÿ���� ����ؾ� �Ѵ�. 
// �Լ��ȿ��� �ٸ� �Լ��� ȣ���� �� �ִ�.

int sum()
{
	int res;

	int a = 10;
	int b = 20;

	res = a + b;

	return res; // 30
}

int main()
{
	int res;
	res=sum(); // 30

	printf("��� :%d\n",res);

	return 0;
}