#include<stdio.h>
#include<string.h>

int main()
{
	char novel[800] = { 0 };
	char str_in[80];

	while (1)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets_s(str_in,80);
		
		if (strcmp(str_in, "��")==0)
			break;
		
		strcat_s(novel, sizeof(novel), str_in);
		strcat_s(novel, sizeof(novel), " ");
		printf("��������� �ٰŸ� : %s\n",novel);
		
		puts("\n");
	}
	return 0;
}

// novel �迭�� �ι��ڷ� �ʱ�ȭ ���� ������ ������ ���ڵ��� �����Ƿ� �ʱ�ȭ �Ѵ�.