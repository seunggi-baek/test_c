#include<stdio.h>

int main()
{
	char str[] = "Good morning";

	printf("�迭 str�� ũ��:%zd\n",sizeof(str)); // 13 : null���ڰ� ���Ե� ũ��
	printf("null ���� ������ ���:%c\n", str[12]);

	str[12] = '?'; // null ���ڸ� ?�� �ٲ�
	printf("���ڿ� ���:%s\n",str); // null ���ڰ� ������鼭 �����Ⱚ�� ����

    str[12] = '\0';
	printf("���ڿ� ���:%s\n", str);

	return 0;
}