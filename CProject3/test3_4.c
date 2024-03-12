#include<stdio.h>

int main()
{
	char ch = 0;
	int x = 0, y = 0;

	printf("+,-,*,/");
	printf("연산자 하나(+,-,*,/)와 숫자 두개를 입력하세요:");
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
		printf("알 수 없는 명령\n");
	}


	return 0;
}