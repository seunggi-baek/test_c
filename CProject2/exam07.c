#include<stdio.h>

int main()
{
	double num1 = 245; // 245.00000
	int num2 = 3.1415; // 4byte : -2147483647~2147483647
	int num3 = 129;
	// char ch = num3; // char 0~255 -128~127
	unsigned char ch = num3;

	printf("���� 245�� �Ǽ���:%lf\n",num1);
	printf("�Ǽ� 3.1415�� ������:%d\n", num2);
	printf("ch�� ��:%d\n", ch);

	//printf("%d\n", 2147483647 + 1);


	return 0;
}