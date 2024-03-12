#include<stdio.h>

int main()
{
	int height = 0;
	int days = 0;


	do {
		height = 55 * ++days; //누적의 공식개념 양쪽 값이 같아야 한다
	} while (300 > height); // 우물 깊이 3m, 하루55cm

	printf("달팽이가 우물을 올라가는데 걸린 일 수%d일\n", days);
	
	return 0;
}
/*
    do {
        height = height + 55;
		days++; // days = days + 1; 
    } while (height<300)
*/
