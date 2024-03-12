#include<stdio.h>

void line_up(double*, double*, double*);
void exchange(double*, double*);

int main()
{
	double max;
	double mid;
	double min;

	printf("���� �� ���� �Է��ϼ���:");
	scanf_s("%lf%lf%lf", &max, &mid, &min); // 20.5   30.4   40.7
	line_up(&max, &mid, &min);
	
	printf("ū ������ ���ʷ� ����ϸ�:%lf,%lf,%lf\n", max, mid, min);

	return 0;
}

// 20.5   30.4   40.7
void line_up(double* mp, double* ip, double* np)
{
	// ���� ��
	if (*mp < *ip)
		exchange(mp, ip);
	if (*mp < *np)
		exchange(mp, np);
	if (*ip < *np)
		exchange(ip, np);
}

void exchange(double* xp, double* yp)
{
	// �ڸ� �ٲ�
	double temp;
	temp = *xp;
	*xp = *yp;
	*yp = temp;
}