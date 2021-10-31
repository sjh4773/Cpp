#include <iostream>
#include <time.h>

// console input output ��������̴�. �ܼ�â���� ����� �ϴ� ��ɵ���
// �������ִ� ��������̴�.
#include <conio.h>

using namespace std;

int main()
{
	srand((unsigned int)time(0));

	int iNumber[25] = {};

	for (int i = 0; i < 24; ++i)
	{
		iNumber[i] = i + 1;
	}

	// ���� ������ ĭ�� �������� ����д�. ������ �ǹ��ϴ� ������ Ư���� ����
	// ����Ұǵ� INT_MAX��� ���� ����� ���̴�. INT_MAX�� �̹� ���ǵǾ� �ִ� ������
	// int�� ǥ���� �� �ִ� �ִ밪�̴�.

	iNumber[24] = INT_MAX;

	// ���� �ִ� ��ġ�� ������ ������ ������ش�.
	int iStarIndex = 24;

	// ������ ������ �����ϰ� 1 ~ 24 ������ ���ڸ� �����ش�. �� �ε����� 0 ~ 23��
	// �ε��������� �����ش�.
	int iTemp, idx1, idx2;

	for (int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 24;
		idx2 = rand() % 24;

		iTemp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = iTemp;
	}

	while (true)
	{
		system("cls");
		// i for���� �������� �ǹ��Ѵ�.
		for (int i = 0; i < 5; ++i)
		{
			// j for���� ���� ĭ�� �ǹ��Ѵ�.
			for (int j = 0; j < 5; ++j)
			{
				// i�� 0�϶� j�� 0 ~ 4���� �ݺ��Ѵ�. �� ��� 0 * 5 + (0 ~ 4)�� ���ϰ� �Ǽ�
				// �ε����� 0, 1, 2, 3, 4 �� ������ �ȴ�.
				if (iNumber[i * 5 + j] == INT_MAX)
					cout << "*\t";
				else
					cout << iNumber[i * 5 + j] << "\t";
			}

			cout << endl;
		}

		// true�� �־ ���� ��� ����� ��� �����صд�.
		bool bWin = true;

		// ������ ���߾����� üũ�Ѵ�.
		for (int i = 0; i < 24; ++i)
		{
			if (iNumber[i] != i + 1)
			{
				bWin = false;
				break;
			}
		}

		if (bWin == true)
		{
			cout << "���ڸ� ��� ������ϴ�." << endl;
			break;
		}
		
		cout << "w : �� s : �Ʒ� a : ���� d : ������ q : ���� : ";
		// _getch() �Լ��� ���� 1���� �Է¹޴� �Լ��̴�. �� �Լ��� Enter�� ġ��
		// �ʴ��� ���ڸ� ������ ���� �ٷ� �� ���ڸ� ��ȯ�ϰ� ����ȴ�.
		char cInput = _getch();

		if (cInput == 'q' || cInput == 'Q')
			break;

		switch (cInput)
		{
		case 'w':
		case 'W':
			// ���� ������ ���� w�� ������ ���� �ö󰡼��� �ȵȴ�.
			if (iStarIndex > 4) {
				// ���� �ִ� ��ġ�� �ٷ� ���� �ִ� ���� �־��ش�.
				iNumber[iStarIndex] = iNumber[iStarIndex - 5];
				// ���� ��ġ�� ���� �־��־ 2���� ���� ���� ��ü�Ѵ�.
				iNumber[iStarIndex - 5] = INT_MAX;
				// ���� ��ĭ ���� �ö����Ƿ� ��ĭ ���� �ε����� ������ش�.
				iStarIndex -= 5;
			}
			break;
		case 's':
		case 'S':
			if (iStarIndex < 20) {
				iNumber[iStarIndex] = iNumber[iStarIndex + 5];
				iNumber[iStarIndex + 5] = INT_MAX;
				iStarIndex += 5;
			}
			break;
		case 'a':
		case 'A':
			if (iStarIndex % 5 != 0) {
				iNumber[iStarIndex] = iNumber[iStarIndex - 1];
				iNumber[iStarIndex - 1] = INT_MAX;
				--iStarIndex;
			}
			break;
		case 'd':
		case 'D':
			if (iStarIndex % 5 != 4) {
				iNumber[iStarIndex] = iNumber[iStarIndex + 1];
				iNumber[iStarIndex + 1] = INT_MAX;
				++iStarIndex;
			}
			break;

		}
	}

	cout << "������ �����մϴ�." << endl;

	 return 0;
}