#include<stdio.h>

/*

*
* *
* * *
* * * *
* * * * *

* ���� �����ϸ� ���� �����Ѵ�
* �ٱ� = ��, ���� = ��
*/
int main()
{
	int x;
	int y;

	for (x = 0 ; x <= 5 ; x++) 
	{
		for (y = 0 ; x > y ; y++) // x=0,y=X/ x=1,y=0/ x=2,y=0,1/x=3,y=0,1,2/x=4,y=0,1,2,3 
		{
           printf("*\t");
		}
		printf("\n");

	}
	return 0;
}
