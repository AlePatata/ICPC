#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;
vector <int> M, values;

/*
int minima(int target) {
	if (M[target] < INF) return M[target];
	if (target == 0) {
		M[target] = 0;
		return 0;
	} else {
		int m, min = INF;
		for(int i=0; i<values.size(); i++) {
			if (target - values[i] < 0) continue;
			m = minima(target - values[i]);
			if (m < min) {
				min = m;
			}
		} M[target] = min + 1;
		return M[target];
	}
}
*/

int minima(int x) {
	if(x < 0) return INF;
	if(x == 0) return 0;
	if (M[x] < INF) return M[x];
	int mn = INF;
	for(int coin : values) {
		mn =  min(mn, minima(x - coin));
	}
	M[x] = mn + 1;
	return M[x];
}

int main() {
	int n, x; cin >> n >> x;
	values.resize(n);
	M.resize(x+1, INF);
	for (int i = 0; i < n; ++i) {
		cin >> values[i];
	}

	int sol = minima(x);
	if (sol >= INF) sol = -1;
	cout << sol << '\n';
	return 0;
}