#include<stdio.h>

int main()
{
	char* pszData="Test Starting!"; //포인터변수가 가리키는 대상
	char arry[] = "Test Starting2!"; //[]=배열 char ary[]를 여러개 두겠다는 뜻 // 배열명이 있다 ary
	char ary;						//char ary;는 1byte의 값


	
	printf("%s\n", pszData);  //값:Test Starting!   //포인터변수가 가리키는 대상 s->문자열
	printf("%p\n", pszData);  //값:00007FF733DE9C28   //포인터변수가 가리키는 대상 p->주소
	printf("%c\n", pszData[0]);  //값:T 배열[0]->1번째 자리의 단어  c->단어 // 포인터변수도 배열처럼 사용가능

	printf("arry=%s\n", arry);  //값:ary=Test Starting2!
	printf("arry=%p\n", arry); //값:ary=000000103CDEF5F8  ->배열명 자체가 시작 주소값이다 
							//=**** 포인터변수랑 같은 원리이다.***   char* pszData=char arry[]
	printf("arry[0]=%c\n", arry[0]);  //값:arry[0] = T

	printf("[%p],%c\n", pszData, *pszData); //값:[00007FF6CED39C28],T
											//	이건 주소값		 이건 가리키는 것의 첫번째
	printf("[%p],%c\n", pszData+1, *pszData+1); //값:[00007FF60F199C29],U 
												//  이건 다음 주소값,(T다음U) 다음아스키코드를 출력할뿐

	printf("[%p],%c\n", pszData + 1, *(pszData + 1)); //값:[00007FF66C9D9C29],e
														//이건 다음 주소값, T 다음 문자인 e 출력
														//연산자우선순위에 의해 +1을 먼저 하게 ()쳐준다
															
	printf("[%p],%c\n", pszData + 5, *(pszData + 5)); //Test Starting! -> 값:S / 시작주소로 부터 다섯칸 떨어진곳에 시작주소
	printf("[%p],%c\n", pszData + 13, *(pszData + 13)); // !
	printf("[%p],%c\n", pszData + 14, *(pszData + 14)); //문자열끝에는 null이 들어가있다
	printf("[%p],%c\n", pszData + 15, *(pszData + 15)); // null
	printf("[%p],%c\n", pszData + 16, *(pszData + 16)); // null


	printf("%zdbyte\n", sizeof(pszData)); //8byte	-> x64 8byte, x86 4byte
	printf("%zdbyte\n", sizeof(*pszData)); //1byte	-> T(문자의 크기)
	printf("%zdbyte\n", sizeof(*pszData+1)); //4byte  T=84 / 84+1=85가 되면서 int값이 된다->%c를 한다면 1바이트
											//->sizeof크기를 구하는 연산자
											// +를 한것은 연산된 크기를 말하는것(문자 자체의 크기가 아닌)
	// printf("%zdbyte\n", sizeof((int)pszData)); 이렇게하면 4byte가 나온다
	// %zd 음수가 아닌 값을 나타내는
	// int a = (int)'T';
	// int b = 85;


	printf("%c\n", (*pszData + 1));  //U
	return 0;
}