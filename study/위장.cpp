#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
	// 1. ���� �������� �����Ѵ�.
	unordered_map<string, int> map;
	for(vector<string> clothe : clothes)
		map[clothe[1]]++;
	// 2. ���� �ʴ� ��츦 ����ؼ� ��� ���� ����Ѵ�.
	int answer = 1;
	for(auto it = map.begin(); it != map.end(); it++)
		answer *= it->second + 1;
	// 3. �ƹ� ������ �ʵ� ���� �ʴ� ��츦 �����Ѵ�.
	return answer - 1;
}

int main(void)
{
	vector<vector<string>> clothes = {{"yellohat", "headgear"},
									  {"bluesunglasses", "eyewear"},
								      {"green_turban", "headgear"}};
								      
	cout << solution(clothes);
	
}
