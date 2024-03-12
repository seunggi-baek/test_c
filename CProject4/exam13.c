#include<stdio.h>

int main()
{
	int i;
	int sum = 0;

	// 3의 배수 제외한 1~100까지의 합
	for (i = 1; i <= 100; i++)
	{
		if (1 % 3 == 0) // 3의 배수 제외
			continue;
		sum = sum + i;
		//printf("누적된 값:%d\n", sum);
	}
	printf("누적된 값:%d\n", sum);
	return 0;
}