// Problem Title : Twins
// Link : https://codeforces.com/problemset/problem/160/A
// Author : janwei25
// Date : 05-19-2019 19:52:12

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> coins(n);
	
	for(int i = 0; i < n; i++) cin >> coins[i];
	
	int half = accumulate(coins.begin(), coins.end(), 0) / 2;
	
	sort(coins.begin(), coins.end(), greater<int>());
	
	int cur = 0;
	for(int i = 0; i < n; i++) {
		cur += coins[i];
		if(cur > half) {
			cout << i + 1 << '\n';
			return 0;
		}
	}
	
	return 0;
}
