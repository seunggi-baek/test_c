#include<stdio.h>

int main()
{
	double weight, height;
	double bmi;

	printf("�����Ը� �Է��ϼ���(kg):");
	scanf_s("%lf", &weight);
	printf("Ű�� �Է��ϼ���(cm):");
	scanf_s("%lf", &height);
	
	height = height / 100;
	bmi = weight / (height * height);
	printf("bmi=%lf�Դϴ�.\n", bmi);


	return 0;
}