#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++ ){
		for( int j = N - i - 1; j > 0; j--) cout << " ";
		for( int j = 0; j < 2*i + 1; j++) cout << "*";
		cout << "\n";
	}
}
