// Problem Title : Football
// Link : https://codeforces.com/problemset/problem/96/A
// Author : janwei25
// Date : 05-19-2019 11:07:02

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str;
	cin >> str;
	
	int zeroStreak = 0, oneStreak = 0;
	
	int n = str.size();
	
	for(int i = 0; i < n; i++) {
		if(str[i] == '0') {
			oneStreak = 0;
			if(++zeroStreak == 7) {
				cout << "YES" << '\n';
				return 0;
			}
		}
		else {
			zeroStreak = 0;
			if(++oneStreak == 7) {
				cout << "YES" << '\n';
				return 0;
			}
		}
	}
	
	cout << "NO" << '\n';
	
	return 0;
}
