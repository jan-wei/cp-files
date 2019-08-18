// Problem Title : Beautiful Matrix
// Link : https://codeforces.com/problemset/problem/263/A
// Author : janwei25
// Date : 05-19-2019 11:24:57

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<vector<int>> matrix(5, vector<int>(5));
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> matrix[i][j];
		}
	}
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if(matrix[i][j]) {
				cout << abs(j - 2) + abs(i - 2) << '\n';
				return 0;
			}
		}
	}
	
	return 0;
}
