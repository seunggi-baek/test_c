#include<stdio.h>

int main()
{
	int n = 0;
	int sum = 0;

	while (1)
	{
		// 0 보다 작은 값이 입력되면 반복을 멈춘다
		printf("0또는 양수값을 입력하세요:");
		scanf_s("%d", &n);
		if (n < 0)
			break;
		sum += n; // sum = sum + n 

	}
	printf("그 동안 누적된 값:%d\n", sum);
	return 0;
}