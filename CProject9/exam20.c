#include<stdio.h>

// 하나의 문자를 반복적으로 입출력하면 문자열의 입출력이 된다.
// 문자열을 이력할 때는 마지막에 반드시 널문자를 채워준다.
int main()
{
	char str[80];
	int ch;
	int i;
	printf("문자열을 입력하세요 :"); // "Love"
	i = 0;
	while (1)
	{
		ch = getchar();
		if (ch == '\n')
			break;
		str[i] = ch;
		i++;

	}
	str[i] = '\0';
	
	/*
	for (i = 0; i < 4; i++)
	{
		ch=getchar(); // 키보드로부터 문자를 입력 받아 리턴한다.
		str[i] = ch; // 입력된 문자를 배열에 차례로 저장한다.
	}
	str[i] = '\0'; // 마지막에 널문자를 저장하여 문자열을 완성한다.
	*/
	printf("입력된 문자열 :");
	/*for (i = 0; i < 5; i++)
	{
		putchar(str[i]);
	}*/
	i = 0; // i를 다시 초기화
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	// 배열에 저장되는 문자열 그리고 c언어에서 모든 문자열의 끝에는 null문자가 자동으로 삽입된다
	// 문자와 문자열의 구분 기준은 '\0'(null)
	// 'c' "c"
	return 0;
}
