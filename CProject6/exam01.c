#include<stdio.h>

// 배열(연속 저장, 같은 타입(자료형), 이어야 한다)

int main()
{
	int arr[5];
	int sum = 0;
	int i;

	// 배열의 위치 index : 0부터시작
	
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	printf("%d\n%d\n%d\n%d\n%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",arr[i]);
	}
	// 배열 요소에 저장된 값의 합
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
		printf("배열 요소에 저장된 값의 합:%d\n", sum);
	}
	


	return 0;
}

// 배열 요소에 저장된 값의 합
