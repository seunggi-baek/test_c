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
		{ "홍길동",23,"010-1111-2222","울릉도 독도"},
		{"이순신",35,"010-2222-3333","서울 건천동"},
		{"장보고",19,"010-3333-4444","완도 청해진"},
		{"유관순",15,"010-4444-5555","충남 천안"},
		{"안중근",45,"010-5555-6666","황해도 해주"}
	};

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%10s,%5d,%15s,%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);

	}
	return 0;
}