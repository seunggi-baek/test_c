#include<stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision);

int main()
{
	struct vision robot;
	printf("로보트의 시력을 입력하세요(좌,우):");
	// 멤버 참조 연산자(.)는 주소 연산자보다 우선 순위가 높다.
	scanf_s("%lf%lf", &robot.left, &robot.right);

	robot=exchange(robot);

	printf("%1.lf,%1.lf", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;

}