#include<stdio.h>

// ���ڿ��� �迭�� ���·� �����Ǿ� �ִ�
// ���ڿ��� ������ �ι��� �����̴�.
int main()
{
	//char str[80] = {'d','r','e','a','m','\0'}; // "dream"
	char str[80] = "dream";
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	

	printf("�迭�� ����� ���ڿ��� ����:%d\n", count);
	return 0;
}