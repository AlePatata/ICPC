#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n; cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	ll diferencias = 0;
	for (ll izq = 0; izq < n; ++izq) {
		int min = a[izq], max = a[izq];
		for (ll der = izq + 1; der < n; ++der) {
			if (min>a[der]) min = a[der];
			if (max<a[der]) max = a[der];
			diferencias += (max-min);
		}	
	}
	cout << diferencias << '\n';
	return 0;
}