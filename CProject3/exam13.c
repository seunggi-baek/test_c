#include<stdio.h>

int main()
{
	int nInput = 0;

	scanf_s("%d", &nInput);

	if (nInput >= 10)
	{
		if (nInput > 20)
		{
			puts("20�ʰ�");
		}
		else
		{
			puts("20����");
		}
		
	}
	else
	{
		printf("10�̸�\n");
		if (nInput >= 5)
		{
			printf("5�̻�\n");
		}
		else
		{
			printf("5�̸�\n");
		}
		
	}

	return 0;
}