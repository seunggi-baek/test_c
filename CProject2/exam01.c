#include<stdio.h>

int main()
{
	int bonbong,bonus,total;
	// int 4byte   double 8byte   float 4byte

	double tax;  // �Ǽ�
	double real_income;  // �Ǽ�
	double result;
	
	bonbong = 150;
	bonus = 60;
	total = bonbong + bonus;

	tax = total * 0.09;
	real_income = total - tax;
	
	printf("�̸����� �� ���Ծ��� %lf�����Դϴ�.\n",real_income);
	// �Ǽ� %lf(long float)

	result = 300.04;
	printf("result=%lf\n", result);

	return 0;
}