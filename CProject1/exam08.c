#include<stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	
	printf("������ �ϳ��� �Է��ϼ���:");
	scanf_s("%d",&num1); // Ű����κ��� ������ �Է�
	printf("�Է� ���� �������� %d�Դϴ�.\n", num1);

	//scanf_s("������ �ϳ��� �Է��ϼ���:%d",&num2); // scanf_s�� ������ �Է¹ް��� �ϴ� Ư�����ڸ�
	//printf("�Է� ���� �������� %d�Դϴ�.\n", num2);

	printf("������ �ΰ��� �Է��ϼ���.:");
	scanf_s("%d%d", &num3,&num4);	
	printf("�Է¹��� �������� %d %d�Դϴ�.\n", num3, num4);

	return 0;
}