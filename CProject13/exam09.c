#include<stdio.h>

struct score
{
	int kor;
	int eng;
	int mat;
};
int main()
{
	// ����ü ������
	struct score a = { 90,80,70 };
	struct score* sp = &a;

	// ������� ������(.)�� ���� ������(*)���� �켱������ �����Ƿ� ��ȣ�� �ʿ��ϴ�.
	printf("����:%d\n", (*sp).kor);
	printf("����:%d\n", (*sp).eng);
	printf("����:%d\n", (*sp).mat);
	printf("========================\n");

	// ���� ��� ���� ������( -> )
	printf("����:%d\n", sp->kor);
	printf("����:%d\n", sp->eng);
	printf("����:%d\n", sp->mat);
	return 0;
}