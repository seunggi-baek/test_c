#include<stdio.h>

int main()
{
	int val = 10;
	{
		int val = 20;
		{
			val++; // 가장 가까운 변수
		}
		printf("val:%d\n", val); // 21
	}
	printf("val:%d\n", val); // 10

	return 0;
}