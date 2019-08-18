// Problem Title : Word Capitalization
// Link : https://codeforces.com/problemset/problem/281/A
// Author : janwei25
// Date : 05-19-2019 11:21:32

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	s[0] = toupper(s[0]);
	
	cout << s << '\n';
	
	return 0;
}
