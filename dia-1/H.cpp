#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		int n,k; cin >> n >> k;
		int solucion = 2*(k/2)*(k/2 + 1)/2;
		if (k%2 == 1) {
			solucion += k/2+1;
		}
		cout << solucion << '\n';
	}
}