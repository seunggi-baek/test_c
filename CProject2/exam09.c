#include<stdio.h>

int main()
{
	int num1 = 3;
	int num2 = 4;
	double divResult; // �Ǽ�(8byte)

	//divResult = num1 / num2;
	divResult = (double)num1 / num2; // ���� ����ȯ - ����ȯ�� �ص� Ÿ�� ��ü�� ������ ����.


	printf("������ ���:%lf\n", divResult);
	printf("num=%d\n", num1);
	printf("num1�� ũ��:%zd\n", sizeof(num1));
	printf("divResult�� ũ��:%zd\n", sizeof(divResult));

	return 0;
}