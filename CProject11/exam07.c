#include<stdio.h>

int main()
{
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };

	// 포인터 배열에 각 배열명을 초기화한다
	int* ptr_ary[] = { ary1,ary2,ary3 };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", ptr_ary[i][j]);

			// *ptr_ary[i] ==  ptr_ary[i][0]
			// *(ptr_ary[i]+1) ==  ptr_ary[i][1] 
		}
	    printf("\n");
		
	}

	printf("%d", ptr_ary[2][2]);
	return 0;
}