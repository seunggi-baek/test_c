#include<stdio.h>

int main()
{
	int height = 0;
	int days = 0;


	do {
		height = 55 * ++days; //������ ���İ��� ���� ���� ���ƾ� �Ѵ�
	} while (300 > height); // �칰 ���� 3m, �Ϸ�55cm

	printf("�����̰� �칰�� �ö󰡴µ� �ɸ� �� ��%d��\n", days);
	
	return 0;
}
/*
    do {
        height = height + 55;
		days++; // days = days + 1; 
    } while (height<300)
*/
