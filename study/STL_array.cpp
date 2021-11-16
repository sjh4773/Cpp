#include <iostream>
#include <array>

using namespace std;

int main()
{
	// int타입 배열
	int arrInt[10];
	
	// int 타입 STL array
	array<int, 10> STL_arrInt;
	
	// int 타입 배열
	int a[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	// int타입 STL array
	array<int, 10> b {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	cout << b.data() << endl;
	cout << *b.begin() << " " <<*(b.end()-1) << endl;
	cout << b.front() << " " << b.back() << endl;
	cout << b.empty() << endl;
	cout << b.size() << endl;
	cout << b.max_size() << endl;
	
	// 범위 기반 for (range_based for)
	for (auto& num : b)
		cout << num << " ";
	cout << endl;
	
	// 일반 for문
	for(int i = 0; i < b.size(); ++i)
		cout << b[i] << " ";
	cout << endl;
	
	return 0;
}
