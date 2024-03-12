#include<stdio.h>

int main()
{
	int num = 0;

	do
	{
		printf("hello world!%d\n",++num);
	} 
	while (num>0); // 선처리 후 보고
	return 0;
}