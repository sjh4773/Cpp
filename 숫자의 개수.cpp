#include <bits/stdc++.h>
using namespace std;

int num[10];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int A, B, C, total;
	cin >> A >> B >> C;
	total = A * B * C;
	
	while(total > 0){
		num[total % 10]++;
		total /= 10;
	}
	
	for(int i=0; i < 10; i++) cout << num[i] << "\n";
}
