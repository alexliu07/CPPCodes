#include<bits/stdc++.h>
using namespace std;
int main(){
	int count = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] % 2 != 0) {
			count = count + (s[i] - '0');
		}
	}
	cout << count;
	return 0;
}