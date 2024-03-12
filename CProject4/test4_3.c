#include<stdio.h>

// 키보드로 부터 입력된 정수값을 구구단 형식으로 출력
// while 2*1=2....2*9=18

int main()
{
	int dan;
	int i=1;

	printf("한개의 단을 입력하세요:");
	scanf_s("%d", &dan);

	while (i<10)
	{
		printf("%d*%d=%d\n", dan, i, i * dan);
		i++;
	}
	
	return 0;
}