#include<iostream>
#include<algorithm>
using namespace std;

int arr[8] = {8, 6, 5, 3, 2, 1, 4, 7};

int main()
{
	for(int i = 0; i < 8; i++)
	{
		int minn = arr[i];
		int location = i;
		for(int j = i + 1; j < 8; j++)
		{
			if(minn > arr[j])
			{
				minn = arr[j];
				location = j;
			}
		}
		swap(arr[i],arr[location]);
	}
	for(int i = 0; i < 8; i++)
		cout << arr[i] << " ";
}
