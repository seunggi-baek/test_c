#include<stdio.h>

// 구조체 : 배열은 같은 형태 자료형, 구조체는 혼합 자료형
// 구조체를 사용하기 위해서는 먼저 구조체의 형태를 컴파일러에게 알려줘야 한다.
// 기억공간 할당과는 전혀 관계가 없고 새로운 자료형이 만들어 진다.
struct student
{
	int num;
	double grade;
};
int main()
{
	struct student  s1;
	// s1 = 100;
	// s1 = 100.5;
	// s1 = 100,100.5;

	// 멤버 참조 연산자  (.)
	s1.num = 2;
	s1.grade = 2.7;

	printf("학번:%d\n학점:%.1f\n", s1.num,s1.grade);


	return 0;
}