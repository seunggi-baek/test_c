#include<stdio.h>
/*
 * 키보드로부터 양수를 반복적으로 입력받으면서 그 합을 출력
 * 이 과정을 음수가 입력될때까지 반복한다
 * 처음 부터 음수가 입력되면 프로그램은 바로 종료한다.
*/

int main()
{
	int n = 0;
	int sum = 0;

	scanf_s("%d", &n); //처음에 음수가 입력되면 프로그램은 바로 종료한다.

	while (0 <= n)
	{
		sum += n;
		printf("지금까지의 입력된 값의 합은:%d\n", sum);
		printf("양수를 입력하세요:");
		scanf_s("%d", &n);
	}
	
	return 0;
}