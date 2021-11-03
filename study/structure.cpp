#include <iostream>

using namespace std;

#define NAME_SIZE 32

// ����ü : �����ִ� �������� ��Ƽ� �ϳ��� ���ο� Ÿ���� ������ִ� ����̴�.
// ����� ���� ���� Ÿ���̴�.
// ���� : struct ����ü�� {}; �� ���·� �����ȴ�.
// �迭�� ����ü�� ������
// 1. ������ �����̴�.
// 2. ���ӵ� �޸� ���� �Ҵ�ȴ�. ����ü ������� ���ӵ� �޸� ������
// ������ �ȴ�.

struct _tagStudent
{
	char strName[NAME_SIZE];
	int iNumber;
	int iKor;
	int iEng;
	int iMath;
	int iTotal;
	float fAvg;
};

int main()
{
	_tagStudent tStudent = {};
	_tagStudent tStudentArr[100] = {};

	// ����ü ����� �����Ҷ��� . �� �̿��ؼ� �����ϰ� �ȴ�.
	tStudent.iKor = 100;

	// ���ڿ��� �迭�� �־��� ������ �ܼ� �������δ� �Ұ����ϴ�
	// strcpy_s��� �Լ��� �̿��ؼ� ���ڿ��� ������ �־�� �Ѵ�.
	// �� �Լ��� �����ʿ� �ִ� ���ڿ��� �������� �������ش�.
	strcpy_s(tStudent.strName, "�����ٶ� adsf");
	

	// strcat_s �Լ��� ���ڿ��� �ٿ��ִ� ����̴�.
	// �����ʿ� �ִ� ���ڿ��� ���ʿ� �ٿ��ش� strName ���� �����ä�
	// �����ٶ� asdf �� ������ �ξ��� ������ �� �ڿ� ������ ���ڿ��� �ٿ���
	// ������ش�.
	strcat_s(tStudent.strName, " ���ڿ� ���̱�");

	cout << "�̸� ���� " << strlen(tStudent.strName) << endl;

	// strcmp �Լ��� �� ���ڿ��� ���Ͽ� ���� ��� 0�� ��ȯ�ϰ� �ٸ� ���
	// 0�� �ƴ� ���� ��ȯ�Ѵ�.
	strcpy_s(tStudent.strName, "ȫ�浿");

	cout << "���� �̸��� �Է��ϼ��� : ";
	char strName[NAME_SIZE] = {};
	cin >> strName;

	if (strcmp(tStudent.strName, strName) == 0)
	{
		cout << "�л��� ã�ҽ��ϴ�." << endl;
	}
	else
		cout << "ã�� �л��� �����ϴ�." << endl;


	// ���ڿ��� ���� �׻� 0(NULL)�� ������ �Ѵ�. �׷��� ������ ���� ���ִ�
	// ���¿��� �Ʒ�ó�� �� �迭 ��ҿ� ���� �־��ְ� �Ǹ� �� ���� ��µǰ�
	// �־����� ���� �κ��� ������ ������ �״�� ��µȴ�. �ֳ��ϸ� ����� ��
	// ���ڿ��� ���� �ν��� �� ���� �����̴�. 0�� ���� �ϴµ� �����Ⱚ��
	// �� �ֱ� �����̴�.
	cout << "�̸� : " << tStudent.strName << endl;
	cout << "�й� : " << tStudent.iNumber << endl;
	cout << "���� : " << tStudent.iKor << endl;
	cout << "���� : " << tStudent.iEng << endl;

	return 0;
}