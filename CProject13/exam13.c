#include<stdio.h>

typedef struct
{
	int num;
	double grade;
}student;

void data_prn(student* sp);

int main()
{
	student s1 = { 315,4.2 }; // ����ü ������ �ּҰ��� �ƴϴ�.
	data_prn(&s1); // �׷��Ƿ� &�� �̿��� �ּҷ� �������.
	return 0;
}

void data_prn(student* sp)
{
	printf("�й�:%d\n", sp->num);
	printf("����:%.1lf\n", sp->grade);
}