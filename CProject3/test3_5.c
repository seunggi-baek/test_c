#include<stdio.h>

int main()
{
	double a, b, res = 0;
	char op; // ������

	printf("������ �Է��ϼ���:");
	scanf_s("%lf%c%lf",&a,&op,1,&b);  // 10/5

	
	switch (op)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case'*':
		res = a * b;
		break;
	case'/':
		res = a / b;
	default:
		puts("�ش��ϴ� �����ڰ� �����ϴ�.\n");
	}

	printf("���� ����� %.2lf�Դϴ�.\n", res);
	return 0;
}