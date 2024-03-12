#include<stdio.h>


double ary_min(double*);

// 배열에서 최소값 구하기
int main()
{
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double res;
	
	res = ary_min(ary);

	printf("배열의 최소값:%.1lf\n", res);

	return 0;
}

double ary_min(double* ap)
{
	int i;
	double min = ap[0]; // min에 배열의 시작값을 줌.

	for (i = 0; i < 5; i++)
	{
		if (ap[i] < min)
		{
			min = ap[i];
		}
	}
	return min;
}