#include<stdio.h>

int main()
{
	char name[10], sex[2];
	int age;
    double height;

	printf("�̸��� �Է��ϼ���:");
	scanf_s("%s", &name,10);
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);
	printf("������ �Է��ϼ���:");
	scanf_s("%s", &sex,2);
	printf("Ű�� �Է��ϼ���:");
	scanf_s("%lf", &height);
	
    printf("�̸�:%s, ����:%d��, ����:%s, Ű:%.1lfcm\n", name, age, sex, height);
 
	// �迭����

	return 0;
}