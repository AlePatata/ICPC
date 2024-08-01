#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
#pragma GCC optimize("O3")

using namespace std;
typedef long long ll;

const ll INF = 1e9;

template<
  class T1, // answer value stored on nodes
  class T2, // lazy update value stored on nodes
  T1 merge(T1, T1), 
  void push_upd(T2 /*padre*/, T2& /*hijo*/, int, int, int, int), // push update value from a node to another. parent -> child
  void apply_upd(T2, T1&, int, int)           // apply the update value of a node to its answer value. upd -> ans
>
struct segment_tree_lazy{
  int n;
  T2 e; // update neutral element
  vector<T1> ST;
  vector<T2> lazy;
  vector<bool> upd;
  void build(int i, int l, int r, vector<T1>&values){
    if (l == r){
      ST[i] = values[l];
      return;
    }
    build(i << 1, l, (l + r) >> 1, values);
    build(i << 1 | 1, (l + r) / 2 + 1, r, values);
    ST[i] = merge(ST[i << 1], ST[i << 1 | 1]);
  }
  segment_tree_lazy(vector<T1>&values, T2 e) : 
		 	n(values.size()), 
			e(e), 
			ST(n << 2 | 3),
			upd(n << 2 | 3, false),
			lazy(n << 2 | 3, e){
    build(1, 0, n - 1, values);
  }
  segment_tree_lazy(int n, T1 x, T2 e) : 
  		n(n),
  		e(e), 
  		ST(n << 2 | 3),
  		upd(n << 2 | 3, false), 
  		lazy(n << 2 | 3, e){
    vector<T1> v(n, x);
    build(1, 0, n - 1, v);
  }
  segment_tree_lazy(){}
  void push(int i, int l, int r){
    if (upd[i]){
      apply_upd(lazy[i], ST[i], l, r);
      if (l != r){
        push_upd(lazy[i], lazy[i << 1], l, r, l, (l + r) / 2);
        push_upd(lazy[i], lazy[i << 1 | 1], l, r, (l + r) / 2 + 1, r);
        upd[i << 1] = 1;
        upd[i << 1 | 1] = 1;
      }
      lazy[i] = e;
      upd[i] = false;
    }
  }
  void update(int i, int l, int r, int a, int b, T2 &u){
    if (l >= a and r <= b){
      push_upd(u, lazy[i], a, b, l, r);
      upd[i] = true;
    }
    push(i, l, r);
    if (l > b or r < a or (l >= a and r <= b)) return;
    update(i << 1, l, (l + r) >> 1, a, b, u);
    update(i << 1 | 1, (l + r) / 2 + 1, r, a, b, u);
    ST[i] = merge(ST[i << 1], ST[i << 1 | 1]);
  }
  T1 query(int i, int l, int r, int a, int b){
    push(i, l, r);
    if (a <= l and r <= b)
      return ST[i];
    int mid = (l + r) >> 1;
    if (mid < a)
      return query(i << 1 | 1, mid + 1, r, a, b);
    if (mid >= b) 
      return query(i << 1, l, mid, a, b);
    return merge(query(i << 1, l, mid, a, b), query(i << 1 | 1, mid + 1, r, a,   b));
  }
  void get_leaves(int i, int l, int r, vector<T1> &res){
    push(i, l, r);
    if (l == r){
      res[l] = ST[i];
      return;
    }
    get_leaves(i << 1, l, (l + r) / 2, res);
    get_leaves(i << 1 | 1, (l + r) / 2 + 1, r, res);
  }

  // user methods
  // update range (a, b) by u
  void update(int a, int b, T2 u){
    update(1, 0, n - 1, a, b, u);
  }
  // query range (a, b)
  T1 query(int a, int b){
    return query(1, 0, n - 1, a, b);
  }
  // push all updates and get leafs values in O(n)
  // leaf values are stored in res
  void get_leaves(vector<T1> &res) {
    res.resize(n);
    get_leaves(1, 0, n - 1, res);
  }
};

template<class T>
T merge(T a, T b){
  return max(a,b);
}

// push update value u1 to update value u2
// (l1, r1) is the range of the node of the update u1
// (l2, r2) is the range of the node of the update u2
template<class U>
void push_upd(U u1, U &u2, int l1, int r1, int l2, int r2){
  u2 += u1;
}

// apply update value u to node value v
// both of the same node of range (l, r)
template<class T, class U>
void apply_upd(U u, T &v, int l, int r){
  v += u;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); 
	ll n; cin >> n;
	vector <ll> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  // CONSTRUCCION DEL LAZY
  segment_tree_lazy <ll ,ll, merge<ll>, push_upd<ll>, apply_upd<ll, ll> > stl(a, 0);
  ll m; 
	getline(cin, line);
  	stringstream ssm(line);
  	ssm >> m;

  // QUERIES
	for (ll j = 0; j < m; ++j) { 
		getline(cin, line);
		  stringstream ss(line);
      vector<ll> v;
		  ll x;
      while(ss >> x)
        v.push_back(x);
		if (v.size() == 2) {
			ll lf = v[0], rg = v[1], minn = a[lf];
			if (lf <= rg) {
        minn = stl.query(lf,rg);
      } else {
        minn = min(stl.query(0,rg),stl.query(lf,n-1));
      }
			cout << minn << '\n';
		} 
		if (v.size() == 3) {
			ll lf = v[0], rg = v[1], va = v[2];
			if (lf <= rg) {
        stl.update(lf, rg, va);
      } else {
        stl.update(0,rg,va);
        stl.update(lf,n-1,va);
      }
			
		}
	}
	return 0;
}