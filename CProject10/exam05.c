#include<stdio.h>

void increase();

int num = 100; // ���� ����

int main()
{
	
	for(int i = 0; i < 5; i++)
	{
		increase();
		printf("   num:%d   ",num++);
	}
	return 0;
}

void increase()
{
	//int sum = 0;
	static int sum = 0; // ���� ����. �Լ��� ������� ������ ������� �ʴ´�.
	// ���� ������ �ڵ� �ʱ�ȭ
	sum++; // sum = sum + 1;

	printf("sum:%d", sum);
	printf("   num:%d", num);
}