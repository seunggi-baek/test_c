#include<stdio.h>

int main()
{
	int lot;

	printf("��÷ ��ȣ�� �Է��ϼ���:");
	scanf_s("%d", &lot); // 1,2,3

	switch (lot)
	{
	   case 1:
		   printf("�輭��\n");
		   break;
	   case 2:
		   printf("�ﰡ��\n");
		   break;
	   case 3:
		   printf("�Ȼ��\n");
	   default:
		   printf("��÷�ڰ� �����ϴ�.");
	}

	return 0;
}