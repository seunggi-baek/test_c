#include<stdio.h>

struct profile
{
	char name[20]; // 이름 
	double grade; // 학점
	int english; // 영어 점수
};

void input_data(struct profile*);
void elite(struct profile*); // 학점이 4.0이상이고 영어 점수 90점 이상

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
	printf("이름,학점,영어 점수를 입력하세요:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%s %lf %d", (sp + i)->name,20, &(sp + i)->grade, &(sp + i)->english); // sp의 i번째 값.

	}
}

void elite(struct profile* sp)
{
	
	for (int i = 0; i < 5; i++)
	{
		if((sp+i)->grade >= 4.0 && (sp+i)->english >= 90)
		{
			printf("\n이름:%s, 학점:%.1lf, 영어 점수:%d\n", (sp+i)->name, (sp+i)->grade, (sp+i)->english);
		}
	
	}
}