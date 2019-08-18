// Problem Title : Bit++
// Link : https://codeforces.com/problemset/problem/282/A
// Author : janwei25
// Date : 05-19-2019 10:46:22

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, res = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		string statement;
		
		cin >> statement;
		
		if(statement == "X++" || statement == "++X") res++;
		else res--;
	}
	
	cout << res << '\n';
	
	return 0;
}
