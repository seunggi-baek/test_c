#include<stdio.h>

int main()
{
	char ch = 0;
	int x = 0, y = 0;

	printf("+,-,*,/");
	printf("������ �ϳ�(+,-,*,/)�� ���� �ΰ��� �Է��ϼ���:");
	scanf_s("%c%d%d", &ch,1, &x, &y);

	switch (ch)
	{
	case '+':
		printf("x+y=%d\n",x+y);
		break;
	case '-':
		printf("x-y=%d\n",x-y);
		break;
	case '*':
		printf("x*y=%d\n",x*y);
		break;
	case '/':
		printf("x/y=%d\n",x/y);
		break;
	default:
		printf("�� �� ���� ���\n");
	}


	return 0;
}