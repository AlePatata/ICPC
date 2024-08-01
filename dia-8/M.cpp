#include <bits/stdc++.h>
using namespace std; 

#define ll long long
#define ar array

const ll mxN = 2e5+5, LOG = 25, M = 1e9+7;
ll n, m, up[LOG][mxN], mxup[20][mxN], d[mxN];

ll parent[mxN], depth[mxN];


vector < vector <ll> > adj; 




void preprocess(ll u = 0, ll p = 0) {
    parent[u] = up[0][u] = p;
    for (ll x = 1; x < LOG; ++x) {
        if (up[x-1][u] == -1) {
            up[x][u]= -1;
            continue;
        }
        up[x][u] = up[x-1][up[x-1][u]];
    }
    for (ll v : adj[u]) {
        if (v == p) continue;

        depth[v] = depth[u] + 1; 
        preprocess(v, u);
    }
}

ll k_ancestro(ll u, ll k) {
    for (int bit = 0; bit < LOG; ++bit) {
        if (k & (1<<bit)) {
            u = up[bit][u];
            if (u == -1) return -1;
        }
    } return u;
}

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
    memset(up, -1, sizeof(up)); 

    ll n, q;
    cin >> n >> q; 
    adj.resize(n);
    // ARMAR GRAFO
    vector <ll> parent(n);
    for (ll i = 1; i < n; ++i) {
        cin >> parent[i];
        parent[i]--;
        adj[i].push_back(parent[i]);
        adj[parent[i]].push_back(i);
    }
    preprocess(0,-1);
    for (int i = 0; i < q; ++i) {
        ll x, k; cin >> x >> k;
        x--;
        ll sol = k_ancestro(x, k) == -1? -1 : k_ancestro(x, k)+1; 
        cout << sol << '\n';
    } 
    
}