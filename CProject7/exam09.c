#include<stdio.h>

void exchange(int*, int*);

int main()
{
	int cheoli = 10;
	int metel = 20;

	printf("������:cheoli=%d,metel=%d\n",cheoli,metel);

	exchange(&cheoli,&metel);

	printf("��ȯ��:cheoli=%d,metel=%d\n",cheoli,metel);


	return 0;
}

void exchange(int* cp, int* mp)
{

	int temp; //����(local)����(�Լ� �ȿ����� ���)


	temp= *cp;
	*cp = *mp;
	*mp = temp;

}