// Problem Title : Boy or Girl
// Link : https://codeforces.com/problemset/problem/236/A
// Author : janwei25
// Date : 05-19-2019 10:57:41

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string username;
	cin >> username;
	
	vector<bool> present(26, 0);
	
	int n = username.size();
	
	for(int i = 0; i < n; i++) {
		present[username[i] - 'a'] = true;
	}
	
	int cnt = 0;
	for(int i = 0; i < 26; i++) cnt += present[i];
	
	cout << (cnt % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';
	
	return 0;
}
