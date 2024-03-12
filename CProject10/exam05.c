#include<stdio.h>

void increase();

int num = 100; // 전역 변수

int main()
{
	
	for(int i = 0; i < 5; i++)
	{
		increase();
		printf("   num:%d   ",num++);
	}
	return 0;
}

void increase()
{
	//int sum = 0;
	static int sum = 0; // 정적 변수. 함수가 사라져도 변수가 사라지지 않는다.
	// 정적 변수는 자동 초기화
	sum++; // sum = sum + 1;

	printf("sum:%d", sum);
	printf("   num:%d", num);
}