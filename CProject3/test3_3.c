#include<stdio.h>

int main()
{
	char ch = 0;
	int x = 0, y = 0;

	printf("a:+,b:-,c:*,d:/");
	printf("���� �ϳ�(a~d)�� ���� �� ���� �Է��ϼ���:");
	
	scanf_s("%c%d%d",&ch,1,&x,&y); // a 1 2


	switch (ch)
	{
	case 'a' :
		ch = x + y;
		printf("%d\n",ch);
		break;
	case 'b' :
		ch = x - y;
		printf("%d\n", ch);
		break;
	case 'c' :
		ch = x * y;
		printf("%d\n", ch);
		break;
	case 'd' :
		ch = x / y;
		printf("%d\n", ch);
		break;

	default:
			printf("�� �� ���� ���\n");
	}

	return 0;
}
/*
switch (ch)
	{
	case 'a' :
		printf("x+y=%d\n",x+y);
		break;
	case 'b' :
		printf("x-y=%d\n", x-y);
		break;
	case 'c' :
		printf("x*y=%d\n", x*y);
		break;
	case 'd' :
		printf("x/y=%d\n", x/y);
		break;

	default:
			printf("�� �� ���� ���\n");
*/