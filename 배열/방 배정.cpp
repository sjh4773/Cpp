#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, K, ans = 0;
	int s[2][7] = {}; // ����/�ݺ� �л� ���� �����ϴ� �迭
	
	cin >> N >> K;
	// �л� �� ����
	for (int i=0; i<N; ++i) {
		int a,b;
		cin >> a >> b;
		s[a][b]++;
	}	
	
	// �ʿ��� ���� ���� ���
	for(int i=0; i<2; ++i) {
		for (int j=0; j<7; ++j){
			// ������ �ʿ��� ��ŭ ���� ���� �߰�
			ans += s[i][j] / K;
			// �л��� ���� ���, �ϳ��� ���� �� �ʿ��ϹǷ� ���� ���� �߰�
			if (s[i][j] % K) ++ans; 
		}
	} 
	cout << ans;
}
