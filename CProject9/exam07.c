#include<stdio.h>

int main()
{
	char* str = "watermelon";
	int i = 0;

	while (str[i] != '\0')
	{
		if(i % 2==0) // Â¦¼ö

		printf("%c", str[i]); // wtreo
		i++;
	}
	return 0;
}