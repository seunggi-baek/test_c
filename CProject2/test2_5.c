#include<stdio.h>

int main()
{
	int a;
	int b;
	double c;

	printf("�� ������ �Է��ϼ���:");
	scanf_s("%d%d",&a,&b);
	c = a / (double)b;

	printf("������ ������� \"%d/%d\"=%lf�Դϴ�.", a, b, c);

	return 0;
}