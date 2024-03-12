#include<stdio.h>

void exchange(int*, int*);

int main()
{
	int cheoli = 10;
	int metel = 20;

	printf("원래값:cheoli=%d,metel=%d\n",cheoli,metel);

	exchange(&cheoli,&metel);

	printf("교환후:cheoli=%d,metel=%d\n",cheoli,metel);


	return 0;
}

void exchange(int* cp, int* mp)
{

	int temp; //지역(local)변수(함수 안에서만 사용)


	temp= *cp;
	*cp = *mp;
	*mp = temp;

}