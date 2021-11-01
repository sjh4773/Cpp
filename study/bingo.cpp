#include <iostream>
#include <time.h>
//#include <conio.h>

using namespace std;

enum AI_MODE
{
	AM_EASY = 1,
	AM_HARD
};

int main()
{
	srand((unsigned int)time(0));

	int iNumber[25] = {};
	int iAINumber[25] = {};

	for (int i = 0; i < 25; ++i)
	{
		iNumber[i] = i + 1;
		iAINumber[i] = i + 1;
	}

	int iTemp, idx1, idx2;

	for (int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 25;
		idx2 = rand() % 25;

		iTemp = iNumber[idx1];
		iNumber[idx1] = iNumber[idx2];
		iNumber[idx2] = iTemp;

		// AI ���ڵ� �����ش�
		idx1 = rand() % 25;
		idx2 = rand() % 25;

		iTemp = iAINumber[idx1];
		iAINumber[idx1] = iAINumber[idx2];
		iAINumber[idx2] = iTemp;
	}

	int iBingo = 0, iAIBingo = 0;
	int iAIMode;

	// AI ���̵��� �����Ѵ�.
	while (true) {
		cout << "1.Easy" << endl;
		cout << "2.Hard" << endl;
		cout << "AI ��带 �����ϼ��� : ";
		cin >> iAIMode;

		if (iAIMode >= AM_EASY && iAIMode <= AM_HARD)
			break;
	}

	/*
	AI Easy ���� ���� AI�� ���ڸ���� *�� �ٲ��� ���� ���� ����� ����
	�� ����� �ϳ��� �����ϰ� �Ѵ�.(�����ϰ�)
	*/
	// ���þȵ� ��� �迭�� ������ش�.
	int iNoneSelect[25] = {};
	// ���þȵ� ���� ������ �����Ѵ�
	int iNoneSelectCount = 0;


	while (true)
	{
		
		system("cls");

		cout << "================Player================" << endl;
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (iNumber[i * 5 + j] == INT_MAX)
					cout << "*\t";
				else
					cout << iNumber[i * 5 + j] << "\t";
			}
			
			cout << endl;
		}

		cout << "Bingo Line : " << iBingo << endl << endl;

		// AI ���� ���� ����Ѵ�.
		cout << "=================AI=================" << endl;

		switch (iAIMode)
		{
		case AM_EASY:
			cout << "AIMode : Easy" << endl;
			break;
		case AM_HARD:
			cout << "AIMode : Hard" << endl;
			break;
		}

		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				if (iAINumber[i * 5 + j] == INT_MAX)
					cout << "*\t";
				else
					cout << iAINumber[i * 5 + j] << "\t";
			}

			cout << endl;
		}

		// AI ���� �� ���� ����Ѵ�.
		cout << "AIBingo Line : " << iAIBingo << endl;



		// �ټ��� 5 �̻��� ��� ������ �����Ѵ�.
		if (iBingo >= 5)
		{
			cout << "Player �¸�" << endl;
			break;
		}

		else if (iAIBingo >= 5)
		{
			cout << "AI �¸�" << endl;
			break;
		}
		

		cout << "���ڸ� �Է��ϼ���(0 : ����) : ";
		

		int iInput;
		cin >> iInput;

		if (iInput == 0)
			break;
		else if (iInput < 1 || iInput > 25)
			continue;

		// �ߺ� �Է��� üũ�ϱ� ���� �����̴�. �⺻������ �ߺ��Ǿ��ٶ��
		// �ϱ� ���� true�� ����ش�.
		bool bAcc = true;


		for (int i = 0; i < 25; ++i)
		{
			if (iInput == iNumber[i])
			{
				bAcc = false;

				iNumber[i] = INT_MAX;

				break;
			}
		}

		// bAcc ������ true�� ��� �ߺ��� ���ڸ� �Է��ؼ� ���ڸ� *��
		// �ٲ��� �������Ƿ� �ٽ� �Է¹ް� continue ���ش�.
		if (bAcc)
			continue;

		// �ߺ��� �ƴ϶�� AI�� ���ڵ� ã�Ƽ� *�� �ٲ��ش�.
		for (int i = 0; i < 25; ++i)
		{
			if (iAINumber[i] == iInput)
			{
				iAINumber[i] = INT_MAX;
				break;
			}
		}

		// AI�� ������ �Ѵ�. AI�� �����ϴ� ���� AI ��忡 ���� �޶�����.
		switch (iAIMode)
		{
		case AM_EASY:
			// ���þȵ� ���� ����� ������ش�.
			// ���þȵ� ���� ������ ����� ���� �� ī�������ش�.
			iNoneSelectCount = 0;
			for (int i = 0; i < 25; ++i)
			{
				// ���� ���ڰ� *�� �ƴ� ���
				if (iAINumber[i] != INT_MAX)
				{
					// *�� �ƴ� ������ ��� iNoneSelectCount�� �ε����� Ȱ��
					// �Ѵ�. ���� �ȵ� ��Ͽ� �߰��Ҷ����� ������ 1�� ����
					// ���Ѽ� �� ���þȵ� ������ �����ش�.
					// �׷��� 0���� ī��Ʈ�� �����̹Ƿ� 0���� �ְ� ++�ؼ� 1��
					// �߰��Ǿ��ٶ�� ���ش�.
					iNoneSelect[iNoneSelectCount] = iAINumber[i];
					++iNoneSelectCount;
				}
			}

			// for���� ���������� �Ǹ� ���þȵ� ����� ���������
			// ���þȵ� ����� ������ ��������� �ȴ�.
			// ���þȵ� ����� ���� �� ������ �ϳ��� ������ ������ ���ؼ�
			// �ε����� �����ϰ� �����ش�.
			iInput = iNoneSelect[rand() % iNoneSelectCount];
			break;
		case AM_HARD:
			break;
		}

		// AI�� ���ڸ� ���������Ƿ� �÷��̾�� AI�� ���ڸ� *�� �ٲ��ش�
		for (int i = 0; i < 25; ++i)
		{
			if (iNumber[i] == iInput)
			{
				iNumber[i] = INT_MAX;
				break;
			}

			// AI ���ڸ� �ٲ��ش�.
			for (int i = 0; i < 25; ++i)
			{
				if (iAINumber[i] == iInput)
				{
					iAINumber[i] = INT_MAX;
					break;
				}
			}
		}

		// ���� �� ���� üũ�ϴ� ���� �Ź� ���ڸ� �Է��Ҷ����� ó������
		// ���� ī��Ʈ�� �� ���̴�. �׷��Ƿ� iBingo ������ 0���� �Ź�
		// �ʱ�ȭ�ϰ� ���Ӱ� �� ���� �����ֵ��� �Ѵ�.
		iBingo = 0;
		iAIBingo = 0;

		// ����, ���� �� ���� �����ش�
		int iStar1 = 0, iStar2 = 0;
		int iAIStar1 = 0, iAIStar2 = 0;
		for (int i = 0; i < 5; ++i)
		{
			// ������ üũ�ϱ� ���� ���� 0���� �� ������ �ʱ�ȭ�Ѵ�.
			iStar1 = iStar2 = 0;
			iAIStar1 = iAIStar2 = 0;
			for (int j = 0; j < 5; ++j)
			{
				// ���� �� ������ �����ش�
				if (iNumber[i * 5 + j] == INT_MAX)
					++iStar1;
			
				if (iNumber[j * 5 + i] == INT_MAX)
					++iStar2;

				if (iAINumber[i * 5 + j] == INT_MAX)
					++iAIStar1;

				if (iAINumber[j * 5 + i] == INT_MAX)
					++iAIStar2;
			}

			// j for���� ���������� ���� ���� ���� ���� �� ������ �����
			// iStar1 ������ ���� �ȴ�. iStar1�� ���� 5�̸� ������
			// ��� *�̶�� �ǹ��̹Ƿ� ���� �� ī��Ʈ�� �߰����ش�.
			if (iStar1 == 5)
				++iBingo;
			if (iStar2 == 5)
				++iBingo;
			if (iAIStar1 == 5)
				++iAIBingo;
			if (iAIStar2 == 5)
				++iAIBingo;
		}

		// ���� ��� -> ������ �ϴ� �밢�� üũ
		iStar1 = 0;
		for (int i = 0; i < 25; i += 6)
		{
			if (iNumber[i] == INT_MAX)
				++iStar1;
		}

		if (iStar1 == 5)
			++iBingo;

		// ������ ��� -> ���� �ϴ� �밢�� üũ
		iStar2 = 0;
		for (int i = 4; i <= 20; i += 4)
		{
			if (iNumber[i] == INT_MAX)
				++iStar2;
		}

		if (iStar2 == 5)
			++iBingo;

		iAIStar1 = 0;
		for (int i = 0; i < 25; i += 6)
		{
			if (iAINumber[i] == INT_MAX)
				++iAIStar1;
		}

		if (iAIStar1 == 5)
			++iAIBingo;

		// ������ ��� -> ���� �ϴ� �밢�� üũ
		iAIStar2 = 0;
		for (int i = 4; i <= 20; i += 4)
		{
			if (iAINumber[i] == INT_MAX)
				++iAIStar2;
		}

		if (iAIStar2 == 5)
			++iAIBingo;
	}

	return 0;
}

