#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20] = "banana";
	char str2[20] = "apple";
	char temp[20];
	int res;

	// �� ���ڿ��� ���Ͽ� �����ϴ� ��(���� ����:a,b,c,d....)
	// str1 > str2 : 1      str1 < str2 : -1    str1 == str2 : 0
	res = strcmp(str1,str2); // ���ڿ� ��


	if (res > 0)
	{
		strcpy_s(temp, sizeof(temp), str1);
		strcpy_s(str1, sizeof(str1), str2);
		strcpy_s(str2, sizeof(str2), temp);
	}

	
	printf("%d\n", res);
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	printf("%d\n", strcmp("�ܿ�", "�ܿ�")); // 0


	return 0;
}