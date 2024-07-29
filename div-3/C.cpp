#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		int n, q; cin >> n >> q;
		string A, B; cin >> A >> B;
		for (int k = 0; k < q; ++k) {
			int l, r; cin >> l >> r;
			l--; r--;
			n = r-l+1;
			string a = A.substr(l,n);
			sort(a.begin(),a.end());
			string b = B.substr(l,n);
			sort(b.begin(),b.end());
			int cont = 0;
			int itr_a = 0;
			int itr_b = 0;
			while (itr_a < a.size() and itr_b < b.size()) {
				if (a[itr_a] == b[itr_b]) {
					cont++;
					itr_a++;
					itr_b++;
				} else {
					if (a[itr_a] < b[itr_b]) itr_a++;
					else itr_b++;
				}
			} cout << a.size() - cont << '\n';
		}

	}
	return 0;
}