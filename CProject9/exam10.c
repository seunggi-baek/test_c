#include<stdio.h>
#include<string.h> // ������� ����

// ���ڿ� ó�� �Լ�
// string copy(strcpy) : ���ڿ� ���� �Լ�
// string lenght(strlen) : ���ڿ� ���� �Լ�
// string compare(strcmp) : ���ڿ� �� �Լ� 
// string concatenation(strcat) : ���ڿ� ���� �Լ�
int main()
{
	char str1[20] = "apple";
	char str2[20] = "banana";
	char temp[20];

	strcpy_s(temp, sizeof(temp), str1);
	strcpy_s(str1, sizeof(str1), str2);
	strcpy_s(str2, sizeof(str2), temp);
	
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);

	return 0;
}