#include<stdio.h>

      /*
      ������= �⺻���+(��뷮*kw����)+����
      ����    �ڵ��ȣ   �⺻���    kw����    ����
      ������     1       1,130��     127.8��     ��ü�ݾ��� 9%
      �����     2        660��       88.5��     ��ü�ݾ��� 8% 
      ������     3        370��        52��      ��ü�ݾ��� 5%
      */

int main()
{
    int code, amount; //�ڵ��ȣ, ��뷮
    double basic, price, tax_rat, total, tax; // �⺻���, kw����, ���ݺ���, ������, ����

    printf("�ڵ��ȣ�� �Է��ϼ���(1 ������,2 �����,3 ������):");
    scanf_s("%d", &code);

    printf("���� ��뷮�� �Է��ϼ���(kw):");
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
        puts("�� �� ���� ����Դϴ�.\n");
    }
    tax = (basic + (amount * price)) * tax_rat;

    total = (basic + (amount * price)) + tax;

    printf("�������� %.0lf�Դϴ�.", total);

	return 0;
}