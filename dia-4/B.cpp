#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int n,p; cin >> n >> p;
	set <int> niveles;
	for (int i = 0; i < p; ++i) {
		int ai; cin >> ai;
		niveles.insert(ai);
	}
	int q; cin >> q;
	for (int i = 0; i < q; ++i) {
		int ai; cin >> ai;
		niveles.insert(ai);
	}
	for (int i = 1; i < n+1; ++i) {
		if(niveles.find(i) == niveles.end()) {
			cout << "Oh, my keyboard!" << '\n';
			return 0;
		}
	}
	cout << "I become the guy." << '\n';
	return 0;

}