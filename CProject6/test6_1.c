#include<stdio.h>

int main()
{
	char word[80];
	int i,r;
	int count = 0;

	printf("�ܾ �Է��ϼ���:");
	scanf_s("%s", word,80); // �迭�� &�� ������ ����. // apple -> apple\0

	for (i=0 ; word[i] != '\0' ; i++) // strlen(word).  // \0 = ������ ��
	{
		count++;
	}
	printf("count(���ڼ�)=%d\n",count);
	printf("�ܾ ��������:");

	for (i = count-1; i>=0; i--) // count = ���ڼ�
	{
		printf("%c", word[i]);
	}
	printf("\n");
	printf("%s\n", word);
	return 0;
}