#include<stdio.h>
#include<string.h>

// ���ڿ� ó�� �Լ�
// string copy(strcpy) : ���ڿ� ���� �Լ�
// string lenght(strlen) : ���ڿ� ���� �Լ�
// string compare(strcmp) : ���ڿ� �� �Լ� 
// string concatenation(ctrcat) : ���ڿ� ���� �Լ�
int main()
{
	char name[10] = { 0 };
	char tel[20]= { 0 };
	char address[50]= { 0 };
	char str[80]= { 0 };

	printf("�̸��� �Է��ϼ���:");
	gets_s(name,sizeof(name));
	strcpy_s(str,sizeof(str), name);
	strcat_s(str, sizeof(str), ",");

	printf("��ȭ��ȣ�� �Է��ϼ���:");
	gets_s(tel, sizeof(tel));
	strcat_s(str, sizeof(str), tel);
	strcat_s(str, sizeof(str), ",");
	
	printf("�ּҸ� �Է��ϼ���:");
	gets_s(address, sizeof(address));
	strcat_s(str, sizeof(str), address);
	
	puts(str);
	return 0;
}