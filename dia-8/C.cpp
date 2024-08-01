#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main () {
	ll n,m,a; cin >> n >> m >> a;
	ll A = (n+a-1) / a;
	ll B = (m+a-1) / a;
	
	cout << A*B << '\n';
	return 0;
};