#include<stdio.h>

enum season {spring, summer, fall, winter}; // 0,1,2,3

int main()
{
	enum season ss;
	char* cp = NULL;
	ss = summer;

	printf("%d\n", ss);

	switch (ss)
	{
	case spring:
		cp = "spring";
		break;
	case summer:
		cp = "summer";
		break;
	case fall:
		cp = "fall";
		break;
	case winter:
		cp = "winter";
		break;
	}
	printf("내가 좋아하는 계절은 => %s\n", cp);

	return 0;
}