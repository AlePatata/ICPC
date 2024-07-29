#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		int n; cin >> n;
		queue <int> sum;
		int count = 0;
		int base = 1;
		for (int i = 0; i < 6; ++i) {
			int a = (n % base);
			if (a > 0) {
				sum.push(a);
				count++;
				n -= a;
			}
			base *= 10;
		}
		cout << count << '\n';
		while (!sum.empty()) {
			cout << sum.front() << ' ';
			sum.pop();
		} cout << '\n';
	}
	return 0;
}