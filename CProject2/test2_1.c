#include<stdio.h>


/*
���� ��뷮�� kw������ �Է��ϸ� ��� ����� ������ִ� ���α׷�
�⺻��� : 660��
kw�� ����� : 88.5��
��ü��� : �⺻��� + (���� ��뷮 * kw�� ���)
������ ��ü ����� 9%(0.09)
���� ����� = ��ü��� + ����
*/

int main()
{
	int amount;  // �����뷮
	double price, tax, total;
	

	printf("���� ��뷮�� �Է��ϼ���(kw):");
	scanf_s("%d", &amount);

	price = 660 + (amount * 88.5);
	tax = price * 0.09 ;
	total = price + tax;

	printf("���� ������� %lf���Դϴ�.", total);



	return 0;
}