#include<stdio.h>

// 1���� 100������ Ȧ���� �� while
// ¦�� (i % 2 = 0)

int main()
{
	int i=1;
	int sum=0;

	while (i<=100)
	{
		
		if (i % 2 != 0) // Ȧ��
		{
			sum += i;
		}
		i++;
	}

	printf("1���� 100������ Ȧ���� ����: %d\n", sum);
	return 0;
}