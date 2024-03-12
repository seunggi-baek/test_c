#include<stdio.h>

int main()
{
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int(* ap)[4]; // 배열 포인터
	int i, j;
	
	ap = ary;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{

			printf("%5d", ap[i][j]);
		}
		printf("\n");
	}
	printf("%p\n", ary);
	printf("%p\n", *ary);
	printf("%p\n", &ary);
	
	return 0;
}