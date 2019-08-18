// Problem Title : Translation
// Link : https://codeforces.com/problemset/problem/41/A
// Author : janwei25
// Date : 08-18-2019 11:03:05

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s, t;
	cin >> s >> t;
	
	int ns = s.size(), nt = t.size();
	
	if(ns != nt) {
		cout << "NO" << '\n';
		return 0;
	}
	
	for(int i = 0; i < ns; i++) {
		if(s[i] != t[ns-i-1]) {
			cout << "NO" << '\n';
			return 0;
		}
	}
	
	cout << "YES" << '\n';
	return 0;
}
