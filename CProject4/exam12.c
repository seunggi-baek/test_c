#include<stdio.h>

int main()
{
	int x;
	int y;

	for (y = 0; y < 5; y++) // 0,1,2,3,4
	{
		for (x = 0; x < 4; x++) // 0,1,2,3
		{
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}