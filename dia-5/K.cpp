#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	string s; cin >> s;
	int h = 0;
	int max = 0, imax = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '+') 
			h++;
		
		else h++;
	}
	cout << h << '\n';
	return 0;
}