#include<stdio.h>

// �ϳ��� ���ڸ� �ݺ������� ������ϸ� ���ڿ��� ������� �ȴ�.
// ���ڿ��� �̷��� ���� �������� �ݵ�� �ι��ڸ� ä���ش�.
int main()
{
	char str[80];
	int ch;
	int i;
	printf("���ڿ��� �Է��ϼ��� :"); // "Love"
	i = 0;
	while (1)
	{
		ch = getchar();
		if (ch == '\n')
			break;
		str[i] = ch;
		i++;

	}
	str[i] = '\0';
	
	/*
	for (i = 0; i < 4; i++)
	{
		ch=getchar(); // Ű����κ��� ���ڸ� �Է� �޾� �����Ѵ�.
		str[i] = ch; // �Էµ� ���ڸ� �迭�� ���ʷ� �����Ѵ�.
	}
	str[i] = '\0'; // �������� �ι��ڸ� �����Ͽ� ���ڿ��� �ϼ��Ѵ�.
	*/
	printf("�Էµ� ���ڿ� :");
	/*for (i = 0; i < 5; i++)
	{
		putchar(str[i]);
	}*/
	i = 0; // i�� �ٽ� �ʱ�ȭ
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	// �迭�� ����Ǵ� ���ڿ� �׸��� c���� ��� ���ڿ��� ������ null���ڰ� �ڵ����� ���Եȴ�
	// ���ڿ� ���ڿ��� ���� ������ '\0'(null)
	// 'c' "c"
	return 0;
}