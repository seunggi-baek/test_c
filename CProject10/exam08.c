#include<stdio.h>

double get_item(double*);
int main()
{
	double ary[] = { 00.1,0.3,0.5,0.7,0.9 };
	double res;

	res = get_time(ary);
	printf("ù��° ȣ���� �� : %.1lf\n", res);

	res = get_time(ary);
	printf("�ι�° ȣ���� �� : %.1lf\n", res);

	return 0;
}

double get_item(double* ap)
{
	static int i = 0;
	double temp;
	temp =*( ap + i);
	i++;
	
	return temp;

}