#include<stdio.h>

int main()
{
	int arr[3] = { 15,25,35 };
	int* ptr = &arr[0]; // *ptr에 ary[0]의 주소를 저장.(배열명을 포인터로, 포인터를 배열명으로)

	printf("%d,%d\n", ptr[0], arr[0]); // 15, 15
	printf("%d,%d\n", ptr[1], arr[1]); // 25, 25
	printf("%d,%d\n", ptr[2], arr[2]); // 35, 35
	
	printf("%d %d\n", *ptr, *arr+2);  // 15, 17
	                                
	printf("%d\n", *(arr+2)); // 포인터 변수로, 35

	return 0;
}