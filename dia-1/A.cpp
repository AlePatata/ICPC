#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, k; cin >> n >> k;
	ll r = n;
	ll sum = 0; vector <ll> a;
	while ( r > 0 ) {
		ll ai = r%2;
		ll bin = ai?1:0;
		a.push_back(bin);
		r = r/2;
		sum += bin;
	} 
	if ( sum <= k and k <= n ) {
		cout << "YES\n";
		ll j = a.size() - 1, n = j + 1;
		while (sum < k) {
			a[j - 1] += 2;
			sum += 1;
			a[j]--;
			if(a[j] == 0) j--;
		} 
		ll potencia = 1;
		for (ll i = 0; i < n; ++i) {
			for (ll j = 0; j < a[i]; ++j) {
				cout << potencia << ' ';
			} potencia = potencia*2;
		}
	} else cout << "NO\n";
	return 0;
}