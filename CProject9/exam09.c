#include<stdio.h>

void user_strcpy(char*, char*);

int main()
{
	char friut[20]; 

	user_strcpy(friut, "strawberry");

	printf("�迭�� ����� ���ڿ�:%s", friut); // strawberry

	return 0;
}

void user_strcpy(char* des, char* src)
{
	while (*src != '\0') //src�� �ι��ڰ� �ƴ϶�� ��� �ݺ���.
	{
		*des = *src; // src�� ���� des�� ������.
		src++;
		des++;
	}
	*des = '\0'; // ���ڿ��� ���Ḧ �˷��ִ� �� ���ڸ� �߰���.
}