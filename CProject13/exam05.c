#include<stdio.h>

struct student
{
	int num;
	char name[20];
	double grade;
};
int main()
{
	struct student s1 = { 315,"ȫ�浿",2.4 };
	struct student s2 = { 247,"�̼���",3.7 };
	struct student s3 = { 330,"�������",4.4 };
	struct student max; // ������ ���� ���� �л��� �����͸� ������ ����ü ����

	/*if (s1.grade > s2.grade && s1.grade > s3.grade)
		max = s1;
	else if (s2.grade > s3.grade)
		max = s2;
	else
		max = s3;*/

	max = (s1.grade > s2.grade) ? s1 : s2;
	max = (max.grade > s3.grade) ? max : s3;

	printf("������ ���� ���� �л�\n");
	printf("����:%d\n", max.num);
	printf("�̸�:%s\n", max.name);
	printf("����:%.1lf\n", max.grade);
	

	return 0;
}