#include<stdio.h>
#include<string.h>

void swap_string(char*, char*);

int main()
{
	char str1[20] = "apple";
	char str2[20] = "banana";

	swap_string(str1, str2);

	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
	return 0;
}

void swap_string(char* s1, char* s2)
{
	char temp[20];

	strcpy_s(temp, sizeof(temp), s1);
	strcpy_s(s1, sizeof(s1), s2);
	strcpy_s(s2, sizeof(s2),temp);
}