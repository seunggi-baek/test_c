#include<stdio.h>

int main()
{
	int row_order[4][5];
	int col_order[4][5];
	int i, j;
	int n = 0;
	int m = 0;
	printf("열 우선 순서로 저장된 배열\n");
	for (i=0;i<4;i++)
	{
		n = i+1;
		
		for (j =0; j < 5; j++)
		{
			
			col_order[i][j] = n;
			
			printf("%5d", col_order[i][j]);
			n += 4;
		}
		printf("\n");
	}
	printf("행우선 순서로 저장된 배열\n" );
	for (i = 0;i<4;i++)
	{
		
		for (j = 0;j<5;j++)
		{
			m++;
			row_order[i][j] = m;
			
			printf("%5d", row_order[i][j]);

		}
		printf("\n");
	}
	return 0;
}