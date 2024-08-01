#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
 
int match(string &s, string &t) {//buscamos string chico t dentro del string grande s
    int n = t.size(), m = s.size();
    int P[n]; //arreglo que contiene para cada i, el tamano del sufijo estricto dentro de s[1..i] que tambien es prefijo.
    P[0] = 0;
    for(int i = 1; i < n; i++){
        int k = P[i-1]; 
        while(t[k] != t[i] and k > 0){
            k = P[k - 1];
        }
        P[i] = (t[k] == t[i] ? k + 1 : 0);
    }
    // for(int i = 0; i < n; i++){
    //     cerr << P[i] << ' ';
    // }
    // cerr << endl;
    int ans = 0, k = 0; 
    for(int j = 0; j < m; j++){
        while(t[k] != s[j] and k > 0){
            k = P[k - 1];
        }
        if(t[k] == s[j] and ++k == n){
            k = P[n - 1], ans++;
        }
    }
    return ans; //retorna la cantidad de veces que aparece
}
 
int main(){
	ios::sync_with_stdio(false); cin.tie(0);
    string s, t;
    cin >> s >> t;
    int r = match(s, t);
    cout << r << endl;
}