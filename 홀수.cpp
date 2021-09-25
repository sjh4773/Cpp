#include <bits/stdc++.h>
using namespace std;

int n, odd=0, sum=0;



int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int min = 100;
	
	for(int i=0; i<7; i++){
		cin >> n;
		
		if(n % 2 == 1){
			sum += n;
			odd += 1;
			
			if(n < min){
				min = n;
			}
		}
	}
	if(odd != 0) cout << sum << "\n" << min;
	else cout << "-1";
}
