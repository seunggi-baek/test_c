#include<stdio.h>

typedef struct
{
	int num;
	double grade;
}student;

void data_prn(student* sp);

int main()
{
	student s1 = { 315,4.2 }; // 구조체 변수는 주소값이 아니다.
	data_prn(&s1); // 그러므로 &를 이용해 주소로 만들어줌.
	return 0;
}

void data_prn(student* sp)
{
	printf("학번:%d\n", sp->num);
	printf("학점:%.1lf\n", sp->grade);
}