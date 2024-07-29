#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		int n, k; cin >> n >> k;
		vector < string > grilla(n);
		vector < string > nueva_grilla(n/k);
		
		for (int i = 0; i < n; ++i) {
			cin >> grilla[i];
			string str;
			for (int j = 0; j < n; j += k) {
				str += grilla[i][j];
				
			}nueva_grilla[i/k] = str;
		}
		for (int i = 0; i < n/k; i++) {
			cout << nueva_grilla[i] << '\n';
		}
	}
	return 0;
}