// Problem Title : Team
// Link : https://codeforces.com/problemset/problem/231/A
// Author : janwei25
// Date : 05-19-2019 10:19:02

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	int res = 0;
	for(int i = 0; i < n; i++) {
		vector<int> sure(3);
		
		char cnt = 0;
		for(int j = 0; j < 3; j++) {
			cin >> sure[i];
			cnt += sure[i];
		}
		
		if(cnt >= 2) res++;
	}
	
	cout << res << '\n';
	
	return 0;
}
