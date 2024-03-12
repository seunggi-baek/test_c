#include<stdio.h>

int main()
{
	int a[3][2] = { {1,2},{3,4},{5,6} };

	printf("a[0]:%p\n", a[0]);
	printf("*(a+0):%p\n", *(a + 0));
	printf("**(a+0):%d\n", **(a + 0));

	printf("a[0]:%p\n", a[1]);
	printf("*(a+0):%p\n", *(a + 1));
	printf("**(a+0):%d\n", **(a + 1));
	
	printf("a[0]:%p\n", a[2]);
	printf("*(a+0):%p\n", *(a + 2));	
	printf("**(a+0):%d\n", **(a + 2));

	printf("%d,%d\n", a[2][1], *(a[2]+1)); // 6,6
	printf("%d,%d\n", a[2][1], *(*(a+2))+1); // 6,6
	printf("%d,%d\n", a[2][1], **(a + 2) + 1); // 6,6
	printf("%d,%d\n", a[2][1], (*(a+2))[1]); // 6,6
	
	return 0;
}