#include<stdio.h>

struct score
{
	int kor;
	int eng;
	int mat;
};
int main()
{
	// 구조체 포인터
	struct score a = { 90,80,70 };
	struct score* sp = &a;

	// 멤버참조 연산자(.)가 참조 연산자(*)보다 우선순위가 높으므로 괄호가 필요하다.
	printf("국어:%d\n", (*sp).kor);
	printf("국어:%d\n", (*sp).eng);
	printf("국어:%d\n", (*sp).mat);
	printf("========================\n");

	// 간접 멤버 참조 연산자( -> )
	printf("국어:%d\n", sp->kor);
	printf("국어:%d\n", sp->eng);
	printf("국어:%d\n", sp->mat);
	return 0;
}