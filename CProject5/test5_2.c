#include<stdio.h>

int main()
{
	int num1;
	int num2;

	printf("�ΰ��� ���� �Է�:");
	scanf_s("%d%d", &num1, &num2);
	printf("%d�� %d�� ���밪�� ū ����:%d\n",num1,num2,AbsoCompare(num1,num2));

	// -20 > 10

	return 0;
}

int AbsoCompare(int num1, int num2) 
{
	// �Լ��� �ٸ� �Լ��� ȣ�� �� �� �ִ�.
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	if (num < 0)
		//return num * (-1);
		return num=num * (-1);
	else
	    return num;
}