#include<stdio.h>

// ���� ������ �Լ��� ����ǰų� ���� �����ϰ� ���� �޸𸮿��� �������.
// �Լ��ȿ� ����� ����
int main()
{
	int a = 10;
	int b = 20;
	int temp;

	printf("�ٲٱ� �� a:%d,b:%d\n", a, b);
	{
		temp = a;
		a = b;
		b = temp;
	}
	printf("�ٲ� �� a:%d,b:%d\n", a, b);
	printf("temp:%d", temp);

	return 0;
}