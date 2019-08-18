// Problem Title : Helpful Maths
// Link : https://codeforces.com/problemset/problem/339/A
// Author : janwei25
// Date : 05-19-2019 11:12:04

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	vector<int> cnt(3, 0);
	
	int n = s.size();
	
	for(int i = 0; i < n; i += 2) cnt[s[i] - '0' - 1]++;
	
	string res = "";
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < cnt[i]; j++) {
			res.push_back(i + 1 + '0');
			res.push_back('+');
		}
	}
	
	res.pop_back();
	
	cout << res << '\n'; 
	
	return 0;
}
