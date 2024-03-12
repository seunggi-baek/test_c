#include<stdio.h>

int main()
{
	// switch ~ case
	// A (90점 이상) B (80점 이상) C (70점 이상) D (60점 이상) F (60점 미만)

	int nInput = 0; // 점수 저장
	char chCredit; // 학점 저장

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