// Problem Title : Queue at the School
// Link : https://codeforces.com/problemset/problem/266/B
// Author : janwei25
// Date : 05-19-2019 20:27:54

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, t;
	string queue;
	
	cin >> n >> t >> queue;
	
	for(int i = 0; i < t; i++) {
		for(int j = 0; j < n - 1; j++) {
			if(queue[j] == 'B' && queue[j+1] == 'G') {
				swap(queue[j], queue[j+1]);
				j++;
			}
		}
	}
	
	cout << queue << '\n';
	
	return 0;
}
