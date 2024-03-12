#include<stdio.h>

void str_prn(char**, int);

int main()
{
	char* prt_ary[] = { "eagle","tiger","lion","squirrel" };
	int count = 0;

	count = sizeof(prt_ary) / sizeof(prt_ary[0]);

	str_prn(prt_ary, count);

	

	return 0;
}

void str_prn(char** spp, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("%s\n", spp[i]);
	}
}