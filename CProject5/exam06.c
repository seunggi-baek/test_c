#include<stdio.h>

// 함수 형태의 종류
int add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num)
{
	printf("덧셈 결과 출력:%d\n",num);
}

int ReadNum(void) // 변수를 받는게 없을 때 (void) or (생략)
{
	int num;
	scanf_s("%d", &num);

	return num;
}

void HowToUseThisRrog(void) // 변수를 받을 필요도, 사용할 필요도 없을때 /void문
{
	printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다.\n");
	printf("자! 그럼 두 개의 정수를 입력하세요.\n");

}
int main()
{
	int result, num1, num2;

	HowToUseThisRrog();  // 정수 입력 받기 
	num1 = ReadNum();  // num1 설정 
	num2 = ReadNum();  // num2 설정
	result = add(num1, num2); // num1 + num2
	ShowAddResult(result);  // 결과

	return 0;
}