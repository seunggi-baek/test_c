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


	printf("나이를 입력하세요:");
	scanf_s("%d", &s1.pf.age);
	printf("키를 입력하세요:");
	scanf_s("%lf", &s1.pf.height);
	s1.pf.np = (char*) malloc(20);// 동적 할당 (저장할 주소=(형변환)malloc(메모리 크기)), 
	                                           // ex) arr = (int*)malloc(5 * sizeof(int))
	printf("이름을 입력하세요:");
	scanf_s("%s", s1.pf.np,20);
	printf("학번을 입력하세요:");
	scanf_s("%d", &s1.num);
	printf("학점을 입력하세요:");
	scanf_s("%lf", &s1.grade);


	printf("이름:%s\n", s1.pf.np);
	printf("나이:%d\n", s1.pf.age);
	printf("키:%.1lf\n", s1.pf.height);
	printf("학번:%d\n", s1.num);
	printf("학점:%.1lf\n", s1.grade);

	free(s1.pf.np); // 사용한 메모리를 운영체제에 반환.

	return 0;
}