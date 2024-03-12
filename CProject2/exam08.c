#include<stdio.h>

int main()
{
	int result;
	
	// 나누기  정/정 => 정,   정/실 => 실	

	result = 10 / 4;
	printf("%d\n", result);
	printf("%d\n", 10 / 4);
	//printf("%lf\n", 10 / 4) 타입 불일치  정/정 => 실
	printf("%lf\n", 10 / 4.0); // 10.0 /4.0
	//printf("%d\n", 10 / 4.0) 타입 불일치  정/실 => 정

	return 0;
}