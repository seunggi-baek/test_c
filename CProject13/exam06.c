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
	printf("�κ�Ʈ�� �÷��� �Է��ϼ���(��,��):");
	// ��� ���� ������(.)�� �ּ� �����ں��� �켱 ������ ����.
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