#include<stdio.h>

int main()
{
	char ch = 0;
	int num = 0;
	int adr = 0;

	// &:�ּ� ������ (�޸� ���� �ּҰ�)

	printf("ch�� ������:%p\n", &ch);
	printf("num�� ������:%p\n", &num);
	printf("adr�� ������:%p\n", &adr);

	adr = &num;

	printf("adr=%x\n", adr);
	return 0;
}