#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

//bool solution(vector<string> phone_book) {
//	// 1. phone_book �迭�� �����Ѵ�.
//	sort(phone_book.begin(), phone_book.end());
//	
//	// 2. 1�� loop�� ���鼭 �� ��ȣ�� �޹�ȣ�� ���ξ����� Ȯ���Ѵ�.
//	for(int i = 0; i < phone_book.size() - 1; i++)
//		if(phone_book[i+1].find(phone_book[i]) == 0)
//			return false;
//	// 3. ������� �Դٸ� ���ξ ���ٴ� ���̴�. 
//	return true;
//}

bool solution(vector<string> phone_book){
	// 1. HashMap�� �����.
	unordered_map<string, int> map;
	for (int i = 0; i < phone_book.size(); i++)
		map[phone_book[i]] = 1;
	
	// 2. ��� ��ȭ��ȣ�� substring(���ξ) HashMap �� �����ϴ��� Ȯ���Ѵ�.
	for (int i = 0; i < phone_book.size(); i++)
	{
		for (int j = 0; j < phone_book[i].size(); j++)
		{
			string phone_number = phone_book[i].substr(0,j);
			if(map[phone_number])
				return false;
		}
	}
	
	// ������� �Դٸ� ���ξ ���ٴ� ���̴�.
	return true; 
}

int main(void)
{
	vector<string> phone_book = {"119", "997674223", "1195524421"};
	cout << solution(phone_book);
}
