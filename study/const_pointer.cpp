#include <stdlib.h>
#include <stdio.h>

void Output(const int* pI) // ���� �����͸� �о���̱⸸ �ϰ� �������� �ʴ´�.
{
	int i = *pI;
	// int* pInt = (int*)pI;
	//*pInt = 1000;
}


int main()
{
	// 1. const
	const int i = 100;

	// const�� ������
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// const ������
	const int* pConstInt = &a;
	// x -> *pConstInt = 100;

	int b = 0;
	const int* pConstInt = &b;


	// ������ const
	// ������ü�� ���ȭ
	int* const pIntConst = &a;
	*pIntConst = 400;
	//x -> pIntConst = &b;

	// �ʱ�ȭ �� ����Ų ��� ����Ŵ, ����Ű�� ������ ���� �� �� ����
	const int* const pConstIntConst = nullptr;

	int a = 0;
	Output(&a);

	return 0;
}

// ����Ű
// Ctrl + Shift + Space