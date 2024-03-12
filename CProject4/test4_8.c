#include<stdio.h>

/*

*
* *
* * *
* * * *
* * * * *

* 행이 증가하면 열이 증가한다
* 바깥 = 행, 안쪽 = 열
*/
int main()
{
	int x;
	int y;

	for (x = 0 ; x <= 5 ; x++) 
	{
		for (y = 0 ; x > y ; y++) // x=0,y=X/ x=1,y=0/ x=2,y=0,1/x=3,y=0,1,2/x=4,y=0,1,2,3 
		{
           printf("*\t");
		}
		printf("\n");

	}
	return 0;
}
