#include<stdio.h>


/*
전기 사용량을 kw단위로 입력하면 사용 요금을 계산해주는 프로그램
기본요금 : 660원
kw당 사용요금 : 88.5원
전체요금 : 기본요금 + (전기 사용량 * kw당 요금)
세금은 전체 요금의 9%(0.09)
최종 사용요금 = 전체요금 + 세금
*/

int main()
{
	int amount;  // 전기사용량
	double price, tax, total;
	

	printf("전기 사용량을 입력하세요(kw):");
	scanf_s("%d", &amount);

	price = 660 + (amount * 88.5);
	tax = price * 0.09 ;
	total = price + tax;

	printf("전기 사용요금은 %lf원입니다.", total);



	return 0;
}