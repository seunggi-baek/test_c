#include<stdio.h>

// Ű����� ���� �Էµ� �������� ������ �������� ���
// while 2*1=2....2*9=18

int main()
{
	int dan;
	int i=1;

	printf("�Ѱ��� ���� �Է��ϼ���:");
	scanf_s("%d", &dan);

	while (i<10)
	{
		printf("%d*%d=%d\n", dan, i, i * dan);
		i++;
	}
	
	return 0;
}