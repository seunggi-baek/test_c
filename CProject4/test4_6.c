#include<stdio.h>

int main()
{
	int i;
	int age;
	int sum=0;

	for (i=1;i<=5;i++)
	{
        printf("���̸� �Է��ϼ���:");
		scanf_s("%d", &age);
		sum += age;
	}

	printf("�ټ����� ��� ���̴� %.1lf�Դϴ�.", sum / 5.0);
	return 0;
}