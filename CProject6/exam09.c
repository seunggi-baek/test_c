#include<stdio.h>

int main()
{
	char str[50] = "I like C Programming";
	char str2[10];

	printf("string:%s\n", str); 
	printf("string:%c\n", str[19]); // g
	printf("string:%c\n", str[20]); // null (\0)
	printf("string:%c\n", str[21]); // ���ڿ��� �ʰ��ص� �������� ����

	printf("string:%s\n", str2); // �����Ⱚ

	str[8] = '\0'; // null ���ڴ� ���ڿ��� ���� �ǹ��Ѵ�. 
	printf("string:%s\n", str); // I like C

	str[6] = '\0';
	printf("string:%s\n", str); // I like

	str[5] = '\0'; 
	printf("string:%s\n", str); // I

	str[0] = '\0';
	printf("string:%s\n", str);


	return 0;
}