#include<stdio.h>

// for문을 이용해서 1부터 10까지의 합을 출력
int main()
{
	int i;
	int sum;

	for (i=1,sum=0;i<=10;i++)
	{
		sum += i;
	}

	printf("1부터 10까지의 합은:%d\n", sum);
	return 0;
}