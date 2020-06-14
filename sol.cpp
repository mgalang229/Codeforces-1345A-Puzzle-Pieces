#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n, m;
	cin >> n >> m;
	if(n == 1 || m == 1) {
		cout << "YES";
	}
	else if(n == 2 && m == 2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
