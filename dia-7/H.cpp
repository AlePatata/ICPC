#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 1e9;

int main() {
	string s,p; cin >> p;
	int n = p.size();
	int l = 0;
	for(int r = n-1; r > 0; r--){
        if (p[l] == p[r]) {
        	int R = r, L = l;
        	while ( R < n ) {
        		if (p[L] == p[R]) {
        			L++; R++;
        		} else break;
        	} if (R == n) cout << n-r << ' ';
        }
    }
    return 0;
}