#include<stdio.h>


/*
vitamin_C �߱����� ������� ���ȣ 1������ 9������ 9���� �ֽ��ϴ�.
���ȣ�� Ÿ��, ���̸� ���� �Է� ���� �Ŀ� �� �ٿ� ����ϴ� ���α׷�
��, ���ȣ�� ����, Ÿ���� �Ǽ���, ���̴� ���������� ó���Ѵ�.
*/

int main()
{
	char number;
	double batting_avg;
	int age;

	printf("���ȣ�� �Է��ϼ���:");
	scanf_s("%c",&number,1);
	printf("Ÿ���� �Է��ϼ���:");
	scanf_s("%lf",&batting_avg);
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d",&age);

	printf("%c�� ������ Ÿ���� %lf�̰� ���̴� %d�� �Դϴ�.\n", number, batting_avg, age);


	return 0;
}-------