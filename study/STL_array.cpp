#include <iostream>
#include <array>

using namespace std;

int main()
{
	// intŸ�� �迭
	int arrInt[10];
	
	// int Ÿ�� STL array
	array<int, 10> STL_arrInt;
	
	// int Ÿ�� �迭
	int a[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	// intŸ�� STL array
	array<int, 10> b {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	cout << b.data() << endl;
	cout << *b.begin() << " " <<*(b.end()-1) << endl;
	cout << b.front() << " " << b.back() << endl;
	cout << b.empty() << endl;
	cout << b.size() << endl;
	cout << b.max_size() << endl;
	
	// ���� ��� for (range_based for)
	for (auto& num : b)
		cout << num << " ";
	cout << endl;
	
	// �Ϲ� for��
	for(int i = 0; i < b.size(); ++i)
		cout << b[i] << " ";
	cout << endl;
	
	return 0;
}
