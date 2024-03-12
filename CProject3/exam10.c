#include<stdio.h>

int main()
{
	double weight, height;
	double bmi;

	printf("몸무게를 입력하세요(kg):");
	scanf_s("%lf", &weight);
	printf("키를 입력하세요(cm):");
	scanf_s("%lf", &height);
	
	height = height / 100;
	bmi = weight / (height * height);
	printf("bmi=%lf입니다.\n", bmi);


	return 0;
}