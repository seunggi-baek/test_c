#include<stdio.h>

int main()
{
	int lot;

	printf("당첨 번호를 입력하세요:");
	scanf_s("%d", &lot); // 1,2,3

	switch (lot)
	{
	   case 1:
		   printf("김서방\n");
		   break;
	   case 2:
		   printf("흥가네\n");
		   break;
	   case 3:
		   printf("안산댁\n");
	   default:
		   printf("당첨자가 없습니다.");
	}

	return 0;
}