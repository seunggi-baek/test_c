#include<stdio.h>

int main()
{
	int a, b, res;
	
	printf("두 정수를 입력하세요:");
	scanf_s("%d %d", &a, &b);

	if (b != 0)
	{
		res = a / b;
        printf("a를 b로 나눈 몫:%d\n", res);
	}
	
	printf("0이 입력되어 나눌 수 없습니다.");

	return 0;
}