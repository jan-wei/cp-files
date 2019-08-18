// Problem Title : cAPS lOCK
// Link : https://codeforces.com/problemset/problem/131/A
// Author : janwei25
// Date : 05-19-2019 20:02:50

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin >> s;
	
	string cpy = s;
	
	int len = cpy.size();
	
	cpy[0] = isupper(cpy[0]) ? tolower(cpy[0]) : toupper(cpy[0]);
	
	for(int i = 1; i < len; i++) {
		if(islower(cpy[i])) {
			cout << s << '\n';
			return 0;
		}
		else {
			cpy[i] = tolower(cpy[i]);
		}
	}
	
	cout << cpy << '\n'; 
	
	return 0;
}
