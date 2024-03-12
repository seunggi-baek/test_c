#include<stdio.h>

int main()
{
	int employed; //취업자(160명)
	int graduation; //졸업자(245명)
	double percentage; //취업률

	printf("취업자 입력:");
	scanf_s("%d", &employed);
	printf("졸업자 입력:");
	scanf_s("%d", &graduation);

	percentage = (double)employed / graduation * 100; 


	printf("취업률은 %lf%%입니다",percentage);


	return 0;
}