#include<stdio.h>

double ary_avg(int*);

int main()
{
	int ary[] = { 75,80,92,88,98 };
	double res;
	
	res = ary_avg(ary); // 함수 호출 결과값 저장 res

	printf("배열의 평균은:%.2lf\n", res);
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