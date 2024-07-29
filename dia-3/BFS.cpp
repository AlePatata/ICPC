#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        u--; v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    queue<int> q;
    vector<int> dist(n, INF);

    int start = 0;
    dist[start] = 0;
    q.push(start);
    
    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v : graph[u]){
            if(dist[v] > dist[u] + 1){
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    
    for(int i = 0; i < n; i++)
        cout << dist[i] << " ";
    cout << endl;

    return 0;
}