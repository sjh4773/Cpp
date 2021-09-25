#include <bits/stdc++.h>
using namespace std;

int arr[5], sum, mid;

int main(void){
	for(int i=0; i<5; i++){
		cin >> arr[i];  
	}
	
	for(int i=0; i<5; i++){
		sum += arr[i];
	}
	
	sort(arr, arr+5);
	
	cout << sum/5 << "\n" << arr[2];
}

