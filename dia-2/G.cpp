#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	vector <int> xi(n);
	for (int i = 0; i < n; ++i) {
		cin >> xi[i];
	}
	sort(xi.begin(),xi.end());
	int q; cin >> q;
	vector <int> mi(q);
	for (int i = 0; i < q; ++i) {
		cin >> mi[i];
	}
	for (int i = 0; i < q; ++i) {
		int der=n, izq=0;
		while(der != izq) {
			int mid = (der+izq)/2;
			if (xi[mid] <= mi[i]) {
				izq = mid + 1;
			} else {
				der = mid;
			} 
		}
		cout << der << '\n';
	}
	return 0;
}