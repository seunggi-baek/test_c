#include<stdio.h>

int main()
{
	int nums[5];
	int max;
	int i;

	printf("�ټ� ���� ���ڸ� �Է��ϼ���:");

	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &nums[i]);//10 30 40 20 50
	}

	max = 0;

	for (i=0;i<5;i++)
	{
	    if (max < nums[i])
	    {
			max = nums[i];
	    }
	}
	printf("���� ū ���� :%d�Դϴ�.\n", max);

	return 0;
}