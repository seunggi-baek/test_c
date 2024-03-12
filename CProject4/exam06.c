#include<stdio.h>

int main()
{
	int i = 0;

	while (i<9)
	{
		i = i + 1; // i++;
		printf("2*%d=%d\n", i, 2 * i);
	}
	
	return 0;
}