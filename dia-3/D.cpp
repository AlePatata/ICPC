#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> graph;
vector<int> dist;
vector<int> parent;
vector<int> direccion;

void dfs(int u) {
    for(int v : graph[u]){
        if(dist[v] == -1){
            dist[v] = dist[u] + 1;
            parent[v] = u;
            dfs(v);
        }
        if(direccion[v] == -1){
            direccion[v] = !direccion[parent[v]];
        }
    }
}

int main() {
	int n, m; cin >> n >> m;
	graph.resize(n);
    dist.resize(n, -1);
    parent.resize(n, -1);
    entran.resize(m, -1);
    vector <vector<int>> aristas(m);

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        aristas[i] = {u,v};
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dist[0] = 0;
    entran[0] = 1;
    dfs(0);
    
    for(int i = 0; i < m; i++)
    	if(bipartito){
	    	if(direccion[aristas[i].first]) 
	        cout << 1;
	    	else cout << 0;}
    cout << endl;
	return 0;
}