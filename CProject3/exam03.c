#include<stdio.h>

int main()
{
	int nData = 10;
	int nNewData = 20;
	int nResult = 10;

	printf("%d\n", nData == nResult); //����, 1
	printf("%d\n", nData != nResult); //���� �ʴ�, 0
	printf("%d\n", nData > nNewData); //0 
	printf("%d\n", nData < nNewData); //1
	printf("%d\n", nData >= nResult); //1
	printf("%d\n", nData <= nResult); //1

	
	return 0;
}