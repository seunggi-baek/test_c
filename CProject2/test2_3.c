#include<stdio.h>

/*
역사 문화 예능 세 과목의 점수를 입력 받아서 총점과 평균을 구한 후에
출력하는 프로그램
*/

int main()
{
	int history; //역사
	int letters; //문학
	int art; //예능
	int total; //총점
	double average; // 평균

	printf("역사, 문학, 예능 점수를 입력하세요:");
	scanf_s("%d %d %d",&history,&letters,&art);
	
	total = history + letters + art;
	average = total / 3.0;
	//averge = (double)total/ 3


	printf("총점은 %d점이고 평균은 %lf점입니다.\n",total,average);

	return 0;
}