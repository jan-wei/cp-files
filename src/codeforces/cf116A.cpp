// Problem Title : Tram
// Link : https://codeforces.com/problemset/problem/116/A
// Author : janwei25
// Date : 05-19-2019 18:49:34

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, res = 0, cur = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int exit, enter;
		cin >> exit >> enter;
		
		cur += enter - exit;
		res = max(res, cur);
	}
	
	cout << res << '\n';
		
	return 0;
}
