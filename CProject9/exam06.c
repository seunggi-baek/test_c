#include<stdio.h>

int main()
{
	int age;
	char* greeting;

	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);

	if (age > 30)
		greeting="ó�� �˰ڽ��ϴ�.";
	else
		greeting="�ݰ�����.";
	printf("�λ縻 :%s\n",greeting);

		
    return 0;
}

