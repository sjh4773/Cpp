#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	stack<int> s;
	int n;
	string ans;

	cin >> n; //ó���� ���� �Է°�
	int m = 0; //���ÿ� �� ������ ��
	while (n--) {
		int x;
		cin >> x; //������ ���� �Է°�
		if (x > m) { 
			while(x > m) {
				s.push(++m);
				ans += '+'; //push���� Ƚ����ŭ pop
			}
			s.pop();
			ans += '-'; //pop
		}
		else { //x�� m���� ũ��������
			bool found = false;
			if (!s.empty()) {
				if (x == s.top()) { //x�� m�� ���ƾ� ���ÿ��� �ùٸ��� pop�� �� ����(���������� ���Ѿ� �ϱ� ������)
					found = true; //x�� m(s.top())�� ������ true
				}
				s.pop();
				ans += '-';
			}
			if (!found) {
				cout << "NO" << '\n';
				return 0; 
			}
		}
	}
	for (auto x : ans) { //ans���� �ϳ��� ��������
		cout << x << '\n';
	}
	return 0;
}
