#include<stdio.h>

struct point // ù��° ��� : ����ü�� ������ �� �������� typedef�� �̿��Ͽ� struct point�� Point�� ��ȯ
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person // �ι�° ��� : ����ü�� �����԰� ���ÿ� typedef�� �̿��Ͽ� struct person�� Person���� ��ȯ
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

int main()
{
	Point pos = { 10,20 };
	Person man = { "ȫ�浿","010-1111-2222",100 };

	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
	return 0;
}