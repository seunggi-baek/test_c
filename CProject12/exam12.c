#include<stdio.h>

void func(int(*)(int, int));
int sum(int , int );
int mul(int , int );
int max(int , int );

int main()
{
	// �Լ� ������ ������ �Լ��� ���¸� ������ ��ɰ� ������� ��� �Լ� �����͸� ���� �� �� �ִ�.
	int sel;
	int a=0;

	printf("1. �� ������ ��\n");
	printf("2. �� ������ ��\n");
	printf("3. �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� �۾��� �����ϼ���:");

	scanf_s("%d", &sel);

	switch (sel)
	{
		case 1:
			/*a = sum(10, 20);
			printf("%d\n", a);*/
			func(sum);
			break;
		case 2:
			/*a = mul(10, 20);
			printf("%d\n", a);*/
			func(mul);
			break;
		case 3:
			/*a = max(10, 20);
		    printf("%d\n", a);*/
			func(max);
			break;

	}


	return 0;
}

void func(int(*fp)(int , int ))
{
	int a, b;
	
	printf("�� ���� ���� �Է��ϼ��� :");
	scanf_s("%d%d", &a, &b);

	int res = fp(a, b);
	printf("���:%d\n", res);
}
	int sum(int a, int b)
	{
		return a + b;
	}

	int mul(int a, int b)
	{
		return a * b;
	}

	int max(int a, int b)
	{
		if (a > b)
			return a;
		else
			return b;
	}