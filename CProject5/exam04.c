#include<stdio.h>

int add(int nA, int nB)
{
	int nResult = 0;
	nResult = nA + nB;
	printf("nResult=%d\n", nResult);  // 7

	return nResult;  // 7
}

void main()  // void = ��ȯ ���� ������.
{
	int nResult = 0;
	nResult = add(3, 4)+10;  //  7+10

	printf("nResult=%d\n", nResult);  // 17
	
	return 0; // ��������
}