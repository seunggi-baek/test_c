#include<stdio.h>

// �迭 �����ʹ� �迭 ��ü�� ����Ű�� �������̴�.
// 2���� �迭�� ó���ϴ� �Լ��� �Ű������δ� �迭�����͸� ����.
int main()
{
	int ary[5];

	printf("ary�� �ּ�:%p\n", ary);
	printf("ary�� �ּ�:%p\n", &ary);

	printf("ary+1�� �ּ�:%p\n", ary+1); // �迭 ��� +1 (4byte)
	printf("ary+1�� �ּ�:%p\n", &ary+1); // �迭 ��ü +1 (20byte)

	return 0;
}