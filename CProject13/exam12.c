#include<stdio.h>

// typedef : �� ������

typedef enum syllable 
{ 
	Do=1,Re=2,Mi=3,Fa=4,Sol=5,La=6,Ti=7
} Syllable;

void sound(Syllable sy);

int main()
{
	// enum syllable tone;
	Syllable tone;
	
	for (tone = Do; tone <= Ti ; tone += 1)
	{
		sound(tone);
	}

	return 0;
}

void sound(Syllable sy)
{
	switch(sy)
	{
	case Do:
		puts("���� �Ͼ� ��ȭ��");
		return;
	case Re:
		puts("���� �ձ� ���ڵ�");
		return;
	case Mi:
		puts("�̴� ���� �̳���");
		return;
	case Fa:
		puts("�Ĵ� ���� �Ķ���");
		return;
	case Sol:
		puts("���� ���� �ֹ��");
		return;
	case La:
		puts("��� �������~");
		return;
	case Ti:
		puts("�ô� ���� �ó���");
		return;
	}
	puts("�� �Բ� �θ���~ �������ļֶ�õ� �ֵ�~ §~");
}