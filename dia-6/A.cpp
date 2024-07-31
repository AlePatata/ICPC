#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; ++i) {
		int n, m; cin >> n >> m;
		if (n == m) cout << "AC" << '\n';
		else cout << "WA" << '\n';
	}
	return 0;
}