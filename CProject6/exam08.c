#include<stdio.h>
#include<string.h>

int main()
{
	// char word[80] = { 'a','b' };
	// char ch = ' ';
	// int a = 0;

	int i;
	char word[80] = "";
	printf("%s\n", word);
	printf("%d",word[0]); // 0 = null

	// scanf_s() �Լ��� ���ڿ��� �Է� ������ ���ڿ� ���� null ���ڸ� �ڵ����� ä�� �ش�.
	printf("�ܾ �Է��ϼ���:");
	scanf_s("%s",word,80); // abcde\0

	i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	printf("%s�ܾ��� ���̴� %d�� �Դϴ�.\n0", word, i);

	//printf("%d", strlen("��"));

	return 0;
}