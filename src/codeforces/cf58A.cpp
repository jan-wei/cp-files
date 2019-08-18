// Problem Title : Chat room
// Link : https://codeforces.com/problemset/problem/58/A
// Author : janwei25
// Date : 05-19-2019 18:57:07

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	int len = s.length();
	const string hello = "hello";
	int cur = 0;
	
	for(int i = 0; i < len; i++) {
		if(s[i] == hello[cur]) {
			cur++;
			if(cur == 5) {
				cout << "YES" << '\n';
				return 0;
			}
		}
	}
	
	cout << "NO" << '\n';
	
	return 0;
}
