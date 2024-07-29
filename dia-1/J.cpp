#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	bool left = false;
	if(s == "RSM" || s == "SRM" || s == "RMS") {
		cout<<"Yes"<<'\n';
	} else {
		cout<<"No"<<'\n';
	}
	return 0;
}