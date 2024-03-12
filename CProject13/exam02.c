#include<stdio.h>

struct cracker
{
	int price;
	int calories;
};
int main()
{
	struct cracker basasak;

	printf("바사삭의 가격과 열량을 입력하세요.");
	scanf_s("%d%d", &basasak.price, &basasak.calories);

	printf("가격:%d\n칼로리:%d\n", basasak.price, basasak.calories);

	return 0;
}