#include <iostream>

using namespace std;

int main()
{
	int* pNum;

	int iNumber1 = 1111;
	iNumber1 = 2222;
	pNum = &iNumber1;

	// ���� ������ : *�� 2�� ���δ�. �Ϲ� ������ ������ �Ϲ� ������ �޸�
	// �ּҸ� �����ϴ� ������� ���������ʹ� �������� �������̴�. �� ����
	// �����ʹ� ������ ������ �޸� �ּҸ� �����ϴ� �������̴�.

	int **ppNum = &pNum;

	*pNum = 3333;

	cout << "iNumber : " << iNumber1 << endl;
	cout << "iNumber Addr : " << &iNumber1 << endl;
	cout << "*pNum : " << *pNum << endl;
	cout << "pNum Value : " << pNum << endl;
	cout << "pNum Addr : " << &pNum << endl;
	cout << "*ppNum :" << *ppNum << endl;
	cout << "**ppNum :" << **ppNum << endl;
	cout << "ppNum Value : " << ppNum << endl;
	cout << "ppNum Addr : " << &ppNum << endl;

	return 0;
}