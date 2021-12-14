#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

//bool solution(vector<string> phone_book) {
//	// 1. phone_book 배열을 정렬한다.
//	sort(phone_book.begin(), phone_book.end());
//	
//	// 2. 1층 loop를 돌면서 앞 번호가 뒷번호의 접두어인지 확인한다.
//	for(int i = 0; i < phone_book.size() - 1; i++)
//		if(phone_book[i+1].find(phone_book[i]) == 0)
//			return false;
//	// 3. 여기까지 왔다면 접두어가 없다는 것이다. 
//	return true;
//}

bool solution(vector<string> phone_book){
	// 1. HashMap을 만든다.
	unordered_map<string, int> map;
	for (int i = 0; i < phone_book.size(); i++)
		map[phone_book[i]] = 1;
	
	// 2. 모든 전화번호의 substring(접두어가) HashMap 에 존재하는지 확인한다.
	for (int i = 0; i < phone_book.size(); i++)
	{
		for (int j = 0; j < phone_book[i].size(); j++)
		{
			string phone_number = phone_book[i].substr(0,j);
			if(map[phone_number])
				return false;
		}
	}
	
	// 여기까지 왔다면 접두어가 없다는 것이다.
	return true; 
}

int main(void)
{
	vector<string> phone_book = {"119", "997674223", "1195524421"};
	cout << solution(phone_book);
}
