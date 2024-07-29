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
		pq.push(a);
	}
	ll actual = 0, pos = 0;

	ll mayor = pq.top();
	pq.pop();
	while(mayor>pos) {
		actual += mayor - pos - 1;
		pos++;
		if (!pq.empty()){
		mayor = pq.top();
		pq.pop();
		} else {mayor = 0;}
	}
	cout << actual;
	return 0;
}