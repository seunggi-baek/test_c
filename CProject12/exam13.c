#include<Stdio.h>
#include<string.h>

void exchange(char*, void*, void*);

int main()
{
	// void 포인터는 가리키는 자료형에 대한 정보가 없는 포인터 
	// void 포인터는 가리키는 자료형이 정해져 있지 않으므로 모든 포인터를 저장 할 수 있다.
	// void* vp

	int a = 10;
	int b = 20;
	double da = 1.5;
	double db = 2.5;

	exchange("int", &a, &b);
	printf("정수값 교환 후 : %d,%d\n", a, b);
	
	exchange("double", &da, &db);
	printf("실수값 교환 후 : %.1lf,%.1lf\n", da, db);

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