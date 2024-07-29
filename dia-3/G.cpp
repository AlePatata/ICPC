#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;


int main() {
	int n,m; cin >> n >> m;
	queue <int> q;
	vector<int> dist(1000000, INF);
	
	dist[n] = 0;
    q.push(n);
	int v;
	while(n != m and !q.empty()) {
		n = q.front();
        q.pop();
        v = n*2;
        if(v < 1000000 and dist[v] > dist[n] + 1){
            dist[v] = dist[n] + 1;
            q.push(v);
		}
		v = n-1;
		if(v >= 0 and dist[v] > dist[n] + 1){
            dist[v] = dist[n] + 1;
			q.push(v);
        }		
	}
	cout << dist[m] << '\n';
	return 0;
}