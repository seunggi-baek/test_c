#include<stdio.h>

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* ap;

	printf("%p\n", &ary); // �迭 ���� �ּҰ�
	printf("%p\n", ary); // �迭 ��ü�� ���� �ּҰ�
	printf("%p\n", &ary[0]); // ary[0]�� �迭�� ù��° ���̹Ƿ� �ᱹ ���� �ּҰ��� ����.

	ap = &ary[0];

	printf("%p\n", ap); //ary[0]�� ���� �ּҰ��� ����.
	printf("%d\n", *ap); // ���� �ּҰ��� �ִ� ����. 10
	printf("%p,%p\n", ap + 1, &ap[1]); // �� ��� ary[1]�� �ּҰ�.
	printf("%d,%d\n", *(ap + 1), *&ap[1]); // 20
	printf("%d,%d\n", ary[3], ap[3]);  // 40


	return 0;
}