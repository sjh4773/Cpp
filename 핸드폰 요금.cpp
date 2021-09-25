#include <bits/stdc++.h>
using namespace std;

int phone[10005], Y, M;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	
	for(int i=0; i < N; i++) cin >> phone[i];
	
	for(int i=0; i < N; i++) Y += ((phone[i] / 30) + 1) * 10;
	
	for(int i=0; i < N; i++) M += ((phone[i] / 60) + 1) * 15;
	
	if(Y > M) cout << "M " << M;
	else if(Y < M) cout << "Y " << Y;
	else cout <<"Y M " << Y;
}
