#include<stdio.h>

int main()
{
	int nInput = 0;

	scanf_s("%d", &nInput);

	while (nInput>0) // while(조건:참)일 동안 {} 반복
	{
		//nInput--;
		printf("%dth printf()\n", nInput);
		nInput--;
	}

	return 0;
}