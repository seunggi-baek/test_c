#include<stdio.h>
/*
    while 무한반복
	1부터 숫자를 1씩 증가하여 그 합이 5000을 초과하였을 때의 합과 해당 숫자를 출력하는 프로그램
*/
int main()
{
	int num = 0;
	int sum = 0;

	while (1)
	{
		num++;
		sum += num; // sum = sum + num
		if (sum > 5000)
			break;
		
	}

	printf("num:%d\n", num);
	printf("sum:%d\n", sum);

	
	return 0;
}