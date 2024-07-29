#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string sup;
    string inf;
    cin >> sup >> inf;
    int n = sup.size();
    int cnt = 0;
    int i =0;
    while(i<n){
        if(sup[i]=='0' and sup[i+1]=='0' and inf[i]=='0'){
            sup[i]='X';
            sup[i+1]='X';
            inf[i]='X';
            cnt++;
            i++;
        } else if(sup[i]=='0' and inf[i]=='0' and inf[i+1]=='0'){
            sup[i]='X';
            inf[i]='X';
            inf[i+1]='X';
            cnt++;
            i++;
        } else if(sup[i]=='0' and sup[i+1]=='0' and inf[i+1]=='0'){
            sup[i]='X';
            sup[i+1]='X'; 
            inf[i+1]='X';
            cnt++;
            i++;
        } else if(sup[i+1]=='0' and inf[i]=='0' and inf[i+1]=='0'){
            inf[i]='X';
            sup[i+1]='X'; 
            inf[i+1]='X';
            cnt++;
            i++;
        }
        else {i++;}
    }
    cout << cnt << " ";
    
    return 0;
}
