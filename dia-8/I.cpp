#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


 
const ll mod = 1000000007;

int main () {
	ll l = 0, iguales = 0;
	string s; cin >> s;
	vector <char> abc = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	vector <ll> sum(abc.size(),0), occ(abc.size(),0) ;
	ll slen = s.size();
	for (int i = 0; i < slen; ++i) {
		for (int j = 0; j < abc.size(); ++j) {
			if (s[i] == abc[j]) {
				occ[j]++;
				for (int i2 = j; i2 < abc.size(); ++i2) {
					sum[i2]++;
				}
				if (j > 0) l += sum[j-1];
				continue;
			}
		}
	}
	for (int i = 0; i < abc.size(); ++i) {
		iguales += (occ[i]*(occ[i]-1)/2);
	}
	ll n; cin >> n; 
	ll k = slen*(slen-1)/2 - iguales - l;
	n = n % mod;
	k = k % mod;
	l = l % mod;
	ll ans = (((n*k)% mod*(n+1) + (l*(n-1))% mod*n)*500000004 )% mod;
	cout << ans << '\n';
	return 0;
};