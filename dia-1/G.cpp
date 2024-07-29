#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n; cin>>n;
	ll acc=0;
	priority_queue <ll> pq; 

	for (ll i = 0; i < n; ++i){
		ll a;
		cin >> a;
		acc += a;
		if(acc<0){
			pq.push(-acc);
		}
	}
	if(!pq.empty()){
		cout<<pq.top();
	}else{
		cout<<0;
	}
	return 0;
}