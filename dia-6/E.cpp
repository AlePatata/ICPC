#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 1e9;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		int n; cin >> n;
		map <int,int> m;
		vector <int> v(n);
		for (int i = 0; i < n; ++i) {
			int a; cin >> a;
			v[i] = a; // posicion: color
		} 
		vector <int> dp(n+1,0);
		dp[0] = 0;
		for (int i = 0; i < n; ++i) {
			
		}
		cout << dp[n] << '\n';
	}
	return 0;
}