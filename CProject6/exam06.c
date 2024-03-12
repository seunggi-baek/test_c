#include<stdio.h>

int main()
{
	int ary[] = { 1,2,3,4,5 };
	int i,r;
	int temp;
	int size;

	size = sizeof(ary) / sizeof(ary[0]); //5  // sizeof = 배열의 크기

	printf("처음 배열에 저장된 값 : ");

	for (i = 0; i < size; i++) // 5
	{
		printf("%3d", ary[i]);
	}

	for (i = 0;i < size/2; i++) // 2
	{
		r = size-1-i; // -0, -1
		temp = ary[i];
		ary[i] = ary[r]; // r =3,4
		ary[r] = temp;
	}

	printf("\n 바뀐 배열에 저장된 값 : ");

	for (i = 0; i < size; i++)
	{
		printf("%3d", ary[i]);
	}
	return 0;
}