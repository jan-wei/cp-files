// Problem Title : Taxi
// Link : https://codeforces.com/problemset/problem/158/B
// Author : janwei25
// Date : 05-19-2019 11:37:29

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> grp(n);
	
	for(int i = 0; i < n; i++) cin >> grp[i];
	
	vector<int>cnt(5, 0);
	
	for(int i = 0; i < n; i++) cnt[grp[i]]++;
	
	int res = 0;
	// 4s have to be in their own taxi
	res += cnt[4];
	
	// try to pair off ones and threes
	int oneThree = min(cnt[1], cnt[3]);
	res += oneThree;
	cnt[1] -= oneThree;
	cnt[3] -= oneThree;
	
	// if there are threes left they have to sit sep taxis
	res += cnt[3];
	
	// the remaining 1s can sit together up till 4
	res += cnt[1] / 4;
	cnt[1] = cnt[1] % 4;
	if(cnt[1] == 3) {
		res++;
		cnt[1] = 0;
	} 
	
	// twos cant sit in groups of 2
	res += cnt[2] / 2;
	// if there is one group of 2 left, can pair with the 1s left
	if(cnt[2] % 2 || cnt[1] != 0) res ++;
	
	cout << res << '\n';	
	
	return 0;
}
