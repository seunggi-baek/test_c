#include<stdio.h>

// for���� �̿��ؼ� 1���� 10������ ���� ���
int main()
{
	int i;
	int sum;

	for (i=1,sum=0;i<=10;i++)
	{
		sum += i;
	}

	printf("1���� 10������ ����:%d\n", sum);
	return 0;
}