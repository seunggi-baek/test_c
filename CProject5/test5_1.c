#include<stdio.h>

// �Լ� ���� ����
int total(int, int, int);
double average(int);

int main()
{
	int kor, eng, mat;
	int tot;
	double avg;

	printf("�������� ������ �Է��ϼ���:");
	scanf_s("%d%d%d", &kor, &eng, & mat);

	tot = total(kor, eng, mat);
	avg = average(tot);

	printf("����:%d, ����� %.1lf.\n",tot, avg);

	return 0;
}

int total(int kor, int eng, int mat)
{	
	int tot;

	tot = kor + eng + mat;

	return tot;
	// return kor + eng + mat
}

double average(int tot)
{
	double avg;
	avg = tot / 3.0;

	return avg;
}