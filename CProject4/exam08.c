#include<stdio.h>
/*
    while ���ѹݺ�
	1���� ���ڸ� 1�� �����Ͽ� �� ���� 5000�� �ʰ��Ͽ��� ���� �հ� �ش� ���ڸ� ����ϴ� ���α׷�
*/
int main()
{
	int num = 0;
	int sum = 0;

	while (1)
	{
		num++;
		sum += num; // sum = sum + num
		if (sum > 5000)
			break;
		
	}

	printf("num:%d\n", num);
	printf("sum:%d\n", sum);

	
	return 0;
}