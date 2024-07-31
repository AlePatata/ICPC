#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 1e9;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		int n; cin >> n;
		map <int,int> m;
		vector <int> v(n,-1);
		for (int i = 0; i < n; ++i) {
			int a; cin >> a;
			if (m.find(a) != m.end()) {
				v[i] = m[a];
			} else {
				m[a] = i;
				v[i] = -1;
			}
		} 
		vector <int> dp(n,0);
		dp[0] = 0;
		int mayor = 0;
		for (int i = 1; i < n; ++i) {
			if (v[i] != -1) {
				mayor = max( dp[v[i]-1] + (i-v[i]+1) , dp[v[i]] + (i-v[i]) );
			}
			dp[i] = max(dp[i-1], mayor);
	}
		cout << "WAAAA: " << dp[n-1] << '\n';
	}
	return 0;
}