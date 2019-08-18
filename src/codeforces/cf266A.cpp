// Problem Title : Stones on the Table
// Link : https://codeforces.com/problemset/problem/266/A
// Author : janwei25
// Date : 05-19-2019 11:33:42

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	string stones;
	
	cin >> n >> stones;
	
	int res = 0;
	for(int i = 1; i < n; i++) {
		if(stones[i] == stones[i-1]) res++;
	}
	
	cout << res << '\n';
	
	return 0;
}
