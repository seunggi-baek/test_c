#include<stdio.h>

/*
*****
****
***
**
*
*/

// �Է°��� ���� ��ǥ(*) ǥ��, while,if

int main()
{
	int n;
	int i;

	printf("����� �Է��ϼ���:");
	scanf_s("%d", &n);

	i = 0;
	while (i<n)
	{
		printf("*");
		i++;
		
		if (i % n == 0)
			printf("\n");

	}
	return 0;
}