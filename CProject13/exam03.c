#include<stdio.h>

struct profile
{
	int age;
	double height;
	char* np;
};
struct student
{
	struct profile pf;
	int num;
	double grade;
};
int main()
{
	struct student s1;
	s1.pf.age = 23;
	s1.pf.height = 187.5;
	s1.pf.np = "ȫ�浿";
	s1.num = 5;
	s1.grade = 4.4;

	printf("�̸�:%s\n", s1.pf.np);
	printf("����:%d\n", s1.pf.age);
	printf("Ű:%.1lf\n", s1.pf.height);
	printf("�й�:%d\n", s1.num);
	printf("����:%.1lf\n", s1.grade);


	return 0;
}