#include<stdio.h>

void user_strcpy(char*, char*);

int main()
{
	char friut[20]; 

	user_strcpy(friut, "strawberry");

	printf("배열에 저장된 문자열:%s", friut); // strawberry

	return 0;
}

void user_strcpy(char* des, char* src)
{
	while (*src != '\0') //src가 널문자가 아니라면 계속 반복함.
	{
		*des = *src; // src의 값을 des에 저장함.
		src++;
		des++;
	}
	*des = '\0'; // 문자열의 종료를 알려주는 널 문자를 추가함.
}