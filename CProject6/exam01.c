#include<stdio.h>

// �迭(���� ����, ���� Ÿ��(�ڷ���), �̾�� �Ѵ�)

int main()
{
	int arr[5];
	int sum = 0;
	int i;

	// �迭�� ��ġ index : 0���ͽ���
	
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	printf("%d\n%d\n%d\n%d\n%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",arr[i]);
	}
	// �迭 ��ҿ� ����� ���� ��
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
		printf("�迭 ��ҿ� ����� ���� ��:%d\n", sum);
	}
	


	return 0;
}

// �迭 ��ҿ� ����� ���� ��
