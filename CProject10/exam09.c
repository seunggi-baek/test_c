#include<stdio.h>

void exchange();
int a, b;
int main()
{

	printf("������ �ΰ��� �Է��ϼ��� :");
	scanf_s("%d%d", &a, &b);
	exchange();
	printf("a:%d,b:%d\n", a, b);
	return 0;
}

void exchange()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}