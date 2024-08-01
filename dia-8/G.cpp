#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 998244353;

ll binpow(ll a,ll b) {
	ll pow = a, ans = 1;
	while(b) {
		if ( b&1 ) ans = (ans*pow)%mod;
		pow = (pow*pow)%mod;
		b >>= 1;
	}
	return ans;
}
 

int main () {
	ll n; cin >> n;
	ll p = 0;
	for (int i = 0; i < n; ++i) {
		ll x; cin >> x;
		p = (p+x)%mod;
	} 
	ll a = binpow(n,998244351);
	p = (p*a)%mod;
	cout << p << '\n';
	return 0;
}