#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	ll n,d,e; cin >> n >> d >> e;
	ll m = n;
	while (n > 0) {
		m = min(m, n % d);
		n -= 5*e;
	}
	cout << m <<'\n';
	return 0;

}