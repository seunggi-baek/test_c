#include<stdio.h>

      /*
      전기요금= 기본요금+(사용량*kw당요금)+세금
      구분    코드번호   기본요금    kw당요금    세금
      가정용     1       1,130원     127.8원     전체금액의 9%
      산업용     2        660원       88.5원     전체금액의 8% 
      교육용     3        370원        52원      전체금액의 5%
      */

int main()
{
    int code, amount; //코드번호, 사용량
    double basic, price, tax_rat, total, tax; // 기본요금, kw당요금, 세금비율, 전기요금, 세금

    printf("코드번호를 입력하세요(1 가정용,2 산업용,3 교육용):");
    scanf_s("%d", &code);

    printf("전기 사용량을 입력하세요(kw):");
    scanf_s("%d", &amount);
    //price = 660 + (amount * 88.5);
    //tax = price * 0.09;
    //total = price + tax;

    switch (code)
    {
    case 1 :
        basic = 1130;
        price = 127.8;
        tax_rat = 0.09;
        
        break;
    case 2:
        basic = 660;
        price = 88.5;
        tax_rat = 0.08;
        
        break;
    case 3:
        basic = 370;
        price = 52;
        tax_rat = 0.05;
        
        break;
    default:
        puts("알 수 없는 명령입니다.\n");
    }
    tax = (basic + (amount * price)) * tax_rat;

    total = (basic + (amount * price)) + tax;

    printf("전기요금은 %.0lf입니다.", total);

	return 0;
}