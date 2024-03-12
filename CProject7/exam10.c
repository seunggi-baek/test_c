#include<stdio.h>

int main()
{

	char ch = 'A';
	int in = 100;
	double db = 100.0;

	char* cp = &ch;
	int* ip = &in;
	double* dp = &db;

	printf("%zd,%zd,%zd\n", sizeof(cp), sizeof(ip), sizeof(dp)); //포인터변수의 크기  
	// char*       int*        double*  >> 8byte
	printf("%zd,%zd,%zd\n", sizeof(*cp), sizeof(*ip), sizeof(*dp)); //포인터 변수의 값이 가리키는 데이터 타입의 크기 
	// char 1byte   int 4byte    double 8byte 

	return 0;
}