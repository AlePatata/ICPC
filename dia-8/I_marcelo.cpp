#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

const int mod;

ll binpow(ll a,ll b) {
	ll pow = a, ans = 1;
	while(b) {
		if ( b&1 ) ans = (ans*pow)%mod;
		pow = (pow*pow)%mod;
		b >> 1;
	}
	return ans;
}
 
int main () {
	ll ans = 0, k = 0;
	string s; cin >> s;
	vector <char> abc = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	vector <ll> apariciones(abc.size(),0), sum(abc.size(),0);
	ll slen = s.size();
	for (int i = 0; i < slen; ++i) {
		for (int j = 0; j < abc.size(); ++j) {
			if (s[i] == abc[j]) {
				if ( j > 0 ) ans += sum[j];
				if ( j < abc.size()-1 ) += mayores[j+1];
				menores[j]++;
			}
		}
	}
	ll couples = slen*(slen-1)/2;
	ll k = (iguales != couples or l) ? couples - l - iguales : 0;
	//cout << l << ' ' << k <<'\n';
	ll n; cin >> n;

	ll ans = (n*k*(n+1) + l*(n-1)*n)/2;
	cout << ans << '\n';
	return 0;
};