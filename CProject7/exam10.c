#include<stdio.h>

int main()
{

	char ch = 'A';
	int in = 100;
	double db = 100.0;

	char* cp = &ch;
	int* ip = &in;
	double* dp = &db;

	printf("%zd,%zd,%zd\n", sizeof(cp), sizeof(ip), sizeof(dp)); //�����ͺ����� ũ��  
	// char*       int*        double*  >> 8byte
	printf("%zd,%zd,%zd\n", sizeof(*cp), sizeof(*ip), sizeof(*dp)); //������ ������ ���� ����Ű�� ������ Ÿ���� ũ�� 
	// char 1byte   int 4byte    double 8byte 

	return 0;
}