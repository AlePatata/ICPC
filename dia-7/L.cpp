#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
   int n;
   cin >> n;
   string word;
 
   for (int i=0;i<n;i++){
   cin>>word;
   int k=word.size();
      if(k>10){
      cout << word[0] << k - 2 << word[k-1] << '\n';
      } else{
         cout << word << '\n';
      };
};
 
    return 0;
}