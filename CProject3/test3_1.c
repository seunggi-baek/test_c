#include<stdio.h>

// ���� ���
// ��� ������ �Ǽ������� �Է�
// ����� 90�� �̻��� A,80�� �̻� 90�� �̸� B, 70�� �̻� 80�� �̸� C �� �ܴ� F

int main()
{
	double avg; // ���
	char grade; // ����

	printf("��� ������ �Է��ϼ���:");
	scanf_s("%lf", &avg);

	
	if (avg >= 90.0)
		grade = 'A';
	else if (avg >= 80.0 && avg < 90.0)
		grade = 'B';
	else if (avg >= 70.0 && avg < 80.0)
		grade = 'C';
	else 
		grade = 'F';


	printf("������ %c�Դϴ�.\n", grade);

	return 0;
}