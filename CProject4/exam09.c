#include<stdio.h>

int main()
{
	int x = 0;
	int y = 0;

	while (y<5) // y=0,1,2,3,4
	{
		x = 0;
		while (x<4) // x=0,1,2,3
        {
			
			printf("*\t");
			x++;
		}
        y++;
		printf("*\t\n");
	}

	return 0;
}