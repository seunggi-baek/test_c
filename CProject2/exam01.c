#include<stdio.h>

int main()
{
	int bonbong,bonus,total;
	// int 4byte   double 8byte   float 4byte

	double tax;  // 실수
	double real_income;  // 실수
	double result;
	
	bonbong = 150;
	bonus = 60;
	total = bonbong + bonus;

	tax = total * 0.09;
	real_income = total - tax;
	
	printf("이몽룡의 실 수입액은 %lf만원입니다.\n",real_income);
	// 실수 %lf(long float)

	result = 300.04;
	printf("result=%lf\n", result);

	return 0;
}