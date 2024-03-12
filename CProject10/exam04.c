#include<stdio.h>

void add_ten(int*);

int main()
{
	int a = 10;
	add_ten(&a); // аж╪р : call by reference
	printf("%d\n", a);
	return 0;
}

void add_ten(int* b)
{
	*b = *b + 10;
}