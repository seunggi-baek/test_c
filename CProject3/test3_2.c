#include<stdio.h>

int main()
{
	// switch ~ case
	// A (90�� �̻�) B (80�� �̻�) C (70�� �̻�) D (60�� �̻�) F (60�� �̸�)

	int nInput = 0; // ���� ����
	char chCredit; // ���� ����

	scanf_s("%d", &nInput);

	nInput = nInput / 10;
	
	switch (nInput)
	{
    case 10 :
	case 9 :
		chCredit = 'A';
		break;
	case 8 :
		chCredit = 'B';
		break;
	case 7 :
		chCredit = 'C';
		break;
	case 6 :
		chCredit = 'D';
		break;
	default :
		chCredit = 'F';
	}
	printf("Creadit:%c", chCredit);

	return 0;
}