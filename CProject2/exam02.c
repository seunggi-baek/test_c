#include<stdio.h>

int main()
{
	char ch= 'A';// ���� ����� ���ÿ� ���� A 65,a 97
	// character(char) 1byte ����Ÿ�� ���� 0�� 48

	printf("%d\n", ch); // 65
	printf("%c\n", ch); // A

	// �Լ� = ���, ()����
	printf("literal int size:%zd\n",sizeof(7));
	printf("literal int size:%zd\n", sizeof(7.0));
	printf("literal int size:%zd\n", sizeof('A'));
	printf("literal int size:%zd\n", sizeof(ch));



	return 0;
}