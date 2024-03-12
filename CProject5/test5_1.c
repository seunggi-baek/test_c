#include<stdio.h>

// 함수 원형 선언
int total(int, int, int);
double average(int);

int main()
{
	int kor, eng, mat;
	int tot;
	double avg;

	printf("세과목의 점수를 입력하세요:");
	scanf_s("%d%d%d", &kor, &eng, & mat);

	tot = total(kor, eng, mat);
	avg = average(tot);

	printf("총점:%d, 평균은 %.1lf.\n",tot, avg);

	return 0;
}

int total(int kor, int eng, int mat)
{	
	int tot;

	tot = kor + eng + mat;

	return tot;
	// return kor + eng + mat
}

double average(int tot)
{
	double avg;
	avg = tot / 3.0;

	return avg;
}