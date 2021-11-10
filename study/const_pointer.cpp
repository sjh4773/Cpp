#include <stdlib.h>
#include <stdio.h>

void Output(const int* pI) // 원본 데이터를 읽어들이기만 하고 수정하지 않는다.
{
	int i = *pI;
	// int* pInt = (int*)pI;
	//*pInt = 1000;
}


int main()
{
	// 1. const
	const int i = 100;

	// const와 포인터
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// const 포인터
	const int* pConstInt = &a;
	// x -> *pConstInt = 100;

	int b = 0;
	const int* pConstInt = &b;


	// 포인터 const
	// 변수자체를 상수화
	int* const pIntConst = &a;
	*pIntConst = 400;
	//x -> pIntConst = &b;

	// 초기화 시 가리킨 대상만 가리킴, 가리키는 원본을 수정 할 수 없음
	const int* const pConstIntConst = nullptr;

	int a = 0;
	Output(&a);

	return 0;
}

// 단축키
// Ctrl + Shift + Space