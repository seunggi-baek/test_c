#include<Stdio.h>
#include<string.h>

void exchange(char*, void*, void*);

int main()
{
	// void �����ʹ� ����Ű�� �ڷ����� ���� ������ ���� ������ 
	// void �����ʹ� ����Ű�� �ڷ����� ������ ���� �����Ƿ� ��� �����͸� ���� �� �� �ִ�.
	// void* vp

	int a = 10;
	int b = 20;
	double da = 1.5;
	double db = 2.5;

	exchange("int", &a, &b);
	printf("������ ��ȯ �� : %d,%d\n", a, b);
	
	exchange("double", &da, &db);
	printf("�Ǽ��� ��ȯ �� : %.1lf,%.1lf\n", da, db);

	return 0;
}

void exchange(char* type, void* vp1, void* vp2)
{
	int itp;
	double dtp;

	if (strcmp(type,"int")==0)
	{
		itp = *(int*)vp1;
		*(int*)vp1 = *(int*)vp2;
		*(int*)vp2 = itp;
	}
	

	if (strcmp(type,"double")==0)
	{
		dtp = *(double*)vp1;
		*(double*)vp1 = *(double*)vp2;
		*(double*)vp2 =  dtp;
	}
	return 0;
}