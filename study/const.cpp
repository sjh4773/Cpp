#include <stdlib.h>
#include <stdio.h>

int main()
{
	// ������ ����
	// �ڷ��� ������
	// �ּ� ������ �ش��ϴ� �޸� ������ int�� �ؼ��ϰڴ�.
	// �ּҸ� �����ϴ� ������ ũ��� ��� ����.
	int* pInt = nullptr;

	// �ּҸ� ����

	char* pChar = nullptr;
	short* pShort = nullptr;

	// ������ ������ ũ��� 8 ����Ʈ��.
	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;

	// pInt�� : int* ���� �̱� ������, ����Ű�� ���� int�� �ؼ��Ѵ�.
	// ���� �ּҰ��� 1 �����ϴ� �ǹ̴� ���� int ��ġ�� �����ϱ� ���ؼ� sizeof(int) ������ �����ϰ� �ȴ�.

	// �����Ϳ� �迭
	// �迭�� Ư¡
	// 1. �޸𸮰� �������� �����̴�.
	// 2. �迭�� �̸��� �迭�� ���� �ּ��̴�.

	int iArr[10] = {};

	// int ������ ����
	*(iArr + 0) = 10; // iArr[0] = 10;
	*(iArr + 1) = 10; // iArr[1] = 10;

	// const
	volatile const int cint = 100;

	// ���ȭ
	// l-value : ����
	// r-value : ���
	int ii = 10;
	
	pInt = (int*)&cint;
	*pInt = 300;
	printf("cin ��� : %d\n", cint);


	return 0;
}