#include<stdio.h>


double ary_min(double*);

// �迭���� �ּҰ� ���ϱ�
int main()
{
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double res;
	
	res = ary_min(ary);

	printf("�迭�� �ּҰ�:%.1lf\n", res);

	return 0;
}

double ary_min(double* ap)
{
	int i;
	double min = ap[0]; // min�� �迭�� ���۰��� ��.

	for (i = 0; i < 5; i++)
	{
		if (ap[i] < min)
		{
			min = ap[i];
		}
	}
	return min;
}