#include<stdio.h>

int main()
{
	char c1 = 'A';

	printf("%p\n", &c1); // ���� �ּ�
	printf("%p\n", &c1 + 1); // ���� �ּ� +1
	printf("%p\n\n", &c1 + 2); //���� �ּ� +2

	printf("%c\n", c1); 
	printf("%c\n", c1+1);
	printf("%c\n\n", c1+2);

	printf("%c\n", *&c1);
	printf("%c\n", *&c1+1);
	printf("%c\n", *&c1+2);


	return 0;
}