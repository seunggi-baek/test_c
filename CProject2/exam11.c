#include<stdio.h>

int main()
{
	int employed; //�����(160��)
	int graduation; //������(245��)
	double percentage; //�����

	printf("����� �Է�:");
	scanf_s("%d", &employed);
	printf("������ �Է�:");
	scanf_s("%d", &graduation);

	percentage = (double)employed / graduation * 100; 


	printf("������� %lf%%�Դϴ�",percentage);


	return 0;
}