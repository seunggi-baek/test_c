#include<stdio.h>



int main()
{
	int sec = 32767;
	int hour;  //�ð�
	int min;  //��
	// ������ / : ������ % :������
	
	hour = sec / 3600;
	sec = sec % 3600;
	min = sec / 60;
	sec = sec % 60;



	printf("32767�ʴ� %d�ð�,%d��,%d���Դϴ�.\n", hour, min, sec);




	return 0;
}