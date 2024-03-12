#include<stdio.h>

int main()
{
	int nData = 20;

	if (nData == 20)
	{
		// printf("sucess1\n");
		puts("sucess1"); //puts : 단순히 문자열만 출력할 때, 줄바꿈 기능 포함
		printf("sucess2\n");
		printf("nData값은 %d입니다.\n",nData);

	}
	
	printf("이 부분은 참과 거짓에 상관없이 실행된다.");
	
	return 0;
}