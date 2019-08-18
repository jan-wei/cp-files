// Problem Title : Domino piling
// Link : https://codeforces.com/problemset/problem/50/A
// Author : janwei25
// Date : 05-19-2019 10:32:30

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m, n;
	
	cin >> m >> n;
	
	int res ;
	if(m % 2 == 0 || n % 2 == 0) {
		res = m * n / 2;
	}
	else {
		res = (max(m, n) - 1) * min(m, n) / 2;
		res += min(m, n) / 2;
	}
	
	cout << res << '\n';
	
	return 0;
}
