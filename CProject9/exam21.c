#include<stdio.h>

int main()
{
	char str[80];
	int ch;
	int i;

	while (1)
	{
        printf("���ڿ��� �Է��ϼ���(����� ����) :");
		ch = getchar();
		if (ch == '\n')
			break;
		str[0] = ch;

		i = 1;
		while (1)
        {
			ch = getchar();
            if (ch == '\n')
				break;
			str[i] = ch;
			i++;
		}
		str[i]='\0';
		printf("�Էµ� ���ڿ�:%s\n", str);
	}
    
	return 0;
}