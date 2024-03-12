#include<stdio.h>

int main()
{
	char* fruit = "strawberry";
	printf("%s\n",fruit);

	 char fruit2[20] = "strawberry2"; // 배열 선언과 동시에 초기화
	 printf("%s\n", fruit2);
	 // fruit2 = 'a'; error
	 // fruit2[0] = 'a';

	char fit[20]; 
	//fit = "strawberry2";

	return 0;
}