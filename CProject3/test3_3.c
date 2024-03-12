#include<stdio.h>

int main()
{
	char ch = 0;
	int x = 0, y = 0;

	printf("a:+,b:-,c:*,d:/");
	printf("문자 하나(a~d)와 숫자 두 개를 입력하세요:");
	
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
			printf("알 수 없는 명령\n");
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
			printf("알 수 없는 명령\n");
*/