#include<stdio.h>

int main()
{
	char word[40];
	int i;

	word[0] = 'L';
	word[1] = 'o';
	word[2] = 'v';
	word[3] = 'e';
	
	printf("%c\n", word[0]);
	printf("%c\n", word[1]);
	printf("%c\n", word[2]);
	printf("%c\n", word[3]);
	/*
	for (i = 0; i < 4; i++)
	{
		printf("%c", word[i]);
	}
	*/
	for (i = 3; i >= 0; i--)
	{
		printf("%c", word[i]);
	}
	
	printf("\n%s\n", word);

	printf("\n null 문자 : %c %d", '\0', '\0'); // 아무것도 안 나옴

}