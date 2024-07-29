#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	for (int i = 0; i < t; ++i) {
		int n, m; cin >> n >> m;
		string a,b; cin >> a >> b;
		int prefix = 0, subseq = 0;
		while ( prefix < n and subseq < m) {
			if (a[prefix] == b[subseq]) {
				prefix++;
				
			} subseq++;
		}
		cout << prefix << '\n';
	}
	return 0;
}