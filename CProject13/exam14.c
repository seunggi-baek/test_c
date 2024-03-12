#include<stdio.h>

typedef int INT;
typedef int* PTR_INT;

typedef unsigned int UNIT;
typedef unsigned int* PTR_UNIT;

typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

int main()
{
	INT num1 = 20;
	PTR_INT pnum = &num1;

	UNIT num2 = 190;
	PTR_UNIT pnum2 = &num2;

	UCHAR ch = 'z';
	PTR_UCHAR pch = &ch;

	printf("%d,%u,%c\n", *pnum,*pnum2,*pch );
	return 0;
}