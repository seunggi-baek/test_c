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

	if (bmi < 20)
		puts("��ü���Դϴ�.");
	else if (bmi > 25)
		puts("��ü���Դϴ�.");
	else 
		puts("ǥ��ü���Դϴ�.");

	return 0;
	// bmi�� 20�̸� : ��ü��
	// bmi�� 20~24.9 : ǥ��ü��
	// bmi�� 25�̻� : ��ü��
}