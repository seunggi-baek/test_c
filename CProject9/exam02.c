#include<stdio.h>

int main()
{
	printf("dream�� (����) �ּҰ�:%p\n","dream"); // �����ּ�

	printf("ù��° ���ڸ� ���:%c\n", "dream"[0]); //d
	printf("�ι�° ���ڸ� ���:%c\n", "dream"[1]); //r
	printf("����° ���ڸ� ���:%c\n", "dream"[2]); //e
	printf("����° ���ڸ� ���:%c\n", *("dream"+3)); //e
	return 0;
}