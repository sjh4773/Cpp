#include <iostream>

using namespace std;

int main()
{
	int* pNum;

	int iNumber1 = 1111;
	iNumber1 = 2222;
	pNum = &iNumber1;

	// 이중 포인터 : *을 2개 붙인다. 일반 포인터 변수가 일반 변수의 메모리
	// 주소를 저장하는 변수라면 이중포인터는 포인터의 포인터이다. 즉 이중
	// 포인터는 포인터 변수의 메모리 주소를 저장하는 포인터이다.

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