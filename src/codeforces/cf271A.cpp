// Problem Title : Beautiful Year
// Link : https://codeforces.com/problemset/problem/271/A
// Author : janwei25
// Date : 08-18-2019 11:09:49

#include <bits/stdc++.h>

using namespace std;

bool ok(int val) {
	vector<bool>used(10, false);
	while(val != 0) {
		int dig = val % 10;
		if(used[dig]) return false;
		used[dig] = true;
		val /= 10;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int y;
	cin >> y;
	
	for(int i = y + 1;; i++) if(ok(i)) {
		cout << i << '\n';
		break;
	}
	
	return 0;
}
