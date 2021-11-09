#include <stdlib.h>
#include <stdio.h>

int main()
{
	// 포인터 변수
	// 자료형 변수명
	// 주소 번지에 해당하는 메모리 공간을 int로 해석하겠다.
	// 주소를 저장하는 변수의 크기는 모두 같다.
	int* pInt = nullptr;

	// 주소를 저장

	char* pChar = nullptr;
	short* pShort = nullptr;

	// 포인터 변수의 크기는 8 바이트다.
	int iSize = sizeof(pInt);

	int i = 0;
	pInt = &i;

	// pInt는 : int* 변수 이기 때문에, 가리키는 곳을 int로 해석한다.
	// 따라서 주소값을 1 증가하는 의미는 다음 int 위치로 접근하기 위해서 sizeof(int) 단위로 증가하게 된다.

	// 포인터와 배열
	// 배열의 특징
	// 1. 메모리가 연속적인 구조이다.
	// 2. 배열의 이름은 배열의 시작 주소이다.

	int iArr[10] = {};

	// int 단위로 접근
	*(iArr + 0) = 10; // iArr[0] = 10;
	*(iArr + 1) = 10; // iArr[1] = 10;

	// const
	volatile const int cint = 100;

	// 상수화
	// l-value : 변수
	// r-value : 상수
	int ii = 10;
	
	pInt = (int*)&cint;
	*pInt = 300;
	printf("cin 출력 : %d\n", cint);


	return 0;
}