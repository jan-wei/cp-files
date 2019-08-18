// Problem Title : George and Accommodation
// Link : https://codeforces.com/problemset/problem/467/A
// Author : janwei25
// Date : 05-19-2019 20:18:26

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int res = 0;
	for(int i = 0; i < n; i++) {
		int p, q;
		cin >> p >> q;
		res += (q - p > 1);
	}
	
	cout << res << '\n';
	
	return 0;
}
