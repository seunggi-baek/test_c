#include<stdio.h>
#include<string.h>

int main()
{
	char fruit[80] = "apple";
	char* strp = "banana";
	int len;
	int len2;

	len2 = strlen(fruit);

	printf("sizeof:%zd\n", sizeof(fruit)); // �迭 ��ü�� ũ��
	printf("strlen:%d\n", len2); // �迭�� ����� ���ڿ��� ���� 

	len = strlen(strp);
	printf("���ڿ��� ����:%d\n", len);

	return 0;
}