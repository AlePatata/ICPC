#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;

int main() {
	int a,b,c; cin >> a >> b >> c;
	int edificios = 1, capital = 0;
	int meses = 0;
	if (c == 1){ 
		cout << 1 << '\n';
		return 0;
	}
	while (edificios < c) {
		capital += b*edificios;
		edificios += capital/a;
		capital = capital%a;
		meses++;
	} cout << meses << '\n';
	return 0;
}