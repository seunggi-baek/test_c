#include<stdio.h>

int main()
{
	char* friut = "strawberry"; // fruit을 문자열 "strawberry"의 첫번째 문자를 가리키도록 초기화.

	while (*friut != '\0') // 포인터가 널문자를 만날때까지 반복.(문자열의 끝까지 반복)
	{
		printf("%s\n", friut); //현재 포인터가 가리키는 주소의 문자를 출력.
		friut++; // 포인터를 다음 문자로 이동
	}
	return 0;
}
/*
strawberry
trawberry
rawberry
awberry
wberry
berry
erry
rry
ry
y
*/