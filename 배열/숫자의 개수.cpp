#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  
 	int A, B, C, ret;
 	cin >> A >> B >> C;
 	
 	ret = A * B * C;
 	int arr[10] = {};
 	
 	while(ret > 0){
 		arr[ret % 10]++;
 		ret /= 10;
	 }
	
	for(int i=0; i<10; i++) cout << arr[i] << "\n";
}
	
	
	
	

