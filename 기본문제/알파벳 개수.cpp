#include <bits/stdc++.h>
using namespace std;



int num[26];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	getline(cin, s);
	
	for(int i=0; i< s.length(); i++){
		num[s[i] - 97]++;
	}	
	
	for(int i=0; i< 26; i++) cout << num[i] << " ";
	
}
