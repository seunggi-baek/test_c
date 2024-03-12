#include<stdio.h>

// 1부터 100까지의 홀수의 합 while
// 짝수 (i % 2 = 0)

int main()
{
	int i=1;
	int sum=0;

	while (i<=100)
	{
		
		if (i % 2 != 0) // 홀수
		{
			sum += i;
		}
		i++;
	}

	printf("1부터 100까지의 홀수의 합은: %d\n", sum);
	return 0;
}