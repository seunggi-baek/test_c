#include<stdio.h>
#include<stdlib.h>

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


	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &s1.pf.age);
	printf("Ű�� �Է��ϼ���:");
	scanf_s("%lf", &s1.pf.height);
	s1.pf.np = (char*) malloc(20);// ���� �Ҵ� (������ �ּ�=(����ȯ)malloc(�޸� ũ��)), 
	                                           // ex) arr = (int*)malloc(5 * sizeof(int))
	printf("�̸��� �Է��ϼ���:");
	scanf_s("%s", s1.pf.np,20);
	printf("�й��� �Է��ϼ���:");
	scanf_s("%d", &s1.num);
	printf("������ �Է��ϼ���:");
	scanf_s("%lf", &s1.grade);


	printf("�̸�:%s\n", s1.pf.np);
	printf("����:%d\n", s1.pf.age);
	printf("Ű:%.1lf\n", s1.pf.height);
	printf("�й�:%d\n", s1.num);
	printf("����:%.1lf\n", s1.grade);

	free(s1.pf.np); // ����� �޸𸮸� �ü���� ��ȯ.

	return 0;
}