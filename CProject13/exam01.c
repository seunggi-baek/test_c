#include<stdio.h>

// ����ü : �迭�� ���� ���� �ڷ���, ����ü�� ȥ�� �ڷ���
// ����ü�� ����ϱ� ���ؼ��� ���� ����ü�� ���¸� �����Ϸ����� �˷���� �Ѵ�.
// ������ �Ҵ���� ���� ���谡 ���� ���ο� �ڷ����� ����� ����.
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

	// ��� ���� ������  (.)
	s1.num = 2;
	s1.grade = 2.7;

	printf("�й�:%d\n����:%.1f\n", s1.num,s1.grade);


	return 0;
}