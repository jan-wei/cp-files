// Problem Title : Kefa and First Steps
// Link : https://codeforces.com/problemset/problem/580/A
// Author : janwei25
// Date : 08-18-2019 11:35:35

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vector<int> numbers(n);
	
	for(int i = 0; i < n; i++) cin >> numbers[i];
	
	int res = 1;
	int maxHere = 1;
	for(int i = 1; i < n; i++) {
		if(numbers[i] >= numbers[i-1]) {
			++maxHere;
			res = max(res, maxHere);
		} else {
			maxHere = 1;
		}
	}
	
	cout << res << '\n';
	
	return 0;
}
