#include<stdio.h>

double ary_avg(int*);

int main()
{
	int ary[] = { 75,80,92,88,98 };
	double res;
	
	res = ary_avg(ary); // �Լ� ȣ�� ����� ���� res

	printf("�迭�� �����:%.2lf\n", res);
	return 0;
}

double ary_avg(int* ap)
{
	int i;
	int tot=0;
	double average;

	for (i = 0; i < 5; i++)
	{
		tot += ap[i];
	}
	return average = tot / 5.0;
}