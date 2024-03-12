#include<stdio.h>

// 포인터 배열 : 포인터 변수들을 배열요소로 갖는 배열
int main()
{
	/*char* ptr_ary = "dog";

	printf("%s\n", ptr_ary);*/
	
	char* ptr_ary[5];
	int i;

	ptr_ary[0] = "dog";
	ptr_ary[1] = "elephant";
	ptr_ary[2] = "horse";
	ptr_ary[3] = "tiger";
	ptr_ary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", ptr_ary[i]);
	}
	

	return 0;

}
// 포인터 배열에 초기화하는 것은 문자열이 저장된 기억공간의 시작주소값이 배열요소에 각각 초기화 되는 것.