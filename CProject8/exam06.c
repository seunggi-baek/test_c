#include<stdio.h>

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* ap = ary;
	int i;

	for (i=0;i<5;i++)
	{
		printf("%5d", *ap); //포인터 변수로 배열 요소 내용 출력
		ap++;
		
	}
	return 0;
}