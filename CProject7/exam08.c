#include<stdio.h>

int main()
{
	double a = 1.3;
	double b = 1.7;
	double* ap;
	double* bp;
	double temp;

	ap = &a;
	bp = &b;
	

	printf("�ٲٱ� ���� a,b��:%.1lf,%.1lf\n", a, b);

	temp = *ap;
	*ap = *bp;
	*bp = temp;

	printf("�ٲ� ���� a,b��:%.1lf,%.1lf\n", a, b);


	return 0;
}