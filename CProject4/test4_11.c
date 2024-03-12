#include<stdio.h>

int main()
{
	int num;

	printf("start");

	for (num=0;num<20;num++)
	{
		// 2배수 이거나 3배수 제외한 나머지값 출력

		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d\n", num);
	}

	printf("end\n");

	return 0;
}