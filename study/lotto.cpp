#include <iostream>
#include <time.h>

using namespace std;

int main() {
	
	srand((unsigned int)time(0));

	// Lotto Program
	int iLotto[45] = {};

	// 1 ~ 45 ������ ���ڸ� ���ʴ�� �־��ش�.
	for (int i = 0; i < 45; ++i)
	{
		iLotto[i] = i + 1;
	}


	// shuffle
	int iTemp, idx1, idx2;
	// 100�� ���� ���� �����ش�.
	for (int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 45;
		idx2 = rand() % 45;

		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;
	}

	for (int i = 0; i < 6; ++i)
	{
		cout << iLotto[i] << "\t";
	}

	cout << "���ʽ���ȣ : " << iLotto[6] << endl;


	return 0;

}