#include<stdio.h>



int main()
{
	int sec = 32767;
	int hour;  //시간
	int min;  //분
	// 연산자 / : 나누기 % :나머지
	
	hour = sec / 3600;
	sec = sec % 3600;
	min = sec / 60;
	sec = sec % 60;



	printf("32767초는 %d시간,%d분,%d초입니다.\n", hour, min, sec);




	return 0;
}