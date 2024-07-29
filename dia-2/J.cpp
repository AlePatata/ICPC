#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll N, W; cin >> N >> W;
	priority_queue <pair <ll, ll>> pq;
	for (int i = 0; i < N; ++i) {
		ll ai, bi; cin >> ai >> bi;
		pq.push({ai,bi});
	}
	ll deliciousness = 0;
	while (W > 0 and !pq.empty()) {
		pair <ll, ll> par = pq.top(); pq.pop();
		ll d = par.first; 
		ll gramos = par.second;
		if (W<gramos) {
			gramos = W;
		}
		d = d*gramos;
		W -= gramos;
		deliciousness += d;
	}
	cout << deliciousness;
	return 0;
}