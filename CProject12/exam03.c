#include<stdio.h>

void exchange_ptr(char** app, char** bpp);

int main()
{
	char* ap = "success";
	char* bp = "failure";

	printf("ap:%s\nbp:%s\n", ap, bp);
	
	exchange_ptr(&ap, &bp);
	
	printf("ap:%s\nbp:%s\n", ap, bp);

	return 0;
}

void exchange_ptr(char** app, char** bpp)
{
	char* tp;

	tp = *app;
	*app = *bpp;
	*bpp = tp;

}