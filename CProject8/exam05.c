#include<stdio.h>

int main()
{
	int arr[3] = { 15,25,35 };
	int* ptr = &arr[0]; // *ptr�� ary[0]�� �ּҸ� ����.(�迭���� �����ͷ�, �����͸� �迭������)

	printf("%d,%d\n", ptr[0], arr[0]); // 15, 15
	printf("%d,%d\n", ptr[1], arr[1]); // 25, 25
	printf("%d,%d\n", ptr[2], arr[2]); // 35, 35
	
	printf("%d %d\n", *ptr, *arr+2);  // 15, 17
	                                
	printf("%d\n", *(arr+2)); // ������ ������, 35

	return 0;
}