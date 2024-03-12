#include<stdio.h>


/*
vitamin_C 야구단의 수비수는 등번호 1번부터 9번까지 9명이 있습니다.
등번호와 타율, 나이를 각각 입력 받은 후에 한 줄에 출력하는 프로그램
단, 등번호는 문자, 타율은 실수값, 나이는 정수값으로 처리한다.
*/

int main()
{
	char number;
	double batting_avg;
	int age;

	printf("등번호를 입력하세요:");
	scanf_s("%c",&number,1);
	printf("타율을 입력하세요:");
	scanf_s("%lf",&batting_avg);
	printf("나이를 입력하세요:");
	scanf_s("%d",&age);

	printf("%c번 선수의 타율은 %lf이고 나이는 %d살 입니다.\n", number, batting_avg, age);


	return 0;
}-------