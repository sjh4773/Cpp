#include <iostream>

using namespace std;

int main()
{
	// ���� : ����Ÿ�� *������; �� ���·� �����Ѵ�.
	int iNumber = 100;
	// ���� ����� *�� �ٿ��ָ� �ش� Ÿ���� ������ ������ ����ȴ�.
	// ���� �տ� &�� �ٿ��ָ� �ش� ������ �޸� �ּҰ� �ȴ�.
	// pNum�� iNumber ������ �޸� �ּҸ� ������ ���� �ƴ�. �׷��Ƿ� pNum
	// �� �̿��ؼ� iNumber�� ���� ������ �� �ְ� �� ���̴�.
	int* pNum = &iNumber;
	*pNum = 1234;

	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(double*) << endl;

	// pNum�� �̿��ؼ� iNumber�� ���� �����غ���
	// �������� �̿��ؼ� ���� �����ų� ������ �� �ִ�.
	// �������� ������ ���� �տ� *�� ���̰� �Ǹ� �������� �ȴ�.

	cout << "iNumber Value : " << iNumber << endl;
	cout << "iNumber Address : " << &iNumber << endl;
	cout << "pNum Value: " << pNum << endl;
	cout << "pNum Address : " << &pNum << endl;

	/*
	�����Ϳ� �迭�� ���� : �迭���� �����ʹ�. �迭�� ��ü�� �ش� �迭��
	�޸𸮿����� ������ �ּҸ� �ǹ��Ѵ�.
	*/
	int iArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "Array Address : " << iArray << endl;
	cout << "Array Address : " << &iArray[0] << endl;

	int* pArray = iArray;

	cout << pArray[2] << endl;

	/*
	������ ���� : +, - ������ �����Ѵ�. ++, -- �� �����ѵ� �� �����ϰ� �Ǹ�
	�ܼ��� �޸� �ּҰ��� 1 �����ϴ� ���� �ƴϴ�. int �������� ���
	int Ÿ���� �޸� �ּҸ� ���� �Ǵµ� �޸� �ּҿ� �� �����ָ�
	1������ �ƴ� ����Ű�� �ش� ������ Ÿ���� ����Ÿ�� ũ�⸸ŭ �����ϰԵȴ�.
	int �������̹Ƿ� int�� ũ���� 4��ŭ �����ϰ� �Ǵ� ���̴�.
	*/

	cout << pArray << endl;
	cout << pArray + 2 << endl;
	cout << *pArray << endl;
	cout << *(pArray + 2) << endl;
	cout << *pArray + 00 << endl;

	return 0;


	return 0;
}