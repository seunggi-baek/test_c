#include<stdio.h>
/*

* * *
* * *
* * *
* * *
* * *

*/
int main()
{
	int x;
	int y;

	for (x = 0; x < 5; x++)
	{
		
		for (y = 0; y < 4; y++)
		{
			if (y > 2) // y = 0,1,2
				break;
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}