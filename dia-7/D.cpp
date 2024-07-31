#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll INF = 1e9;

int main() {
	string s,p; cin >> s >> p;
	int n = p.size();
	vector <int> KMP(n);
	KMP[0] = 0;
	int l = 0;
	for(int i = 1; i < n; i++){
        int k = KMP[i-1]; 
        while(p[k] != p[i] and k > 0){
            k = KMP[k - 1];
        }
        KMP[i] = (p[k] == p[i] ? k + 1 : 0);
    }
	

	int c = 0, r = 0, i = 0;
	while (i < s.size()) {
		if (s[i] == p[r]) {
			int k = i;
			while(r < p.size() and k < s.size()) {
				if (s[k] == p[r]) {
					k++; r++;
				} else {
					r -= KMP[r];
					break;
				}
			}  
			if (r == p.size() and k <= s.size()) {
				c++; r = 0;
			} 
		} i++;
	} cout << c << '\n';

	return 0;
}