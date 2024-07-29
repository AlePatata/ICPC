#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n, x; cin >> n >> x;
	vector <int> moneda(n);
	for (int i = 0; i < n; ++i) {
	 	cin >> moneda[i];
	} 

	queue<int> q;
    vector<int> dist(x+1, INF);

    int hijo_i, suma_actual = 0;
    dist[suma_actual] = 0;

    q.push(suma_actual);
    while(!q.empty()) {
    	suma_actual = q.front();
        q.pop();
        for (int i = n-1; i >= 0; --i) {
	        hijo_i = suma_actual + moneda[i];
	        if (hijo_i <= x and dist[hijo_i] >= dist[suma_actual] + 1) {
	            dist[hijo_i] = dist[suma_actual] + 1;
	            q.push(hijo_i);
			}
		}
		
	}
	if (dist[x] == INF) dist[x] = -1;
	cout << dist[x] << '\n';
	return 0;
}