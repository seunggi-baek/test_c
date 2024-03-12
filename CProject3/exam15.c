#include<stdio.h>

int main()
{
	char sel;

	printf("M 오전, A 오후, E 저녁\n");
	printf("입력:");
	scanf_s("%c", &sel, 1);

	switch (sel)
	{
	case 'M':
		printf("Morning\n");
		break;
	case 'A':
		printf("Afternon\n");
		break;
	case 'E':
		printf("Evening\n");
		break;
	case 'm':
		printf("Morning\n");
		break;
	case 'a':
		printf("Afternon\n");
		break;
	case 'e':
		printf("Evening\n");

	}
	return 0;
}