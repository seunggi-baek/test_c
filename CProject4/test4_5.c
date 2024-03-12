#include<stdio.h>

int main()
{
	int total=0;
	int i;
	int num;

	printf("0ºÎÅÍ num±îÁöÀÇ µ¡¼À,numÀº?");
	scanf_s("%d", &num);

	for (i=0;i<=num;i++)
	{
		total += i;

	}
	printf("0ºÎÅÍ %d±îÁöÀÇ µ¡¼À °á°ú:%d",num,total);
	return 0;
}