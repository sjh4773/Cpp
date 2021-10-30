#include <iostream>
#include <time.h>

using namespace std;


int ans[3] = {};


int main(){
	
	srand((unsigned int)time(0));
	
	int num[9] = {};
	int input[3] = {};
	int N;
	
	for(int i = 0; i < 9; ++i)
	{
		num[i] = i + 1;
	}
	
	int iTemp, idx1, idx2; 
	for(int i = 0; i < 100; ++i)
	{
		idx1 = rand() % 9;
		idx2 = rand() % 9;
		
		iTemp = num[idx1];
		num[idx1] = num[idx2];
		num[idx2] = iTemp;
	}
	
	for(int i = 0; i < 3; ++i)
	{
		ans[i] = num[i];
	}
	
	while(1)
	{	
		cin >> input[0] >> input[1] >> input[2];
		
		int strike = 0, ball = 0;
		
		for(int i =0; i < 3; ++i){
			for(int j = 0; j < 3; ++j)
			{	
				if(ans[i] == input[j] && i == j)
				{
					strike++;
				}
				else if(ans[i] == input[j])
				{
					ball++;
				}
			}
		}
		
		if(strike == 0 && ball == 0 )
		{
			cout << "OUT" << endl;
		} 
		else if(strike == 3)
		{
			cout << "3strike!!!";
			break;
		}
		
		 
		cout << strike << "strike" << "\t" << ball << "ball" << endl;
		strike = 0, ball = 0;
	}
	
}
