// Problem Title : Presents
// Link : https://codeforces.com/problemset/problem/136/A
// Author : janwei25
// Date : 08-18-2019 11:45:48

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	vector<int> give(n), receive(n);
	
	for(int i = 0; i < n; i++) cin >> give[i];
	for(int i = 0; i < n; i++) receive[give[i]-1] = i + 1;
	for(int i = 0; i < n; i++) cout << receive[i] << ' ';
	cout << '\n';
	
	return 0;
}
