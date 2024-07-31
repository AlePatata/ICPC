#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

 ll n,k,S,b;
 cin >> n;
 cin >> k;

 S = n ;//cigarros fumados
 b = n ;//colillas
 n = 0 ;//cigarros

 while (b >= k){
  n = b/k; //cigarros rearmados
  b = b - n*k + n; //nuevas colillas
  S += n; //nuevos cigarros fumados
 }
 cout << S << endl;
 return 0;
}