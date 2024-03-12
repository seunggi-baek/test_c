#include<stdio.h>

void func(int(*)(int, int));
int sum(int , int );
int mul(int , int );
int max(int , int );

int main()
{
	// 함수 포인터 변수는 함수의 형태만 같으면 기능과 상관없이 모든 함수 포인터를 저장 할 수 있다.
	int sel;
	int a=0;

	printf("1. 두 정수의 합\n");
	printf("2. 두 정수의 곱\n");
	printf("3. 두 정수 중에서 큰 값 계산\n");
	printf("원하는 작업을 선택하세요:");

	scanf_s("%d", &sel);

	switch (sel)
	{
		case 1:
			/*a = sum(10, 20);
			printf("%d\n", a);*/
			func(sum);
			break;
		case 2:
			/*a = mul(10, 20);
			printf("%d\n", a);*/
			func(mul);
			break;
		case 3:
			/*a = max(10, 20);
		    printf("%d\n", a);*/
			func(max);
			break;

	}


	return 0;
}

void func(int(*fp)(int , int ))
{
	int a, b;
	
	printf("두 정수 값을 입력하세요 :");
	scanf_s("%d%d", &a, &b);

	int res = fp(a, b);
	printf("결과:%d\n", res);
}
	int sum(int a, int b)
	{
		return a + b;
	}

	int mul(int a, int b)
	{
		return a * b;
	}

	int max(int a, int b)
	{
		if (a > b)
			return a;
		else
			return b;
	}