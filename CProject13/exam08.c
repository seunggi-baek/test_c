#include<stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};
int main()
{
	struct address list[5] =
	{
		{ "ȫ�浿",23,"010-1111-2222","�︪�� ����"},
		{"�̼���",35,"010-2222-3333","���� ��õ��"},
		{"�庸��",19,"010-3333-4444","�ϵ� û����"},
		{"������",15,"010-4444-5555","�泲 õ��"},
		{"���߱�",45,"010-5555-6666","Ȳ�ص� ����"}
	};

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%10s,%5d,%15s,%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);

	}
	return 0;
}