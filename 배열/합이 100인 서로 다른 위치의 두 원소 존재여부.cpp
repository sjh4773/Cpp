#include <bits/stdc++.h>
using namespace std;

int func(int arr[], int N){
	int occur[101] = {};
	for(int i = 0; i < N; i++){
		if(occur[100 - arr[i]] == 1)
			return 1;
		occur[arr[i]] = 1;
	}
	return 0;
}

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[100];
	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++) cin >> arr[i];
	
	cout << func(arr, N); 
	
	
}
