#include<stdio.h>

int main()
{
	int age;
	char* greeting;

	printf("나이를 입력하세요:");
	scanf_s("%d", &age);

	if (age > 30)
		greeting="처음 뵙겠습니다.";
	else
		greeting="반가워요.";
	printf("인사말 :%s\n",greeting);

		
    return 0;
}

