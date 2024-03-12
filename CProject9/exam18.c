#include<stdio.h>
#include<string.h>

int main()
{
	char novel[800] = { 0 };
	char str_in[80];

	while (1)
	{
		printf("문자열을 입력하세요 : ");
		gets_s(str_in,80);
		
		if (strcmp(str_in, "끝")==0)
			break;
		
		strcat_s(novel, sizeof(novel), str_in);
		strcat_s(novel, sizeof(novel), " ");
		printf("현재까지의 줄거리 : %s\n",novel);
		
		puts("\n");
	}
	return 0;
}

// novel 배열을 널문자로 초기화 하지 않으면 쓰레기 문자들이 있으므로 초기화 한다.