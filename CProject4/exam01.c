#include<stdio.h>

int main()
{
	int num = 0;

	num = num + 1;
	
	num++;
	++num;
	
	printf("num:%d\n", num); //3
	
	num--;
	--num;

	printf("num:%d\n", num); //1

	printf("num++:%d\n",num++); //1, ++�� �ڿ� �ִ°�� ���� ����� �ϰ� ������Ŵ.
	printf("++num:%d\n", ++num); //3 , ++�� �տ� �ִ� ��� ���� ������Ű�� �����

	printf("num++:%d\n", num++); //3
	printf("++num:%d\n", ++num); //5

	printf("num--:%d\n", num--); //5
	printf("--num:%d\n", --num); //3

	printf("num--:%d\n", num--); //3
	printf("num--:%d\n", num--); //2

	printf("num++:%d\n", num++); //1
	printf("num++:%d\n", num++); //2
	return 0;
}