#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		int n, q; cin >> n >> q;
		priority_queue <int> pq;
		for (int i = 0; i < n; ++i) {
			int ai; cin >> ai;
			pq.push(ai);
		}
		vector <int> sum(n); int acc = 0;
		for (int i = 0; i < n; ++i) {
			acc += pq.top();
			pq.pop();
			sum[i] = acc;
		}
		for (int i = 0; i < q; ++i) {
			int xi; cin >> xi;
			int sol = -1;
			int der = n, izq=0;
			while(der != izq) {
				int mid = (der+izq)/2;
				if (xi <= sum[mid]) {
					der = mid;
					sol = der + 1;
				} else {
					izq = mid + 1;
				} 
			}
			cout << sol << '\n';
		}

	}
	return 0;
}