#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int n; cin >> n;
	vector< pair<int,int> > v(n);
	vector<int> cantidad_arista(n,0);
	for (int i = 0; i < n-1; ++i) {
		int ui, vi; cin >> ui >> vi;
		v[i] = {ui,vi};
		cantidad_arista[ui-1] = cantidad_arista[ui-1] + 1;
		cantidad_arista[vi-1] = cantidad_arista[vi-1] + 1;
	}
	int c = 0;
	for (int i = 0; i < n; ++i) {
		if (cantidad_arista[i] == 1) {c++;}
		continue;
	}
	int solucion = (c+1)/2;
	cout << solucion << '\n';
	return 0;
}