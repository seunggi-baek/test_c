#include<stdio.h>
int main()
{
	int input, change;
	int w500, w100, w50, w10;

	printf("µ·À» ÀÔ·ÂÇÏ¼¼¿ä:");
	scanf_s("%d", &input); // 1000¿ø, Ä¿ÇÇ°ª 150

	change = input - 150; // ÀÜµ·

	w500 = change / 500;
	change = change & 500;
	w100 = change / 100;
	change = change & 100;
	w50 = change / 50;
	change = change & 50;
	w10 = change / 10;


	printf("ÀÜµ· %d¿ø\n", change);
	printf("500¿ø %d°³\n", w500);
	printf("100¿ø %d°³\n", w100);
	printf("50¿ø %d°³\n", w50);
	printf("10¿ø %d°³\n", w10);



	return 0;
}