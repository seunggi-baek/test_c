#include<stdio.h>

int main()
{
	int nData = 10; // 지역 변수
	
	printf("%d\n", nData); //10

	if (nData > 0)
	{
		int nData = 0; // 지역 변수
		printf("%d\n", nData); // 0
	}

	printf("%d\n", nData); // 10

	return 0;
}

// 지역 변수는 중괄호{} 안에서 사용 가능함.