#include<stdio.h>



int main()
{
	int score[3][4]; // 3���� 4������ ������ ������ 2���� �迭
	int i, j; // 2�� for���� ���� �ݺ� ����
	int tot;
	double avg;

	for (i = 0; i < 3; i++)
	{
		printf("4������ ������ �Է��ϼ���:");
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
		printf("����:%d, ���:%.1lf\n", tot, avg);
	}
	
	
	return 0;
}