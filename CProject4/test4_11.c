#include<stdio.h>

int main()
{
	int num;

	printf("start");

	for (num=0;num<20;num++)
	{
		// 2��� �̰ų� 3��� ������ �������� ���

		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d\n", num);
	}

	printf("end\n");

	return 0;
}