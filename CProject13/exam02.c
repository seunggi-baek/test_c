#include<stdio.h>

struct cracker
{
	int price;
	int calories;
};
int main()
{
	struct cracker basasak;

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ���.");
	scanf_s("%d%d", &basasak.price, &basasak.calories);

	printf("����:%d\nĮ�θ�:%d\n", basasak.price, basasak.calories);

	return 0;
}