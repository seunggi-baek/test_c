#include<stdio.h>

int main()
{
	int i;
	int sum = 0;

	// 3�� ��� ������ 1~100������ ��
	for (i = 1; i <= 100; i++)
	{
		if (1 % 3 == 0) // 3�� ��� ����
			continue;
		sum = sum + i;
		//printf("������ ��:%d\n", sum);
	}
	printf("������ ��:%d\n", sum);
	return 0;
}