#include<stdio.h>

int main()
{
	unsigned int num;
    // -2147483648 ~ 2147483647
	// 0~4294967295(unsigned)
	printf("unsigned int���� �ִ밪�� �Է��ϼ���:");
	scanf_s("%u", &num);

	printf("unsigned int���� ����� ����:%u", num);


	return 0;
}