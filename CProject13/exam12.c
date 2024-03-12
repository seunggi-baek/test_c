#include<stdio.h>

// typedef : 형 재정의

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
		puts("도는 하얀 도화지");
		return;
	case Re:
		puts("레는 둥근 레코드");
		return;
	case Mi:
		puts("미는 예쁜 미나리");
		return;
	case Fa:
		puts("파는 예쁜 파랑새");
		return;
	case Sol:
		puts("솔은 작은 솔방울");
		return;
	case La:
		puts("라는 라디오고요~");
		return;
	case Ti:
		puts("시는 졸졸 시냇물");
		return;
	}
	puts("다 함께 부르세~ 도레미파솔라시도 솔도~ 짠~");
}