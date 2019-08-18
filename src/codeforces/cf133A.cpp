// Problem Title : HQ9+
// Link : https://codeforces.com/problemset/problem/133/A
// Author : janwei25
// Date : 05-19-2019 19:58:53

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	int len = s.size();
	
	for(int i = 0; i < len; i++) {
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			cout << "YES" << '\n';
			return 0;
		}
	}
	
	cout << "NO" << '\n';
	
	return 0;
}
