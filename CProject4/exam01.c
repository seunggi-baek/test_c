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

	printf("num++:%d\n",num++); //1, ++가 뒤에 있는경우 값을 출력을 하고 증가시킴.
	printf("++num:%d\n", ++num); //3 , ++가 앞에 있는 경우 값을 증가시키고 출력함

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