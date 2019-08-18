// Problem Title : Petya and Strings
// Link : https://codeforces.com/problemset/problem/112/A
// Author : janwei25
// Date : 05-19-2019 10:51:39

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str1, str2;
	cin >> str1 >> str2;
	
	int n = str1.size();
	
	for(int i = 0; i < n; i++) {
		if(tolower(str1[i]) < tolower(str2[i])) {
			cout << -1 << '\n';
			return 0;
		}
		else if(tolower(str1[i]) > tolower(str2[i])) {
			cout << 1 << '\n';
			return 0;
		}
	}
	
	cout << 0 << '\n';
	
	return 0;
}
