#include<stdio.h>

int main()
{
	char name[10], sex[2];
	int age;
    double height;

	printf("이름을 입력하세요:");
	scanf_s("%s", &name,10);
	printf("나이를 입력하세요:");
	scanf_s("%d", &age);
	printf("성별을 입력하세요:");
	scanf_s("%s", &sex,2);
	printf("키를 입력하세요:");
	scanf_s("%lf", &height);
	
    printf("이름:%s, 나이:%d살, 성별:%s, 키:%.1lfcm\n", name, age, sex, height);
 
	// 배열선언

	return 0;
}