#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	for (int l = 0; l < t; l++) {
		ll n; cin >> n;
		string s,solucion = ""; cin >> s;
		int N = 0, S = 0, E = 0, W = 0;
		int vertical = 0, horizontal = 0;
		bool R = false, H = false;
		for (int j = 0; j < n; j++) {
			char instruccion = s[j];
			if (instruccion == 'N') {
				if (vertical < 1) {
					solucion += "R"; R = true;
					vertical++;
				}
				else {
					solucion += "H"; H = true;
					vertical--;	
				} N++;
			}
			if (instruccion == 'S') {
				if (vertical > -1) {
					solucion += "R"; R = true;
					vertical--;	
				}
				else {
					solucion += "H"; H = true;
					vertical++;	
				} S++;
			}
			if(instruccion == 'E') {
				if (horizontal < 1) {
					solucion += "R"; R = true;
					horizontal++;
				}
				else {
					solucion += "H"; H = true; 
					horizontal--;
				} E++;	
			}
			if (instruccion == 'W') {
				if (horizontal > -1) {
					solucion += "R"; R = true;
					horizontal--;
				}
				else {
					solucion += "H"; H = true;
					horizontal++;
				} W++;
			}
		}
		if (vertical % 2 == 0 and horizontal % 2 == 0 and R and H) {
			cout << solucion << '\n';	
		}
		else {
			cout << "NO" << '\n';
		}
	}
	return 0;
}