#include <bits/stdc++.h>
using namespace std; 

#define ll long long

int main () {
	std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
    
	int t; cin >> t;
	for (int l = 0; l < t; ++l) {
		int n; cin >> n;
		vector <int> a(2*n);
		priority_queue <int> pq, pq_copy;
		for (int i = 0; i < 2*n; ++i) {
			int ai; cin >> a[i];
			pq.push(a[i]);
		}
		// All combinations?
		pq_copy = pq;
		int x = pq_copy.top(); pq_copy.pop();
		x += pq_copy.top(); pq_copy.pop();
		/*stack <int> s;
		s.push(x);*/
		vector<int> aux = a;
		int c = 0;
		int mayor = pq.top(); pq.pop();
		while(x > mayor) {
			for (int i = 0; i < 2*n; ++i) {
				for (int j = i+1; j < 2*n; ++j) {
					if (aux[i] + aux[j] == x) {
						// s.push( max( aux[i], aux[j] ) );
						x = max( aux[i], aux[j]);
						aux[i] = 0;
						aux[j] = 0;
						c += 2;
					}
				}
			} if( c < 2*n ) {
				x -= mayor;
				x += pq_copy.top(); pq_copy.pop();
				c = 0;
			} else {
				cout << "YES\n";
			}
		} cout << "NO\n";
	}
	return 0;
}