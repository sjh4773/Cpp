#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N,height;
	stack<pair<int,int>> stk;
	
	cin >> N;
	
	for(int i=1; i<=N; i++){
		cin >> height;
		
		while(!stk.empty()){
			if(stk.top().second > height){
				cout << stk.top().first << ' ';
				break;
			}
			stk.pop();
		}
		
		if(stk.empty()){
			cout << '0';
		}
		
		stk.push({i, height});
	}
}
