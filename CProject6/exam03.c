#include<stdio.h>

int main()
{
	int ages[5];
	int tot = 0;
	double avg;
	int i;
	printf("다섯 명의 나이를 입력하세요:");

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &ages[i]);
	}
	for (i = 0; i < 5; i++)
	{
		tot += ages[i];
	}

	avg = tot / 5.0;
	printf("입력된 다섯명의 나이:");
	
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ages[i]);
	}
	printf("\n다섯명의 평균 나이는 %.1lf입니다.", avg);
	

	return 0;
}