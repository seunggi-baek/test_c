#include<stdio.h>

int main()
{
	char word[80];
	int i,r;
	int count = 0;

	printf("단어를 입력하세요:");
	scanf_s("%s", word,80); // 배열은 &를 붙히지 않음. // apple -> apple\0

	for (i=0 ; word[i] != '\0' ; i++) // strlen(word).  // \0 = 문장의 끝
	{
		count++;
	}
	printf("count(글자수)=%d\n",count);
	printf("단어를 뒤집으면:");

	for (i = count-1; i>=0; i--) // count = 글자수
	{
		printf("%c", word[i]);
	}
	printf("\n");
	printf("%s\n", word);
	return 0;
}