#include<stdio.h>

int main()
{
	int ages[5];
	int tot = 0;
	double avg;
	int i;
	printf("�ټ� ���� ���̸� �Է��ϼ���:");

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &ages[i]);
	}
	for (i = 0; i < 5; i++)
	{
		tot += ages[i];
	}

	avg = tot / 5.0;
	printf("�Էµ� �ټ����� ����:");
	
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ages[i]);
	}
	printf("\n�ټ����� ��� ���̴� %.1lf�Դϴ�.", avg);
	

	return 0;
}