#include<stdio.h>

// 문자열은 배열의 형태로 구현되어 있다
// 문자열의 끝에는 널문자 포함이다.
int main()
{
	//char str[80] = {'d','r','e','a','m','\0'}; // "dream"
	char str[80] = "dream";
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	

	printf("배열에 저장된 문자열의 길이:%d\n", count);
	return 0;
}