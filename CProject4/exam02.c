#include<stdio.h>

int main()
{
	int nInput = 0;

	scanf_s("%d", &nInput);

	while (nInput>0) // while(����:��)�� ���� {} �ݺ�
	{
		//nInput--;
		printf("%dth printf()\n", nInput);
		nInput--;
	}

	return 0;
}