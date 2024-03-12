#include<stdio.h>

int main()
{
	char fruit[80] = "straw";
	// string concatenation 연결

	strcat_s(fruit, sizeof(fruit), "berry");

	printf("연결된 문자열:%s", fruit);

	return 0;
}