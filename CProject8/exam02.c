#include<stdio.h>

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int i;

	for (i = 0; i < 5; i++)
	{
		// printf("%d", ary[i]);
		// printf("%d\n", (i+1)*ary[0]);
		// printf("%d\n", *(& ary[0] + i));
		printf("%d\n", *&ary[0] + i); // & = 주소, *& = 값 // *&ary[0]의 값은 "10"

	}
	return 0;
}