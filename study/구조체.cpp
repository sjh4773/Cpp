#include <stdio.h>


// ����� ���� �ڷ���
typedef struct _tagMyST
{
	int a;
	float f;
}MYST;

typedef struct _tagBig
{
	MYST K;
	int i;
	char c;
}BIG;

// typedef int INT;

int main()
{
	// ����ü
	MYST t = { 100, 3.14f }; // ����ü �ʱ�ȭ
	t.a = 10;
	t.f = 10.2312f;

	int iSize = sizeof(MYST);


	return 0;
}