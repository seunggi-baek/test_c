#include<stdio.h>

int main()
{
	char ch1, ch2;
	/*
	printf("ù��° ���ڸ� �Է��ϼ���:");
	scanf_s("%c",&ch1,1);

	printf("�ι�° ���ڸ� �Է��ϼ���:");
	scanf_s(" %c", &ch2, 1);
	*/

	printf("�ΰ��� ���ڸ� �Է��ϼ���:");
	scanf_s("%c %c", &ch1,1,&ch2,1);

	printf("ù��° ����:%c\n", ch1);
	printf("�ι�° ����:%c\n", ch2);


	return 0;
}