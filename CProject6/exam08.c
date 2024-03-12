#include<stdio.h>
#include<string.h>

int main()
{
	// char word[80] = { 'a','b' };
	// char ch = ' ';
	// int a = 0;

	int i;
	char word[80] = "";
	printf("%s\n", word);
	printf("%d",word[0]); // 0 = null

	// scanf_s() 함수는 문자열을 입력 받으면 문자열 끝에 null 문자를 자동으로 채워 준다.
	printf("단어를 입력하세요:");
	scanf_s("%s",word,80); // abcde\0

	i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	printf("%s단어의 길이는 %d자 입니다.\n0", word, i);

	//printf("%d", strlen("가"));

	return 0;
}