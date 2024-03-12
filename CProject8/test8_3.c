#include<stdio.h>

double ary_avg(int*);

int main()
{
	int ary[5];
	int i;
	double res;
	int* ap;
    
    ap = ary;// 포인터 변수를 배열로 초기화
	
	for (i = 0; i < 5; i++) // 키보드로부터 값을 입력 받는다. (포인터 사용)
	{
		scanf_s("%d", ap+i); // scanf_s("%d",&ary[i]);
	}

	res = ary_avg(ap);// 함수 호출 및 결과값 res에 저장

	printf("배열의 평균은:");
	printf("%.2lf\n", res);

	return 0;
}

double ary_avg(int* ap)
{
	int i;
	int tot = 0;

	for (i = 0; i < 5; i++)
	{
		tot += ap[i];
	}
	
	return tot / 5.0;
}