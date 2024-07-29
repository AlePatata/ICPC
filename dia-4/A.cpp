#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	int t; cin >> t;
	for (int i = 0; i < t; ++i) {
		int a; cin >> a;
		if(a<=1399) {
			cout << "Division 4" <<'\n';
			continue;
		}
		if(a<=1599) {
			cout << "Division 3" <<'\n';
			continue;
		}
		if(a<=1899) {
			cout << "Division 2" <<'\n';
			continue;
		}
		else {
			cout << "Division 1" <<'\n';
			continue;
		}
	}
	return 0;

}