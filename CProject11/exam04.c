#include<stdio.h>

int main()
{
	char animal[5][20];
	
	for (int i = 0; i < 5; i++)
	{
        scanf_s("%s", animal[i], 20);			
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", animal[i]);
	}


	return 0;
}