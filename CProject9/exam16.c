#include<stdio.h>

int main()
{
	char str[80];
	printf("���ڿ��� �Է��ϼ���:");

 // scanf_s("%s", str, 80);
	gets_s(str, 80); // �� ĭ�� ���Ե� ���ڿ� �Է� ����
	
 // printf("�Էµ� ���ڿ�:%s\n", str);
	puts(str); // \n ����



	return 0;
}