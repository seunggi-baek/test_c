#include<stdio.h>

struct point // 첫번째 방법 : 구조체를 선언한 후 마지막에 typedef를 이용하여 struct point를 Point로 변환
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person // 두번째 방법 : 구조체를 선언함과 동시에 typedef를 이용하여 struct person을 Person으로 변환
{
	char name[20];
	char phoneNum[20];
	int age;
}Person;

int main()
{
	Point pos = { 10,20 };
	Person man = { "홍길동","010-1111-2222",100 };

	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
	return 0;
}