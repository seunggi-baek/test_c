#include<stdio.h>

int main()
{
	char* pszData="Test Starting!"; //�����ͺ����� ����Ű�� ���
	char arry[] = "Test Starting2!"; //[]=�迭 char ary[]�� ������ �ΰڴٴ� �� // �迭���� �ִ� ary
	char ary;						//char ary;�� 1byte�� ��


	
	printf("%s\n", pszData);  //��:Test Starting!   //�����ͺ����� ����Ű�� ��� s->���ڿ�
	printf("%p\n", pszData);  //��:00007FF733DE9C28   //�����ͺ����� ����Ű�� ��� p->�ּ�
	printf("%c\n", pszData[0]);  //��:T �迭[0]->1��° �ڸ��� �ܾ�  c->�ܾ� // �����ͺ����� �迭ó�� ��밡��

	printf("arry=%s\n", arry);  //��:ary=Test Starting2!
	printf("arry=%p\n", arry); //��:ary=000000103CDEF5F8  ->�迭�� ��ü�� ���� �ּҰ��̴� 
							//=**** �����ͺ����� ���� �����̴�.***   char* pszData=char arry[]
	printf("arry[0]=%c\n", arry[0]);  //��:arry[0] = T

	printf("[%p],%c\n", pszData, *pszData); //��:[00007FF6CED39C28],T
											//	�̰� �ּҰ�		 �̰� ����Ű�� ���� ù��°
	printf("[%p],%c\n", pszData+1, *pszData+1); //��:[00007FF60F199C29],U 
												//  �̰� ���� �ּҰ�,(T����U) �����ƽ�Ű�ڵ带 ����һ�

	printf("[%p],%c\n", pszData + 1, *(pszData + 1)); //��:[00007FF66C9D9C29],e
														//�̰� ���� �ּҰ�, T ���� ������ e ���
														//�����ڿ켱������ ���� +1�� ���� �ϰ� ()���ش�
															
	printf("[%p],%c\n", pszData + 5, *(pszData + 5)); //Test Starting! -> ��:S / �����ּҷ� ���� �ټ�ĭ ���������� �����ּ�
	printf("[%p],%c\n", pszData + 13, *(pszData + 13)); // !
	printf("[%p],%c\n", pszData + 14, *(pszData + 14)); //���ڿ������� null�� ���ִ�
	printf("[%p],%c\n", pszData + 15, *(pszData + 15)); // null
	printf("[%p],%c\n", pszData + 16, *(pszData + 16)); // null


	printf("%zdbyte\n", sizeof(pszData)); //8byte	-> x64 8byte, x86 4byte
	printf("%zdbyte\n", sizeof(*pszData)); //1byte	-> T(������ ũ��)
	printf("%zdbyte\n", sizeof(*pszData+1)); //4byte  T=84 / 84+1=85�� �Ǹ鼭 int���� �ȴ�->%c�� �Ѵٸ� 1����Ʈ
											//->sizeofũ�⸦ ���ϴ� ������
											// +�� �Ѱ��� ����� ũ�⸦ ���ϴ°�(���� ��ü�� ũ�Ⱑ �ƴ�)
	// printf("%zdbyte\n", sizeof((int)pszData)); �̷����ϸ� 4byte�� ���´�
	// %zd ������ �ƴ� ���� ��Ÿ����
	// int a = (int)'T';
	// int b = 85;


	printf("%c\n", (*pszData + 1));  //U
	return 0;
}