#include<stdio.h>

int main()
{
	char fruit[80] = "straw";
	// string concatenation ����

	strcat_s(fruit, sizeof(fruit), "berry");

	printf("����� ���ڿ�:%s", fruit);

	return 0;
}