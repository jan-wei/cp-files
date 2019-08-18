// Problem Title : Elephant
// Link : https://codeforces.com/problemset/problem/617/A
// Author : janwei25
// Date : 08-18-2019 11:16:11

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x;
	cin >> x;
	
	int res = 0;
	while(x > 0) {
		int steps;
		if(x >= 5) {
			steps = x / 5;
			res += steps;
			x -= steps * 5;
		} else if(x >= 4) {
			steps = x / 4;
			res += steps;
			x -= steps * 4;
		} else if(x >= 3) {
			steps = x / 3;
			res += steps;
			x -= steps * 3;
		} else if(x >= 2) {
			steps = x / 2;
			res += steps;
			x -= steps * 2;
		} else {
			steps = x;
			res += steps;
			x -= steps;
		}
	}
	
	cout << res << '\n';
	
	return 0;
}
