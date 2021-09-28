#include <bits/stdc++.h>
using namespace std;


int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	
	for(int i = 0; i < T; i++){
		for(int j=0; j <= i; j++) cout << "*";
		cout << "\n";
	}
	
}
