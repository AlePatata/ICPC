#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		int n; cin >> n;
		int m = n/4;
		m += (n%4)/2;
		cout << m << '\n';
	}
	return 0;
}