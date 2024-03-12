#include<stdio.h>

int main()
{
	char animal[10][8] = {"monkey","elephant","dog","sheep","pig","lion","tiger","puma","turtle","fox"};
	// char animal[][10] = 행은 생략할 수 있지만 열은 생략할 수 없다.

	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);

	for (i = 0;i < count; i++)
	{
		printf("%s\n", animal[i]);

	}

	return 0;
}