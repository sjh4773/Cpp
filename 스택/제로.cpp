#include <bits/stdc++.h>
using namespace std;

int K, ans = 0;
stack<int> S;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> K;
	
	while(K--){
		int c;
		cin >> c;
		if(c==0) S.pop();
		else S.push(c);
	}
	
	while(!S.empty()){
		ans += S.top();
		S.pop();	
	}
	cout << ans;
	
}
