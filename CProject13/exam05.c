#include<stdio.h>

struct student
{
	int num;
	char name[20];
	double grade;
};
int main()
{
	struct student s1 = { 315,"홍길동",2.4 };
	struct student s2 = { 247,"이순신",3.7 };
	struct student s3 = { 330,"세종대왕",4.4 };
	struct student max; // 학점이 가장 높은 학생의 데이터를 저장할 구조체 변수

	/*if (s1.grade > s2.grade && s1.grade > s3.grade)
		max = s1;
	else if (s2.grade > s3.grade)
		max = s2;
	else
		max = s3;*/

	max = (s1.grade > s2.grade) ? s1 : s2;
	max = (max.grade > s3.grade) ? max : s3;

	printf("학점이 가장 높은 학생\n");
	printf("학점:%d\n", max.num);
	printf("이름:%s\n", max.name);
	printf("학점:%.1lf\n", max.grade);
	

	return 0;
}