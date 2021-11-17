#include <iostream>
#include <set>
using namespace std;

int main() {
	set<int> s;
	
	s.insert(1);
	s.insert(5);
	s.insert(3);
	s.insert(2);
	s.insert(4);
	
	for(auto iter = s.begin(); iter != s.end(); ++iter) {
		cout << *iter << ' ';
	}
	// Ãâ·Â °ª: 1 2 3 4 5
	return 0;
}
