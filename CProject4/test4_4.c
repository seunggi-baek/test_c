#include<stdio.h>

/*
*****
****
***
**
*
*/

// 입력값에 따라 별표(*) 표시, while,if

int main()
{
	int n;
	int i;

	printf("양수를 입력하세요:");
	scanf_s("%d", &n);

	i = 0;
	while (i<n)
	{
		printf("*");
		i++;
		
		if (i % n == 0)
			printf("\n");

	}
	return 0;
}