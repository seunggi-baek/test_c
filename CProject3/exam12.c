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

	if (bmi < 20)
		puts("저체중입니다.");
	else if (bmi > 25)
		puts("과체중입니다.");
	else 
		puts("표준체중입니다.");

	return 0;
	// bmi가 20미만 : 저체중
	// bmi가 20~24.9 : 표준체중
	// bmi가 25이상 : 과체중
}