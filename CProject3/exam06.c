#include<stdio.h>

int main()
{
	int a, b, res;
	
	printf("�� ������ �Է��ϼ���:");
	scanf_s("%d %d", &a, &b);

	if (b != 0)
	{
		res = a / b;
        printf("a�� b�� ���� ��:%d\n", res);
	}
	
	printf("0�� �ԷµǾ� ���� �� �����ϴ�.");

	return 0;
}