#include<stdio.h>

int main()
{
	int anData[4] = { 1,2,3,4 };
	int anData2[4] = { 1,2 };
	int i;

	for (i = 0; i < 4; i++)
	{
		printf("%d\n", anData[i]);
	}

	for (i = 0; i < 4; i++)
	{
		printf("%d\n", anData2[i]);
	}

}