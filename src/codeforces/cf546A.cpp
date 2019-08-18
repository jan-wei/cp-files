// Problem Title : Soldier and Bananas
// Link : https://codeforces.com/problemset/problem/546/A
// Author : janwei25
// Date : 05-19-2019 19:37:39

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k, n, w;
	cin >> k >> n >> w;
	
	int cost = k * w * (w + 1) / 2;
	
	cout << (cost > n ? cost - n : 0) << '\n';
	
	return 0;
}
