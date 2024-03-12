#include<stdio.h>



int main()
{
	int score[3][4]; // 3명의 4과목의 점수를 저장할 2차원 배열
	int i, j; // 2중 for문을 위한 반복 제어
	int tot;
	double avg;

	for (i = 0; i < 3; i++)
	{
		printf("4과목의 점수를 입력하세요:");
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &score[i][j]);
		}
	}


	for (i = 0; i < 3; i++)
	{
		tot = 0;
		avg = 0;
		for (j = 0; j < 4; j++)
		{
			tot += score[i][j];
			
		}
		avg = tot / 4.0;
		printf("총점:%d, 평균:%.1lf\n", tot, avg);
	}
	
	
	return 0;
}