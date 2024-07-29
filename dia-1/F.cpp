#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n,k;
    cin >> n;
    cin >> k;
  
    ll fumadas = n, colillas = n;

    
    while (colillas>=k){
        fumadas += colillas/k;
        colillas -= (colillas%k/k);
    }
    cout << fumadas << '\n';
    return 0;
}