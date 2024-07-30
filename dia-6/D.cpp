#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 1e9;

int main() {
	ll n,t; cin >> n >> t;
	vector<ll> a(n), sum(n+1, INF);
	ll ai; 
	sum[0] = 0;
	for (ll i = 0; i < n; ++i) {
		cin >> ai;
		a[i] = ai;
		sum[i+1] = sum[i] + ai;
	}
	ll max = 0, l = 0, r = 1, intervalo = 0;
	while (r < n+1) {
		intervalo = sum[r]-sum[l];
		if (t - intervalo >= 0) {
			if (max < r-l) max = r-l;
			r++;
		}
		else {
			l++;
			if (l>r) r++;
		}
	}
	cout << max << '\n';
	return 0;
}