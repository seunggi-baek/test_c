#include<stdio.h>

/*
���� ��ȭ ���� �� ������ ������ �Է� �޾Ƽ� ������ ����� ���� �Ŀ�
����ϴ� ���α׷�
*/

int main()
{
	int history; //����
	int letters; //����
	int art; //����
	int total; //����
	double average; // ���

	printf("����, ����, ���� ������ �Է��ϼ���:");
	scanf_s("%d %d %d",&history,&letters,&art);
	
	total = history + letters + art;
	average = total / 3.0;
	//averge = (double)total/ 3


	printf("������ %d���̰� ����� %lf���Դϴ�.\n",total,average);

	return 0;
}