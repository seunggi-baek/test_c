#include<stdio.h>

int main()
{
	int total=0;
	int i;
	int num;

	printf("0���� num������ ����,num��?");
	scanf_s("%d", &num);

	for (i=0;i<=num;i++)
	{
		total += i;

	}
	printf("0���� %d������ ���� ���:%d",num,total);
	return 0;
}