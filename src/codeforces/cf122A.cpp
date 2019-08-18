// Problem Title : Lucky Division
// Link : https://codeforces.com/problemset/problem/122/A
// Author : janwei25
// Date : 05-19-2019 19:27:07

#include <bits/stdc++.h>

using namespace std;

bool isLucky(int i) {
	while(i > 0) {
		if(i % 10 != 4 && i % 10 != 7) return false;
		i /= 10;
	}
	
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	if(isLucky(n)) {
		cout << "YES" << '\n';
		return 0;
	}
	
	for(int i = 4; i < n; i++) {
		if(n % i == 0 && isLucky(i)) {
			cout << "YES" << '\n';
			return 0;
		}
	}
	
	cout << "NO" << '\n';
	
	return 0;
}
