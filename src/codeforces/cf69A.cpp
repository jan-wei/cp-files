// Problem Title : Young Physicist
// Link : https://codeforces.com/problemset/problem/69/A
// Author : janwei25
// Date : 05-19-2019 19:44:59

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int cx = 0, cy = 0, cz = 0;
	
	for(int i = 0; i < n; i++) {
		int x, y, z;
		cin >> x >> y >> z;
		cx += x;
		cy += y;
		cz += z;
	}
	
	cout << (cx == 0 && cy == 0 && cz == 0 ? "YES" : "NO") << '\n';
	
	return 0;
}
