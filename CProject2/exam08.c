#include<stdio.h>

int main()
{
	int result;
	
	// ������  ��/�� => ��,   ��/�� => ��	

	result = 10 / 4;
	printf("%d\n", result);
	printf("%d\n", 10 / 4);
	//printf("%lf\n", 10 / 4) Ÿ�� ����ġ  ��/�� => ��
	printf("%lf\n", 10 / 4.0); // 10.0 /4.0
	//printf("%d\n", 10 / 4.0) Ÿ�� ����ġ  ��/�� => ��

	return 0;
}