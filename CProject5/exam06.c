#include<stdio.h>

// �Լ� ������ ����
int add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num)
{
	printf("���� ��� ���:%d\n",num);
}

int ReadNum(void) // ������ �޴°� ���� �� (void) or (����)
{
	int num;
	scanf_s("%d", &num);

	return num;
}

void HowToUseThisRrog(void) // ������ ���� �ʿ䵵, ����� �ʿ䵵 ������ /void��
{
	printf("�� ���� ������ �Է��Ͻø� ���� ����� ��µ˴ϴ�.\n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���.\n");

}
int main()
{
	int result, num1, num2;

	HowToUseThisRrog();  // ���� �Է� �ޱ� 
	num1 = ReadNum();  // num1 ���� 
	num2 = ReadNum();  // num2 ����
	result = add(num1, num2); // num1 + num2
	ShowAddResult(result);  // ���

	return 0;
}