#include<stdio.h>

int main()
{
	int nData = 10; // ���� ����
	
	printf("%d\n", nData); //10

	if (nData > 0)
	{
		int nData = 0; // ���� ����
		printf("%d\n", nData); // 0
	}

	printf("%d\n", nData); // 10

	return 0;
}

// ���� ������ �߰�ȣ{} �ȿ��� ��� ������.