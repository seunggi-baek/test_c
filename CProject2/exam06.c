#include<stdio.h>

int main()
{
	// %8d : �ʵ� ���� 8ĭ Ȯ���ϰ� ������ ����
	// %-8d : �ʵ� ���� 8ĭ Ȯ���ϰ� ���� ����
	printf("%-8s%14s%5s\n","�̸�","�����а�","�г�");
	printf("%-8s%14s%5d\n", "�赿��", "��ǻ�Ͱ���", 3);
	printf("%-8s%14s%5d\n", "������", "�̼�������", 2);
	printf("%-8s%14s%5d\n", "�Ѽ���", "�����а�", 4);
	
	return 0;
}