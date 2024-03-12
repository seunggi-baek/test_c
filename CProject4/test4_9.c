#include<stdio.h>
/*

* * * * * 
* * * * 
* * *
* *
*

*/
int main()
{
	int x;
	int y;

	for (x = 0; x < 5; x++)
	{
		for (y = 5; x < y; y--)
		{
			printf("*\t");
		}
		printf("\n");

	}
	return 0;
}