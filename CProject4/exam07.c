#include<stdio.h>

int main()
{
	int n = 0;
	int sum = 0;

	while (1)
	{
		// 0 ���� ���� ���� �ԷµǸ� �ݺ��� �����
		printf("0�Ǵ� ������� �Է��ϼ���:");
		scanf_s("%d", &n);
		if (n < 0)
			break;
		sum += n; // sum = sum + n 

	}
	printf("�� ���� ������ ��:%d\n", sum);
	return 0;
}