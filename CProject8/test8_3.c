#include<stdio.h>

double ary_avg(int*);

int main()
{
	int ary[5];
	int i;
	double res;
	int* ap;
    
    ap = ary;// ������ ������ �迭�� �ʱ�ȭ
	
	for (i = 0; i < 5; i++) // Ű����κ��� ���� �Է� �޴´�. (������ ���)
	{
		scanf_s("%d", ap+i); // scanf_s("%d",&ary[i]);
	}

	res = ary_avg(ap);// �Լ� ȣ�� �� ����� res�� ����

	printf("�迭�� �����:");
	printf("%.2lf\n", res);

	return 0;
}

double ary_avg(int* ap)
{
	int i;
	int tot = 0;

	for (i = 0; i < 5; i++)
	{
		tot += ap[i];
	}
	
	return tot / 5.0;
}