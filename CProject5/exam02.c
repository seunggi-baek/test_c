#include<stdio.h>

int sum(int a, int b) // parameter �Ű�����
{
	int res;
	res = a + b;

	return res;
}

int main()
{
	int a = 10;
	int b = 20;
	int res;

	res = sum(a,b); // argument, ���ڰ�

	printf("���:%d\n", res);

	return 0;
}
