#include<stdio.h>

struct profile
{
	char name[20]; // �̸� 
	double grade; // ����
	int english; // ���� ����
};

void input_data(struct profile*);
void elite(struct profile*); // ������ 4.0�̻��̰� ���� ���� 90�� �̻�

int main()
{
	struct profile new_staff[5];
	input_data(new_staff);
	elite(new_staff);


	return 0;
}

void input_data(struct profile* sp)
{
	int i;
	printf("�̸�,����,���� ������ �Է��ϼ���:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%s %lf %d", (sp + i)->name,20, &(sp + i)->grade, &(sp + i)->english); // sp�� i��° ��.

	}
}

void elite(struct profile* sp)
{
	
	for (int i = 0; i < 5; i++)
	{
		if((sp+i)->grade >= 4.0 && (sp+i)->english >= 90)
		{
			printf("\n�̸�:%s, ����:%.1lf, ���� ����:%d\n", (sp+i)->name, (sp+i)->grade, (sp+i)->english);
		}
	
	}
}