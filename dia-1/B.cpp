#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	ll sum = 0;
	for (int i = 0; i < n; ++i) {
		if(s[i] % 2 == 0){
			sum += i+1;
		}
	}
	cout << sum << '\n';
	return 0;
}