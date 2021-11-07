#include <stdio.h>
#include <iostream>
using namespace std;

int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);
	}

	return iValue;
}

// ����Լ�
// ������, ������ ����
// ������ ���� ������. ������ �ذ��� ���� �޸� �Լ��� ȣ���ϸ鼭 �׾ư��鼭 ������ ���ÿ� �����ִ�
// �����͵��� ������ �ǵ��� �����鼭 ��Ȱ�� �ϴ� ��

// ����Լ� ���丮��
int Factorial_Re(int _iNum)
{
	if (1 == _iNum)
	{
		return 1;
	}

	return _iNum* Factorial_Re(_iNum - 1);
}

// �Ǻ���ġ ����
// 1 1 2 3 5 8 13 21 34 55...
int Fibonacci(int _iNum)
{
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	int iPrev1 = 1;
	int iPrev2 = 1;
	int iValue = 0;


	for (int i = 0; i < _iNum - 2; ++i)
	{
		iValue = iPrev1 + iPrev2;
		iPrev1 = iPrev2;
		iPrev2 = iValue;
	}

	return iValue;
}

int Fibonacci_Re(int _iNum)
{
	if (1 == _iNum || 2 == _iNum)
	{
		return 1;
	}

	return Fibonacci_Re(_iNum - 1) + Fibonacci_Re(_iNum - 2);
}


int main()
{
	int iValue = Factorial(4);
	iValue = Factorial(10);

	iValue = Factorial_Re(7);

	iValue = Fibonacci(7);

	iValue = Fibonacci_Re(8);


	return 0;
}