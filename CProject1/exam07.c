#include<stdio.h>

int main()
{
	int num = 0;

	num = 20;
	num = 30;

	printf("%d\n", num); // 30

	num = num + 10;

	printf("%d\n", num); // 40

	num = num + 10;

	printf("%d\n", num); // 50

	return 0;
}