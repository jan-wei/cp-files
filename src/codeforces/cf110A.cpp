// Problem Title : Nearly Lucky Number
// Link : https://codeforces.com/problemset/problem/110/A
// Author : janwei25
// Date : 05-19-2019 20:33:52

#include <bits/stdc++.h>

using namespace std;

bool isLucky(int i) {
	if(i == 0) return false;
	
	while(i > 0) {
		int mod = i % 10;
		if(mod != 4 && mod != 7) return false;
		i /= 10;
	}
	
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string number;
	cin >> number;
	
	int nd = number.size();
	int cnt = 0;
	for(int i = 0; i < nd; i++) {
		if(number[i] == '4' || number[i] == '7') cnt++;
	}
	
	cout << (isLucky(cnt) ? "YES" : "NO") << '\n';
	
	return 0;
}
