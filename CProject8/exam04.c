#include<stdio.h>

int main()
{
	double ary[] = { 1.5,20.1,16.4,2.3,3.5 };
	double tot = 0;
	double avg;
	int i;

	for (i = 0; i<sizeof(ary)/sizeof(ary[0]); i++)
	{
		tot += *(ary+i);
	}
	avg = tot / 5;

	printf("�հ�:%.2lf\n", tot);
	printf("��հ�:%.2lf\n", avg);
	
	*ary += 100; // *ary = *ary + 100
	
	printf("%.2lf\n", *ary);

	return 0;
}