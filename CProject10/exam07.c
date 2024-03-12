#include<stdio.h>

int* increase();

int main()
{
	int i;
	int* sp;

	for (i = 0; i < 5; i++)
	{
		sp=increase();
		printf("sum : %d\n", *sp); // 1 2 3 4 5
	}
	return 0;
}

int* increase()
{
	static int sum = 0;
	sum++;

	return &sum;
}