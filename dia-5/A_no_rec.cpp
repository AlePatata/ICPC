#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;
vector <ll> f, values;

int main() {
	ll n, x; cin >> n >> x;
	values.resize(n);
	f.resize(x+1, INF);
	for (int i = 0; i < n; ++i) {
		cin >> values[i];
	}
	f[0] = 0;
	for (ll y = 1; y <= x; ++y) {
		for(ll i = 0; i < n; i++) {
			if (values[i] <= y)
				f[y] =  min(f[y], f[y - values[i]]+1);
		}
	}
	if (f[x] > 1000000) f[x] = -1;
	cout << f[x] << '\n';
	return 0;
}