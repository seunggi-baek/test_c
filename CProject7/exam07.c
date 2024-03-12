#include<stdio.h>

void assign(int*); //함수 원형 선언 //포인터의 변수명은 생략 가능, 타입만 지정해줘도 된다


int main()
{
	int cheoli = 0;

	assign(&cheoli);

	printf("함수가 호출된 후에 cheoli에 저장된 값:%d\n", cheoli);


	return 0;
}


void assign(int* ip)  //이미 매개변수 선언
{
	// 1) 포인터 변수에 100으로 초기화
	// 2) 포인터 변수에 100을 더한다
	*ip = 100; 	// 1)int* ip = 100; // 이미 매개변수 선언했기때문에 다시 선언해줄 필요 X
	*ip = *ip + 100; 

	//주소로 했기 때문에 반환값이 필요없다
}