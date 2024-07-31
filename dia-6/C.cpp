#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		string s ; cin >> s;
		int p = s.size()-1, i = 0;
		while (i < s.size()-1) {
			if (s[i] == '1' and s[i+1] == '0'  or  s[i] == '1' and s[i+1] == '1') {
				break;
			}
			else i++;
		} if (i<s.size()-1) cout << "Yes" << '\n';
		else cout << "No" << '\n';
	}
	return 0;
}