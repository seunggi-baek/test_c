#include<stdio.h>

int main()
{
	char sel;

	printf("M ����, A ����, E ����\n");
	printf("�Է�:");
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