#include<stdio.h>

int main()
{
	char str1[] = "My string";
	char* str2 = "Your string";

	printf("%s %s\n", str1, str2);

	str2 = "Our string";
	printf("%s %s\n", str1, str2);

	str1[0] = 'X';
	printf("%s %s\n", str1, str2);

	/**(str2 + 1) = 'X'; 
	printf("%s %s\n", str1, str2);*/ // 수정불가X

	/*printf("%p\n", str2);
	str2 = str2 + 10;
	printf("%p\n", str2);
	printf("%s\n", str2);*/

	return 0;
}