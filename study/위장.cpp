#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
	// 1. 옷을 종류별로 구분한다.
	unordered_map<string, int> map;
	for(vector<string> clothe : clothes)
		map[clothe[1]]++;
	// 2. 입지 않는 경우를 고려해서 모든 조합 계산한다.
	int answer = 1;
	for(auto it = map.begin(); it != map.end(); it++)
		answer *= it->second + 1;
	// 3. 아무 종류의 옷도 입지 않는 경우를 제외한다.
	return answer - 1;
}

int main(void)
{
	vector<vector<string>> clothes = {{"yellohat", "headgear"},
									  {"bluesunglasses", "eyewear"},
								      {"green_turban", "headgear"}};
								      
	cout << solution(clothes);
	
}
