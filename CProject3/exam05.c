#include<stdio.h>

int main()
{
	int nData = 10;
	int nNewData = 20;
	int nResult = 10;

	printf("%d\n", (nData == nResult) || (nData > nNewData)); // 1
	printf("%d\n", nData != nResult && nData < nNewData); // 0
	printf("%d\n", nData >= nResult && --nNewData); // 1
	printf("%d\n", nNewData); // 21

	printf("%d\n", (nData + nResult)<nNewData);

	return 0;
}